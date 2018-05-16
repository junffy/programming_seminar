#include <stdio.h>

int absolute(int i){
  if(i>=0){
    return i; 
  }else{
    i = i * (-1);
    return i; 
  }
}

int main(){
  int i;
  scanf("%d", &i);
  i = absolute(i);
  printf("%d\n", i);
}
