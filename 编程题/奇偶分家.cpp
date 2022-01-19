#include<stdio.h>
int main()
{
    int N,j,i,o,a;
    scanf("%d\n",&N);
    o=0;
    j=0;
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a);
       if(a%2!=0){
            j++;
       }
         
        else{
            o++;
        } 
    }
    printf("%d %d",j,o);
    return 0;
}

