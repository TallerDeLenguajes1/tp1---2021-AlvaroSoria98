#include "stdio.h"
int main() {
  int a=9, *p;
  p=&a;
  printf("%d\n%p\n%p\n%p\n%p", *p, p,a,p,sizeof(p));
  return 0;
}
