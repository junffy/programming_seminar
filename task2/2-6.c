#include <stdio.h>

int main(){
  double s;
  scanf("%lf", &s);
  printf("%f C = %f F\n", s, s*1.8+32);
  printf("%f F = %f C\n", s, (s-32)/1.8);
}
