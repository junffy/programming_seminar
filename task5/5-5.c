#include <stdio.h>
int main()
{
int n1[10];
int n2[10];
int n3[10];
int count = 0;
int sum1 = 0;
int sum2 = 0;
int sum3 = 0;

do{
		scanf("%d %d %d", &n1[count], &n2[count], &n3[count]);
		if(n1[count] && n2[count] && n3[count] < 0)
      break;
		sum1 += n1[count];	
		sum2 += n2[count];	
		sum3 += n3[count];	
		count++;
	}while(1);

printf("%d %d %d\n",sum1/count, sum2/count, sum3/count);
}
