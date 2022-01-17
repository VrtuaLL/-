#include<stdio.h>
int main()
{
	int i,j=1,x=0,y=0,rest,N;
	char C;
	scanf("%d %c",&N,&C);
	while(2*j*j-1<=N)
	{
		j++;
	}
	j--;
	y=2*j-1;	
	rest=N-2*j*j+1;
	while(y>0)
	{
		for(i=0;i<x;i++)
			printf(" ");
		for(i=0;i<y;i++)
			printf("%c",C);
		printf("\n");
		x++;
		y-=2;
	}
	x--;
	y+=2;
	while(x>0)
	{
		x--;
		y+=2;
		for(i=0;i<x;i++)
			printf(" ");
		for(i=0;i<y;i++)
			printf("%c",C);
		printf("\n");	
	}
	printf("%d",rest);
	return 0;
}


