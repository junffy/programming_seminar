#include <stdio.h>

int main(){
  int i, j, acm;
  for(i=1; i <= 100; i++){
    acm += i;
    if((i%10)==0)
      printf("%d\n", acm);
    else
      printf("%d ", acm);
  }
}
