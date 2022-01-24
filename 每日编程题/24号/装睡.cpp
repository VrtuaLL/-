#include<stdio.h>
int main()
{
	int n,i;
	char a[10][10];       
	char b[10][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d",&a[i],&b[i][1],&b[i][2]);
	}
	for(i=0;i<n;i++)
	{
		if(b[i][1]<15||b[i][1]>20||b[i][2]<50||b[i][2]>70)
		printf("%s\n",a[i]);
	}
	return 0;
}

