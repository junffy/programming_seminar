#include <stdio.h>
int main(void){
  int ymd;
  scanf("%d", &ymd);

  int y = ymd / 10000;
  int m = (ymd / 100) % 100;
  int d = ymd % 100;

  int dmax;
  switch (m) {
    case 2:
      dmax = 29;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      dmax = 30;
      break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      dmax = 31;
      break;
}

  if (1 <= d && d <= dmax) {
    printf("%d/%d/%d\n", y, m, d);
  } else {
    printf("Invalid day: %d\n", d);
  }
}
