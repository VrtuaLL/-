#include <stdio.h>
#include <string.h>
int main()
{
    char str[81];
    char zichuan[15];
    char chi[]="chi1 huo3 guo1";
    char em[]=".";
    int i, j,cnt,flag,rem;
    cnt=0;flag=0;rem=0;
    gets(str);
    while (strcmp(str,em)!=0)
    {
        flag++;
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] == 'c')
            {
                strncpy(zichuan,str+i,14);
                zichuan[14]='\0';
                if(strcmp(zichuan,chi)==0)
                {
                 cnt++;
                 if(cnt==1)
                 {
                 	rem=flag;
				 }
				 break;
                }
            }
        }
        gets(str);
    }
    if(cnt==0)
    {
        printf("%d\n-_-#\n",flag);
    }
    else{
        printf("%d\n%d %d\n",flag,rem,cnt);
    }
    return 0;

}

