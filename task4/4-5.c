#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main(){
  int i;
  double deg;
  for(i = 0; i <= 360; i+=5){
    deg = i;
    deg *= (M_PI/180.0);
    printf("%d,%f,%f\n", i, cos(deg), sin(deg));
  }
}
