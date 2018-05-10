#include <stdio.h>
int main(){
  double a;
  scanf("%lf", &a);
  printf("%f in = %f cm\n", a, a * 2.54);
  printf("%f cm = %f in\n", a, a / 2.54);
}
