#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//��ͷ������ͷ����
int main(void)
{
    double a[10010],b[10010],c[10010];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    int n,m,x,i=0,tmp1=0,tmp2=0;
    double y;//��¼�̵�ÿһ���ϵ��
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d%lf",&x,&y);
        a[x]+=y;
        tmp1=tmp1>x?tmp1:x;//�ҵ����Ľ���
    }
    scanf("%d",&m);
    for(int i=0; i<m; i++)
    {
        scanf("%d%lf",&x,&y);
        b[x]+=y;
        tmp2=tmp2>x?tmp2:x;
    }
    if(tmp1<tmp2)//����ʡ�ԣ���Ȼ���Ե�����Ĺ�����
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
            y=a[tmp1]/b[tmp2];//�̵�ϵ����������i+tmp1-tmp2����ʾ
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
            tmp1=ep;//����һ�Σ����Խ���Ҫ����
        }
        int count1=0,count2=0;
        for(int i=tp; i>=0; i--)
        {
            if(fabs(a[i])>0.05)
                count1++;//a����ʽ��������������Ϊ�����
        }
        for(int i=tp; i>=0; i--)
        {
            if(fabs(c[i])>0.05)
                count2++;//�̼����������㲻Ϊ�����
        }
        int i=0;
        if(count2==0)//�����Ϊ��
            printf("0 0 0.0\n");
        else
        {
            printf("%d",count2);//�̲�Ϊ�㣬���յݼ�˳�������Ϊ���������
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
        if(count1==0)//�������Ϊ��
            printf("0 0 0.0\n");
        else
        {
            printf("%d",count1);//������Ϊ�㣬ͬ��
            for(count1=0,i=tp; i>=0; i--)
            {
                if(count1!=0)
                {
                    printf(" ");
                    count1++;
                }
                if(fabs(a[i])>0.05)
                    printf(" %d %.1lf",i,a[i]);//��Ϊ�������⣬������֮�е�1/27���������е�����>0ȫ���滻�ɴ���0.05�����ֵ��Ψһ����һ������̫��Ҳ����̫С������֮�ھ��С�
            }

        }
    }
}


