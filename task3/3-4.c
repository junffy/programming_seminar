#include <stdio.h>

int main(){
  int i=1;
  int acm;
  do {
    acm+=i;
    i++; 
  } while(i<=10);

  printf("%d\n", acm);
}
