#include<stdio.h>
int a[1000000];
int main()
{
	int n;
	scanf("%d",&n);
	int i,m,j,top=0;
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(top==0||a[top-1]<m){  //��top==0ʱ�����ٹ������������г���ű����ϵĹ���г���Ż���ʱ�����ٹ��
			a[top++]=m;
		}else                   //���ֲ���
		{ 
			int high=top-1,low=0,mid;
			while(low<=high)
			{
				mid=(low+high)/2;
				if(a[mid]>m)
				{
					high=mid-1;
				}else
				{
					low=mid+1;
				}
			}a[mid]=m;
		}
	}printf("%d",top);            //�����
}

