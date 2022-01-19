#include<stdio.h>
int main()
{
	int a,b,sum=0,count=0;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		printf("%5d",i);
		sum += i;
		count++;
		if(count%5==0&&count!=0)
            printf("\n");
	}
	if(count%5!=0)printf("\n"); 
	printf("Sum = %d",sum); 
 } 

