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
  int a[10]={34, 78, 94, 35, 67, 89, 54, 32, 57, 47};
  int i; 
  
  for(i = 0; i < 10; i++){
    sort(a, a+i);
  }
  printf("%d\n", a[0]);
}
