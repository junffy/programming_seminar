#include <stdio.h>

int main(){
  double s;
  scanf("%lf", &s);
  printf("%f C = %d F\n", s, (int)(s*1.8+32));
  printf("%f F = %d C\n", s, (int)((s-32)/1.8));
}
