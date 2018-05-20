#define M_SIZE 3

#include <stdio.h>

void add(int n, int m, int a[M_SIZE][M_SIZE], int b[M_SIZE][M_SIZE], int c[M_SIZE][M_SIZE]){
  int i, j;
  for(i = 0; i < n; i++){
    for(j = 0;j < m; j++){
        c[i][j] = a[i][j] + b[i][j];
    }
  }
}
void mul(int n, int m, int a[M_SIZE][M_SIZE], int b[M_SIZE][M_SIZE], int c[M_SIZE][M_SIZE]){
  int i, j, k;
  for(i = 0; i < n; i++){
    for(j = 0;j < m; j++){
      c[i][j] = 0;
      for(k = 0;k < M_SIZE; k++)
        c[i][j] = c[i][j] + a[i][k] * b[k][j];
    }
  }
}

void showarray(int n, int m, int z[M_SIZE][M_SIZE]){
int i,j;
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++)
      printf("%d ", z[i][j]);
    printf("\n");
  }
  printf("\n");
}

void readarray(int n, int m, int z[M_SIZE][M_SIZE]){
  int i, j;
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      scanf("%d", &z[i][j]);
    }
  }
}
int main(){
  int  a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int  b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int  c_a[3][3]={0};
  int  c_m[3][3]={0};
  
  readarray(3,3,a);
  readarray(3,3,b);
  printf("a:\n"); 
  showarray(3,3,a);
  printf("b:\n"); 
  showarray(3,3,b);
  add(3,3,a,b,c_a);
  mul(3,3,a,b,c_m);
  printf("c_add:\n"); 
  showarray(3,3,c_a);
  printf("c_mul:\n"); 
  showarray(3,3,c_m);
}
