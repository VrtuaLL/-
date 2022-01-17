#include <stdio.h>
#include <string.h>
int main()
{
     int i,j;
     char n[10001];
     int b[10]={0};
     int a[10]={0,1,2,3,4,5,6,7,8,9};
     scanf("%s",n);
     for(i=0;i<strlen(n);i++)
     {
         for(j=0;j<10;j++) 
         {
             if(a[j]==n[i]-'0')
             {
                 b[j]++;
                 break;
             }
         }
         
     }
     
     for(i=0;i<10;i++)
     {
         if(b[i]!=0)
         printf("%d:%d\n",i,b[i]);
     }
     return 0;
}
