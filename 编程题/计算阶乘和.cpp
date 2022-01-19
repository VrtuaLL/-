#include<stdio.h>
int main()
{
	int i,n=0,sum=0,t=1;
	scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	t*=i;
    	sum+=t;
	}
	printf("%d",sum);
    return 0;
}

