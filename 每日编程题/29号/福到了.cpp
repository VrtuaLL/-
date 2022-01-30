#include<stdio.h>
char s[105][105];
int main()
{
    char c;
    int n;
    scanf("%c %d",&c,&n);
    getchar();              //吞换行回车
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%c",&s[i][j]);
        }
        getchar();          //吞换行回车
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i][j]!=s[n-i-1][n-j-1])        //对称
            {
                flag=1;
            }
        }
    }
    if(!flag)
    {
        printf("bu yong dao le\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[n-i-1][n-j-1] != ' ')
            {
                printf("%c",c);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

