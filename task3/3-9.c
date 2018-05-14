#include <stdio.h>

int main(){
  int num, acm=0;
  do {
    scanf("%d", &num);
    acm += num;
  } while (num > 0);
  printf("%d\n", acm);
}
