#include <stdio.h>

int main(){
  int a, b, s;
  printf("購入する物の金額\n");
  scanf("%d", &a);
  printf("実際に支払われた金額\n");
  scanf("%d", &b);
  printf("お釣りの枚数\n");
  s = b - a;
  printf("1000円札 = %d\n", s / 1000);
  s = s % 1000;
  printf("500円硬貨 = %d\n", s / 500);
  s = s % 500;
  printf("100円硬貨 = %d\n", s / 100);
  s = s % 100;
  printf("50円硬貨 = %d\n", s / 50);
  s = s % 50;
  printf("10円硬貨 = %d\n", s / 10);
  s = s % 10;
  printf("5円硬貨 = %d\n", s / 5);
  s = s % 5;
  printf("1円硬貨 = %d\n", s);
 
}
