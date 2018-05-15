#include <stdio.h>
#include <math.h>

int main(){
  int i, p=1, num;
  int digit=0;
  int tmp1;
  float tmp2;
  scanf("%d", &num);
  tmp1 = num;
    
  while(tmp1 != 0){
    tmp1 = tmp1 / 10;
    ++digit;
  }
  if(digit >= 3){
    for(i = 1; i <= (digit-3); ++i)
      p = p * 10; 
            
    tmp2 = num;
    tmp2 = num / (float)p;
    tmp2 = tmp2 + 0.5;
    tmp1 = tmp2;
    num = tmp1 * p;
    printf("%d\n", num);
  }
}
