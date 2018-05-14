#include <stdio.h>

int main(){
  int i, sum=0, a, b;

  scanf("%d", &a);
  scanf("%d", &b);

  i = a;
  while(i <= b){
    sum += i;
    ++i;
  }

  printf("%d\n", sum);
}
