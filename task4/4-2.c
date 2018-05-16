#include <stdio.h>

void min(int x1, int x2){
  if(x1 <= x2)
    printf("%d, %d\n", x1, x2);
  else
    printf("%d, %d\n", x2, x1);
}

int main(){
  int x1, x2;
  scanf("%d %d", &x1, &x2);
  min(x1, x2);
}
