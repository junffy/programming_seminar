#include <stdio.h>

int main(){
  int s, y, m, d;
  scanf("%d", &s);
  s %= 100000000;
  y = s / 10000;
  m = (s / 100) % 100;
  d = s % 100;
  printf("%d/%d/%d\n", y, m, d);
}
