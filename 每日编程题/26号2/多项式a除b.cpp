#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//长头发啦长头发啦
int main(void)
{
    double a[10010],b[10010],c[10010];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    int n,m,x,i=0,tmp1=0,tmp2=0;
    double y;//记录商的每一项的系数
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d%lf",&x,&y);
        a[x]+=y;
        tmp1=tmp1>x?tmp1:x;//找到最大的阶数
    }
    scanf("%d",&m);
    for(int i=0; i<m; i++)
    {
        scanf("%d%lf",&x,&y);
        b[x]+=y;
        tmp2=tmp2>x?tmp2:x;
    }
    if(tmp1<tmp2)//不能省略，不然测试点二和四过不了
    {
        printf("0 0 0.0\n");
        printf("%d",n);
        for(int i=tmp1; i>=0; i--)
        {
            if(fabs(a[i])>0.05)
                printf(" %d %.1lf\n",i,a[i]);
        }
        printf("\n");
    }
    else
    {
        int tp=tmp1;
        while(tmp1>=tmp2)
        {
            y=a[tmp1]/b[tmp2];//商的系数，阶数用i+tmp1-tmp2来表示
            c[tmp1-tmp2]+=y;
            for(i=tmp2; i>=0; i--)
            {
                if(fabs(b[i])>0.05)
                    a[i+tmp1-tmp2]-=y*b[i];
            }
            int ep=0;
            for(i=tmp1; i>=0; i--)
            {
                if(fabs(a[i])>0.05)
                {
                    ep=i;
                    break;
                }
            }
            tmp1=ep;//除了一次，所以阶数要变了
        }
        int count1=0,count2=0;
        for(int i=tp; i>=0; i--)
        {
            if(fabs(a[i])>0.05)
                count1++;//a多项式计数器，计数不为零的项
        }
        for(int i=tp; i>=0; i--)
        {
            if(fabs(c[i])>0.05)
                count2++;//商计数器，计算不为零的项
        }
        int i=0;
        if(count2==0)//如果商为零
            printf("0 0 0.0\n");
        else
        {
            printf("%d",count2);//商不为零，按照递减顺序输出不为零的所有项
            for(count2=0,i=tp; i>=0; i--)
            {
                if(count2!=0)
                {
                    count2++;
                    printf(" ");
                }
                if(fabs(c[i])>0.05)
                    printf(" %d %.1lf",i,c[i]);
            }
            printf("\n");
        }
        if(count1==0)//如果余数为零
            printf("0 0 0.0\n");
        else
        {
            printf("%d",count1);//余数不为零，同上
            for(count1=0,i=tp; i>=0; i--)
            {
                if(count1!=0)
                {
                    printf(" ");
                    count1++;
                }
                if(fabs(a[i])>0.05)
                    printf(" %d %.1lf",i,a[i]);//因为精度问题，就像本题之中的1/27，所以题中的所有>0全部替换成大于0.05，这个值不唯一，在一个不是太大也不是太小的区间之内就行。
            }

        }
    }
}


