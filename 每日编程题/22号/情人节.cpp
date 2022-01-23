#include<stdio.h>
#include<string.h>
int main ( )
{
    char name[1000][11]; //字符串数组存储名字
    int i=1; // 从1开始，也可以从0 开始，为了方便计数在1开始
    scanf("%s",name[i]);
    while(strcmp(name[i],".")!=0)
    {
        scanf("%s",name[++i]);
    }
    i--; // 因为输入：“.”为结束，所以在最后要减一个，防止在最后名字个数统计的时候多出一个，这里有一个测试点；
    if(i<2)
        printf("Momo... No one is for you ...");
    else if(2<=i&&i<14)
        printf("%s is the only one for you...",name[2]);
    else 
        printf("%s and %s are inviting you to dinner...",name[2],name[14]);
    return 0; 
}

