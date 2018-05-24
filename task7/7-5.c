#include<stdio.h>

#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  FILE *fin, *fout;
  int ch;
  int count=0;
  if(argc != 3){
    printf("引数の数が違います\n");
    exit(1);
  }
  if((fin = fopen(argv[1], "r")) == NULL){
    printf("\aコピー元ファイルをオープンできません\n");
    exit(1);
  }
  if((fout = fopen(argv[2], "w")) == NULL){
    printf("\aコピー先ファイルをオープンできません\n");
    exit(1);
  }


  while((ch = fgetc(fin)) != EOF){
    fputc(toupper(ch), fout);
    if(ch == 'N' ||
       ch == 'A' ||
       ch == 'I' ||
       ch == 'S' ||
       ch == 'T' ||
       ch == 'n' ||
       ch == 'a' ||
       ch == 'i' ||
       ch == 's' ||
       ch == 't')
          count++;
    }
  printf("N,A,I,S,T:%d回\n", count);
  fclose(fin);
  fclose(fout);
}
