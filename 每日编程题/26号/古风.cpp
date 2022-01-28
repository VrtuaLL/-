#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(void)
{
    int num,line,list; //line是行，list 是列 
    int k=0,i,j;
    char str[1005],b[105][1005];//b是用来输出的二维数组 
    
    scanf("%d",&num);
    getchar();//用getchar函数吃掉“回车”否则gets()会接收，影响输入 
    gets(str);
 
    line=num;//输入的num就是行数
 
    if(strlen(str)%num==0)//判断列数 
        list=strlen(str)/num;
    else
        list=strlen(str)/num+1; 
 
    for(i=0;i<line;i++)
        b[i][0]=' ';//将二维数组的第1列均设为空格，若单词不够长也有空格输出 
        
    for(j=list-1;j>=0;j--)//开始将字符串装入二维数组（最后一列开始） 
        for(i=0;i<line;i++)//第一行开始 
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
