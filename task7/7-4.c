#include <stdio.h>
#include <string.h>


#define NUMBER 5

typedef struct{
  char name[32];
  float height;
  float weight;
} GAKUSEI;

/*xおよびｙが指す学生を交換*/

void swap_GAKUSEI(GAKUSEI *x, GAKUSEI *y){
    GAKUSEI temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(GAKUSEI *a){
  int i, j;

  for(i = 0; i < NUMBER - 1; i++) {
    for(j = i + 1; j < NUMBER; j++) {
      if(a[i].height < a[j].height) {
        swap_GAKUSEI(&a[i], &a[j]);
      }
     }
    }
}


void printGAKUSEI(GAKUSEI *a)
{
    int i;

    for (i = 0; i < NUMBER; i++) {
        printf("%s %.1lf %.1lf\n",
            a[i].name, a[i].height, a[i].weight);
    }
}

int main(void){

  int i;
  float sum_h=0, sum_w=0;
  GAKUSEI std[] = {};
  printf("名前 身長 体重:\n");
  for(i = 0; i < NUMBER; i++){
    scanf("%s %f %f", std[i].name, &std[i].height, &std[i].weight); 
  }
  
  for(i = 0; i < NUMBER; i++){
    sum_h += std[i].height;
    sum_w += std[i].weight;
  }

  printf("平均身長:%.1lf\n", sum_h/NUMBER);
  printf("平均体重:%.1lf\n", sum_w/NUMBER);
  sort_by_height(std);
  printf("\n身長順\n");
  printGAKUSEI(std);

}
