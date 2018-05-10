#include <stdio.h>
int main(void){
    // Your code here!
    int w = 40;
    int h = 30;
    int d = 20;
    int area = w * h;
    int volume = area * d;
    printf("Width=%d,Height=%d,Depth=%d\n", w, h, d);
    printf("Area=%d\n", area);
    printf("Volume=%d\n", volume);
}
