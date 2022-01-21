#include<stdio.h>
#include<string.h>
int main()
 {
     char c;
     char str[105000] = {0};
     char Newstr[105000] = {0};
     int cnt;
     int temp;
     int n, i = 0;
     scanf("%d",&n);
     getchar();
     c = getchar();
     getchar();
     gets(str);
     int d = strlen(str);
     cnt = d;
     temp = d;
     if (d > n)
     {
         while(cnt > n)
         {
             i ++;
             cnt = cnt - 1;
         }
         cnt = 0;
         for (;i <= d - 1;i ++)
         {
             Newstr[cnt ++] = str[i];
         }
         puts(Newstr);
     }
     cnt = 0;
        if (d < n)
     {
         while(temp < n)
         {
             Newstr[cnt ++] = c;
             temp ++;
         }
         for (i = 0;i <= d - 1;i ++)
         {
             Newstr[cnt ++] = str[i];
         }
          puts(Newstr);
     }
     if (d == n)
         puts(str);
     return 0;
 }


