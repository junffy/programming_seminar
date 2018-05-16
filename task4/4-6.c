#include <stdio.h>

int euclid_normal(int x, int y){
  int tmp;  
  while((tmp = x % y) != 0){
   x = y;
   y = tmp;
  }
  return y;
}

int euclid_recursive(int x, int y){
  if(x % y == 0)
    return y; 
  else
    return (euclid_recursive(y, x % y));
}

int main(){
  int x, y, tmp;
  scanf("%d %d", &x, &y);

  if(x < y){
    tmp = x;
    x = y;
    y = tmp;
  }
  if(y < 1)
    return -1;

  printf("%d\n", euclid_normal(x,y));
  printf("%d\n", euclid_recursive(x,y));
}
