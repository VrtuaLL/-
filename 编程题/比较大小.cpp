#include<stdio.h>
int main()
{
   int a[4],i,j,t;
   scanf("%d %d %d",&a[0],&a[1],&a[2]);
   for(i=0;i<2;i++)
   {
   	for(j=0;j<2-i;j++)
   	{
   		if(a[j]>a[j+1])
   		{
   			t=a[j];
   			a[j]=a[j+1];
   			a[j+1]=t;
		   }
	   }
   }
   printf("%d->%d->%d",a[0],a[1],a[2]);
 } 
