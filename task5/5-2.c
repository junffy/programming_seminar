#include <stdio.h>

int max(int n[], int len){
  int i, ans;

  ans = n[0];
  for (i = 1; i<len; i++){
    if(ans < n[i])
      ans = n[i];
  }
  return ans;
}

int min(int n[], int len){
  int i, ans;

  ans = n[0];
  for(i = 1; i<len; i++){
    if(ans > n[i])
      ans = n[i];
  }
  return ans;
}

int main(){
  int i;
  int max_a=0, min_a=0;
  int a[]={34, 78, 94, 35, 67, 89, 54, 32, 57, 47};
 
  printf("%d, %d\n", max(a, 10), min(a, 10));
}
