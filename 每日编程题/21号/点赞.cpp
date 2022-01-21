#include<stdio.h>
int main ()
{
    int n,k,p;
    int z;
    int a[10000]= {0} ,i ,j = 0; //a数组用来记录数字个数和特征；
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        for(p = j;j<k+p;j++)
        {
            scanf("%d",&z);
            a[z]++;
        }
    }
    int max ,dex=0;//数字位置和个数多少。
    for(i=0;i<=1000;i++)  // 数字有特征和个数
    {
        if(a[i]>=a[dex])
        {
            dex = i;
            max = a[i];
        }
    }
    printf("%d %d",dex,max);
    return 0;
}

