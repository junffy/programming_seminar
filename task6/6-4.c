#include <stdio.h>

void sort(int *x, int *y){
 int tmp;
 if(*x < *y){
   tmp = *x;
   *x = *y;
   *y = tmp;
 }
}

int main(){
  int a = 20, b = 10;
  int *pa, *pb;
  pa = &a;
  pb = &b;
  
  printf("%d, %d\n", a, b);
  sort(&a, &b);
  printf("%d, %d\n", a, b);
}
