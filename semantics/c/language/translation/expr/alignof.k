module C-EXPR-ALIGNOF
     imports C-CONFIGURATION
     imports BASIC-K
     imports BOOL
     imports C-ABSTRACT-SYNTAX
     imports C-ALIGNMENT-SYNTAX
     imports C-DYNAMIC-SYNTAX
     imports C-ERROR-SYNTAX
     imports C-SETTINGS-SYNTAX
     imports C-TYPING-EXPR-SYNTAX
     imports C-TYPING-SYNTAX

     rule (.K => typeof(E)) ~> AlignofExpression(E:KItem)
          requires notBool isLocation(E)

     rule (.K => Loc) ~>
          AlignofExpression(CodeLoc(E:KItem, Loc:CabsLoc) => E)

     rule typeof(T:Type) ~> AlignofExpression(_) => alignofType(T)
     rule AlignofType(T:Type, K:KItem) => alignofType(DeclType(T, K))

     syntax KItem ::= alignofType(KItem) [strict]
     rule alignofType(T:Type) => tv(getAlignas(T), ut(SetItem(IntegerConstant), cfg:sizeut))
          requires isCompleteType(T) andBool notBool isFunctionType(T)
     rule (.K => CV("TAL1", "Trying to compute alignof of a type that is incomplete or a function type."))
          ~> alignofType(T:Type)
          requires notBool isCompleteType(T) orBool isFunctionType(T)
endmodule

