#include <stdio.h>

int main(){
  int s_in, s, m, h;
  scanf("%d", &s_in);
  h = s_in / 3600;
  s_in %= 3600;
  m = s_in / 60;
  s_in %= 60;
  s = s_in;
  printf("%dh %dmin %dsec\n", h, m, s);
}
