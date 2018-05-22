#include <stdio.h>

int main(){
  int a=20, b=10;
  int *pa, *pb;
  pa = &a;
  pb = &b;
  printf("%d %d %d %d\n", *pa+*pb, *pa-*pb, (*pa)*(*pb), (*pa)/(*pb));
}
