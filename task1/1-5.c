#include <stdio.h>
int main(void){
    // Your code here!
    int w = 40;
    int h = 30;
    int d = 20;
    int area = w * h;
    area = area * 2;
    area = area + (w * d) * 2;
    area = area + (h * d) * 2;
    printf("Surface=%d\n", area);
}
