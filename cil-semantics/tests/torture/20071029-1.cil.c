/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct __anonstruct_f_2 {
   int f1 ;
   int f2 ;
   int f3 ;
   int f4 ;
   int f5 ;
   int f6 ;
   int f7 ;
   int f8 ;
   long f9 ;
   long f10 ;
   int f11 ;
};
union __anonunion_T_1 {
   struct __anonstruct_f_2 f ;
   char s[56] ;
   long a ;
};
typedef union __anonunion_T_1 T;
extern void exit(int  ) ;
extern void abort(void) ;
void ( __attribute__((__noinline__)) test)(T *t ) ;
static int i  =    11;
void ( __attribute__((__noinline__)) test)(T *t ) 
{ int tmp ;

  {
  tmp = i;
  i ++;
  if (t->f.f1 != tmp) {
    abort();
  }
  if (t->f.f2) {
    abort();
  } else {
    if (t->f.f3) {
      abort();
    } else {
      if (t->f.f4) {
        abort();
      } else {
        if (t->f.f5) {
          abort();
        } else {
          if (t->f.f6) {
            abort();
          } else {
            if (t->f.f7) {
              abort();
            } else {
              if (t->f.f8) {
                abort();
              } else {
                if (t->f.f9) {
                  abort();
                } else {
                  if (t->f.f10) {
                    abort();
                  } else {
                    if (t->f.f11) {
                      abort();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (i == 20) {
    exit(0);
  }
  return;
}
}
void ( __attribute__((__noinline__)) foo)(int i___0 ) 
{ T t ;
  T __constr_expr_0 ;

  {
  again: 
  i___0 ++;
  __constr_expr_0.f.f1 = i___0;
  __constr_expr_0.f.f2 = 0;
  __constr_expr_0.f.f3 = 0;
  __constr_expr_0.f.f4 = 0;
  __constr_expr_0.f.f5 = 0;
  __constr_expr_0.f.f6 = 0;
  __constr_expr_0.f.f7 = 0;
  __constr_expr_0.f.f8 = 0;
  __constr_expr_0.f.f9 = 0L;
  __constr_expr_0.f.f10 = 0L;
  __constr_expr_0.f.f11 = 0;
  t = __constr_expr_0;
  test(& t);
  goto again;
}
}
int main(void) 
{ T *t1 ;
  T *t2 ;
  int cnt ;
  T __constr_expr_0 ;
  int tmp ;

  {
  cnt = 0;
  t1 = (T *)0;
  loop: 
  t2 = t1;
  tmp = cnt;
  cnt ++;
  __constr_expr_0.f.f1 = 0;
  __constr_expr_0.f.f2 = 0;
  __constr_expr_0.f.f3 = 0;
  __constr_expr_0.f.f4 = 0;
  __constr_expr_0.f.f5 = 0;
  __constr_expr_0.f.f6 = 0;
  __constr_expr_0.f.f7 = 0;
  __constr_expr_0.f.f8 = 0;
  __constr_expr_0.f.f9 = (long )tmp;
  __constr_expr_0.f.f10 = 0L;
  __constr_expr_0.f.f11 = 0;
  t1 = & __constr_expr_0;
  if (cnt < 3) {
    goto loop;
  }
  if ((unsigned long )t1 != (unsigned long )t2) {
    abort();
  } else {
    if (t1->f.f9 != 2L) {
      abort();
    }
  }
  foo(10);
  return (0);
}
}