#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(void)
{
    int num,line,list; //line���У�list ���� 
    int k=0,i,j;
    char str[1005],b[105][1005];//b����������Ķ�ά���� 
    
    scanf("%d",&num);
    getchar();//��getchar�����Ե����س�������gets()����գ�Ӱ������ 
    gets(str);
 
    line=num;//�����num��������
 
    if(strlen(str)%num==0)//�ж����� 
        list=strlen(str)/num;
    else
        list=strlen(str)/num+1; 
 
    for(i=0;i<line;i++)
        b[i][0]=' ';//����ά����ĵ�1�о���Ϊ�ո������ʲ�����Ҳ�пո���� 
        
    for(j=list-1;j>=0;j--)//��ʼ���ַ���װ���ά���飨���һ�п�ʼ�� 
        for(i=0;i<line;i++)//��һ�п�ʼ 
        {
            b[i][j]=str[k++];
            if(k==strlen(str))
                break;
        }
    
    for(i=0;i<line;i++)
    {
        for(j=0;j<list;j++)
            putchar(b[i][j]); 
        if(i<line-1)
            printf("\n");
    }
    
    return 0;
}
