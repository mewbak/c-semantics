/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct s {
   short i1 ;
   long i2 ;
   short i3 ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
struct s foo(struct s s ) 
{ 

  {
  (s.i2) ++;
  return (s);
}
}
int main(void) 
{ struct s s ;
  struct s __constr_expr_0 ;
  struct s tmp ;

  {
  __constr_expr_0.i1 = (short)1000;
  __constr_expr_0.i2 = 2000L;
  __constr_expr_0.i3 = (short)3000;
  tmp = foo(__constr_expr_0);
  s = tmp;
  if ((int )s.i1 != 1000) {
    abort();
  } else {
    if (s.i2 != 2001L) {
      abort();
    } else {
      if ((int )s.i3 != 3000) {
        abort();
      }
    }
  }
  exit(0);
}
}