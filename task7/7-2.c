#include <stdio.h>
#include <string.h>

void alphasort(char a[5][256]){
  int i, j;
  char s[256];
  for(i = 0; i < 5; i++){
    for(j = i + 1; j < 5; j++){
      if (strcmp(a[i], a[j]) > 0){
        strcpy(s, a[i]);
        strcpy(a[i], a[j]);
        strcpy(a[j], s);
      }
    }
  }
}

int main(void){
  int i;
  char a[5][256];
  for(i = 0; i < 5; i++){
    printf("%dつ目の文字列: ", i + 1);
    scanf("%s", a[i]);
  }
  alphasort(a);
  for(i = 0; i < 5; i++){
    printf("%s, 文字列の長さ：%d\n", a[i], (int)strlen(a[i]));
  }
}
