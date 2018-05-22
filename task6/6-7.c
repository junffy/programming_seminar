#include <stdio.h>
#include <ctype.h>

void main(){
  char name[]="Taro Yamada";
  char *p = name;
  int i = 0;
  while(!(isspace(*p)))
    p++;
  *p = 0;

  printf("First Name = %s\n", name);
  printf("Last Name = %s\n", p+1);
}
