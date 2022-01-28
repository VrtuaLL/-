#include<stdio.h>
int main(){
	int N,n,hh,mm;
	scanf("%d",&N);
	char c;
	for(int i=0;i<N;i++)
	{
		int flag[1001]={0},time[1001]={0},sum=0,cnt=0;
		while(scanf("%d %c %d:%d",&n,&c,&hh,&mm)){
			if(n==0) break;
			if(c=='S')
			{
				time[n]=hh*60+mm;
				flag[n]=1;
			}
			else if(c=='E')
			{
				if(flag[n]==1)
				{
					flag[n]=0;
					sum+=hh*60+mm-time[n];
					cnt++;
				}
			}
		}
		if(cnt==0) printf("0 0\n");
		else printf("%d %.0f\n",cnt,(double)sum/cnt);
	}
}
