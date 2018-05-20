#include <stdio.h>


void add(int a[2][2], int b[2][2], int c[2][2]){
  int i, j, k;
  int tmp;
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      c[i][j] = a[i][j] + b[i][j];
    }
  }
}

void mul(int a[2][2], int b[2][2], int c[2][2]){
  int i, j, k;
  int tmp;
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      tmp = 0;
      for(k =0 ; k < 2; k++)
        tmp += a[i][k] * b[k][j];
      c[i][j] = tmp;
    }
  }
}

int main(){
  int a[2][2] = {{4, 5}, {6, 7}};
  int b[2][2] = {{1, 2}, {3, 4}};
  int c_add[2][2];
  int c_mul[2][2];
  add(a, b, c_add);
  mul(a, b, c_mul);
  printf("%d  %d\n%d %d\n", c_add[0][0], c_add[0][1], c_add[1][0], c_add[1][1]);
  printf("%d  %d\n%d %d\n", c_mul[0][0], c_mul[0][1], c_mul[1][0], c_mul[1][1]);
}
