#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<math.h>
typedef struct
{
    int cnt;
    int count;
    int fa;
    int money ;
}Peo;
int main()
{
  int n;
  scanf("%d",&n);
  Peo a[n];
  int i,j,x,y;
  for(i =0;i<n;i++)
  {
      a[i].money = 0;
      a[i].cnt = 0;
  }
  for(i = 0;i<n;i++)
  {
      a[i].count = i+1;
      scanf("%d",&a[i].fa);
      for(j = 0;j<a[i].fa;j++)
      {
          scanf("%d %d",&x,&y);
          a[x-1].money +=y;
          a[i].money -=y;
          a[x-1].cnt++;
      }
  }
  Peo h;
 for(i = 0;i<n-1;i++)
 {
     for(j = 0;j<n-i-1;j++)
     {
         if(a[j].money<a[j+1].money||a[j].money==a[j+1].money&&a[j].cnt<a[j+1].cnt||a[j].money==a[j+1].money&&a[j].cnt==a[j+1].cnt&&a[j].count>a[j+1].count)
         {
             h= a[j];
             a[j] = a[j+1];
             a[j+1] = h;
         }
     }
 }
 for(i = 0;i<n;i++)
 {
     printf("%d %.2f\n",a[i].count,(float)a[i].money/100.0);
 }

}

