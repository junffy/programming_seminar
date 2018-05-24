#include  <stdio.h>
#include  <string.h>
#include <ctype.h>
int main(void){
  char s[512];
  int i;
  int len;
  int flag = 1;
  scanf("%s", s);
  len = strlen(s);
  for (i = 0; i < len;i++){
    if (toupper(s[i]) != toupper(s[len-i-1])){
      flag = 0;
      break;
    }
  }

  if(flag == 1){
    printf("回文である\n");
  }else{
    printf("回文ではない\n");
  }
}
