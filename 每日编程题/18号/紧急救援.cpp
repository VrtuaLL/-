//长头发啦长头发啦
 #include<stdio.h>
#include<string.h>
struct node
{
    int city1;
    int city2;
    int length;
} node[4][3];
int main()
{
    int n,m,s,d,m1=0,m2=0;
    int count=1,flag=0;
    int min=-1,max=0,ymin=-1,ymax=0;
    scanf("%d %d %d %d",&n,&m,&s,&d);
    int city[n];
    int lujing[n],lujing1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&city[i]);
    }
    for(int i=0; i<m; i++)
    {
        scanf("%d %d %d",&node[i][0].city1,&node[i][1].city2,&node[i][2].length);
    }
    for(int i=0; i<m; i++)
    {
        if(node[i][0].city1==s)
        {
            if(node[i][1].city2==d)
            {
                ymin=node[i][2].length;
                ymax=city[d]+city[s];
                lujing1[m2++]=s;
                lujing1[m2++]=d;
                break;
            }
        }
    }

    for(int i=0; i<m; i++)
    {
        if(node[i][0].city1==s)
        {
            if(node[i][1].city2!=d)
            {
                flag=node[i][1].city2;
                min=node[i][2].length;
                max=city[i]+city[flag];
                lujing[m1++]=s;
                lujing[m1++]=flag;
            }
            break;
        }
    }
    int mini=min;
    int maxm=max;
    int k=0;
    while(flag!=d&&k<m)
    {
        if(node[k][0].city1==flag)
        {
            flag=node[k][1].city2;
            mini+=node[k][2].length;
            maxm+=city[flag];
            count++;
            lujing[m1++]=flag;
            k++;
        }
        else
            k++;
    }
    if(mini<=ymin)
    {
        if(maxm>ymax)
        {
            printf("%d %d\n",count,maxm);
            for(int i=0; i<m1-1; i++)
            {
                printf("%d ",lujing[i]);
            }
            printf("%d",lujing[m1-1]);
        }
    }
    else
    {
        printf("1 %d\n",ymax);
        printf("%d %d",lujing1[0],lujing1[1]);
    }
    return 0;
    }

