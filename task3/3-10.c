#include <stdio.h>

int main(){
  int num;
  int prime=0;
  int i;
  scanf("%d", &num);
  for(i=2; i < num; ++i){
    if(num % i == 0){
      prime = 1;
      break;
    }
  }

  if(prime == 0)
    printf("%dは素数\n", num);
  else
    printf("%dは素数でない\n", num);
}
