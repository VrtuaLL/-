#include<stdio.h>
#include<string.h>
int main ( )
{
    char name[1000][11]; //�ַ�������洢����
    int i=1; // ��1��ʼ��Ҳ���Դ�0 ��ʼ��Ϊ�˷��������1��ʼ
    scanf("%s",name[i]);
    while(strcmp(name[i],".")!=0)
    {
        scanf("%s",name[++i]);
    }
    i--; // ��Ϊ���룺��.��Ϊ���������������Ҫ��һ������ֹ��������ָ���ͳ�Ƶ�ʱ����һ����������һ�����Ե㣻
    if(i<2)
        printf("Momo... No one is for you ...");
    else if(2<=i&&i<14)
        printf("%s is the only one for you...",name[2]);
    else 
        printf("%s and %s are inviting you to dinner...",name[2],name[14]);
    return 0; 
}

