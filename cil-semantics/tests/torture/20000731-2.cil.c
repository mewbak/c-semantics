/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int main(void) 
{ int i ;
  int j ;

  {
  i = 1;
  j = 0;
  while (1) {
    if (! (i != 1024)) {
      if (! (j <= 0)) {
        break;
      }
    }
    i *= 2;
    j ++;
  }
  if (j != 10) {
    abort();
  }
  exit(0);
}
}