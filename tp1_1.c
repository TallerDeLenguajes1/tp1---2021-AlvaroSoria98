#include "stdio.h"
int main() {
  int a=9, *p;
  p=&a;
  printf("punt a: %d\npunto b: %p\npunto c: %p\npunto d: %p\npunto e: %p", *p, &p,&a,p,sizeof(p));
  return 0;
}
