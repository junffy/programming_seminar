#include <stdio.h>

int main(){
  int digit=0, num;
  scanf("%d", &num);
  while(num != 0){
    num = num / 10;
    ++digit;
  }
  printf("%d\n", digit);
}

