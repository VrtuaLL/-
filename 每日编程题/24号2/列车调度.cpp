#include<stdio.h>
int a[1000000];
int main()
{
	int n;
	scanf("%d",&n);
	int i,m,j,top=0;
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(top==0||a[top-1]<m){  //当top==0时，开辟轨道，当输入的列车序号比最上的轨道列车序号还大时，开辟轨道
			a[top++]=m;
		}else                   //二分查找
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
	}printf("%d",top);            //轨道数
}

