#include <stdio.h>
int main()
{
	int n,k,m,i,j,p,q,num=0;
	double score[15],sum,aver,t,ans[10002];
	scanf("%d %d %d",&n,&k,&m);
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<k;j++)
		{
			scanf("%lf",&score[j]); 
		}
		for(p=0;p<k-1;p++)//小到大排
		{
			for(q=0;q<k-p-1;q++)
			{
				if(score[q]>score[q+1])
				{
					t=score[q];
					score[q]=score[q+1];
					score[q+1]=t;
				}
			}
		}
		for(j=1;j<k-1;j++)
		{
			sum+=score[j];
		}
		aver=sum/(k-2);
		ans[num++]=aver;
	}
	for(p=0;p<num-1;p++)//小到大排
	{
		for(q=0;q<num-p-1;q++)
		{
			if(ans[q]>ans[q+1])
			{
				t=ans[q];
				ans[q]=ans[q+1];
				ans[q+1]=t;
			}
		}
	}
	printf("%.3f",ans[num-m]);
	for(i=num-m+1;i<num;i++)
	{
		printf(" %.3f",ans[i]);
	}
	return 0;
} 

