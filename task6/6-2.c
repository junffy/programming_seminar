#include <stdio.h>

int main(){
  int x[10];
  int i;
  for(i = 0; i < 10; i++){
    x[i] = i;
  }
  
  printf("%x\n", x);
  printf("%x\n", x+1);
  printf("%d\n", *x);
  printf("%d\n", *(x+1));
}
