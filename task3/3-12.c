#include <stdio.h>
int main(){
  int n, i;
  scanf ("%d",&n);
  for(i=2; n > 1; i += 1){
    while (n % i == 0) {
      printf ("%d ",i);
      n = n / i;
    } 
  }
  printf ("\n");
  return 0;
}

