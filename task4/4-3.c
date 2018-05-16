#include <stdio.h>

void min(int x1, int x2, int x3){
  int min; 
  if(x1 <= x2)
    min = x1; 
  else
    min = x2;

  if(x3 <= min)
    printf("%d\n", x3);
  else   
    printf("%d\n", min);
}

int main(){
  int x1, x2, x3;
  scanf("%d %d %d", &x1, &x2, &x3);
  min(x1, x2, x3);
}
