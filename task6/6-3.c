#include <stdio.h>

void swap(int *x, int *y){
 int tmp;
 tmp = *x;
 *x = *y;
 *y = tmp;
}

int main(){
  int a = 20, b = 10;
  int *pa, *pb;
  pa = &a;
  pb = &b;
  
  printf("%d, %d\n", a, b);
  swap(&a, &b);
  printf("%d, %d\n", a, b);
}
