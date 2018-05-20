#include <stdio.h>
int main()
{
int n[10];
int count = 0;
int sum = 0;

do{
		scanf("%d", &n[count]);
		if(n[count] < 0)
      break;
		sum += n[count];	
		count++;
	}while(1);

printf("%d\n",sum/count);
}
