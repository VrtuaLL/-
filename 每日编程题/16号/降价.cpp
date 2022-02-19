#include <stdio.h>
#include <stdlib.h>
 
int main()
{
int n,o,j,x;
float m,y;
scanf("%d %f\n",&x,&y);
for(j=0;j<x;j++)
{
scanf("%f",&m);
if(m<y)
{
    printf("On Sale! %3.1f\n",m);
}
}
return 0;
}
