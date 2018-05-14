#include <stdio.h>

int main(){
  int s;
  scanf("%d", &s);
  if(s>0)
    printf("positive\n");
  else if(s<0)
    printf("negative\n");
  else
    printf("zero\n");
}
