/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int f(long long x ) 
{ int tmp ;

  {
  if (x > 4294967295LL) {
    tmp = 1;
  } else {
    if (x < (-0x7FFFFFFF-1)) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  }
  return (tmp);
}
}
int main(void) 
{ int tmp ;

  {
  tmp = f(0LL);
  if (tmp != 0) {
    abort();
  }
  exit(0);
}
}