#include<stdio.h>
int main()
{
    int n;
    char a;
    int b=0;
    scanf("%d %c",&n,&a);
    for(int i=0;i<(n/2+n%2);i++)
        {
        for(int j=0;j<n;j++)
        {
            b++;
            printf("%c",a);
            if(b%n==0)printf("\n");
        }
      }
    return 0;
}

