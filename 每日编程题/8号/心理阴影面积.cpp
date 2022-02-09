#include <stdio.h>
#include <math.h>
int main()
{
  int x,y,i,a,b;
  scanf("%d %d",&x,&y);
  a=100-x;
  b=100-y;
  i=100*100/2-x*y/2-a*b/2-a*y;
  printf("%d\n",i);
  return 0;
 }  

