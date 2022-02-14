#include<stdio.h>
int main()
{
    int n,i;
    double a[1000];
    double sum=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&a[i]);
        sum+=1/a[i];
    }
    printf("%.2f\n",n/sum);
    
}
