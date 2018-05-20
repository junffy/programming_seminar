#include <stdio.h>

int main(){
  int i;
  int sum;
  int a[]={34, 78, 94, 35, 67, 89, 54, 32, 57, 47};
  for(i = 0; i < 10; i++){
   sum += a[i]; 
  }
  printf("%d\n", sum / 10);
}
