#include<stdio.h>
struct student
{
long long examID;
int t_seatID;
int e_seatID;	
};
int main()
{
	int N,M;
	scanf("%d",&N);
	struct student s[N];
	for(int i=0;i<N;i++)
	{
		scanf("%lld %d %d",&s[i].examID,&s[i].t_seatID,&s[i].e_seatID);
	}
	scanf("%d",&M);
	int seat[M];
	for(int i=0;i<M;i++)
	{
		scanf("%d",&seat[i]);
	}
	
		for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(seat[i]==s[j].t_seatID)
			printf("%lld %d\n",s[j].examID,s[j].e_seatID);
		}
	}
}

