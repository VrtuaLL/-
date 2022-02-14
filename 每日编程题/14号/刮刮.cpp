#include<stdio.h>
#include<string.h>
int main()
{
	int n,sum=0,sign=0,a[3][3],b[3][2],temp[10]={0},c[19]={10000,36,720,360,80,252,108,72,54,180,72,180,119,36,306,1080,144,1800,3600};
	//输入3*3二维数组 
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			//在temp数组里面进行标记 
			temp[a[i][j]]++;
		}
	}
	//3*3二维数组里面缺的数字 
	for(int i=0;i<10;i++)
	{
		if(temp[i]==0)
		sign=i;
	} 
	//3*3二维数组里面的数字0进行替换
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(a[i][j]==0) 
			a[i][j]=sign;
		}
	} 
	//输入3*2二维数组 
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	scanf("%d",&n);
	//当n小于等于3的时候计算行的值 
	if(n<=3)
	{
		for(int i=0;i<3;i++)
		{
			sum=sum+a[n-1][i];
		}
	}
	//当n的数值在3到6之间的时候计算列的值 
	if(n>3&&n<=6)
	{
		for(int i=0;i<3;i++)
		{
			sum=sum+a[i][n-4];
		}
	}
	//主对角线的值 
	if(n==7)
		sum=a[0][0]+a[1][1]+a[2][2];
	//辅助对角线的值 
	if(n==8)
		sum=a[0][2]+a[1][1]+a[2][0];
	//输出索引对应的值 
	printf("%d\n",a[b[0][0]-1][b[0][1]-1]);
	printf("%d\n",a[b[1][0]-1][b[1][1]-1]);
	printf("%d\n",a[b[2][0]-1][b[2][1]-1]);
	//输出sum值所对应的金币值 
	for(int i=0;i<19;i++)
	{
		if((sum-6)==i)
		{
			printf("%d",c[i]);
			break;
		}	
	}
} 

