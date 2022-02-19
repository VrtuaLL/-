#include<stdio.h>
int main()
{
    int a,b,n,c,m=1,j=1;
    int sum1[10000];
    scanf("%d %d %d",&a,&b,&n);
    sum1[0]=a;
    sum1[1]=b;
    for(int i=0;i<n;i++)
    {
        c=sum1[j]*sum1[j-1];
        if(c>9)
        {
            sum1[++m]=c/10;
            sum1[++m]=c%10;
        }
        else
            sum1[++m]=c;
        j++;
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",sum1[i]);
    }
    printf("%d",sum1[n-1]);
    return 0;
}
