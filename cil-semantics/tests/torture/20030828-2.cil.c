/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct rtx_def {
   int code ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int main(void) 
{ int tmp[2] ;
  struct rtx_def *r ;
  struct rtx_def s ;
  int *p ;
  int *q ;

  {
  r = & s;
  r->code = 39;
  p = tmp;
  q = p + 1;
  *q = 0;
  tmp[1] = 39;
  if (*q != 39) {
    abort();
  }
  exit(0);
}
}