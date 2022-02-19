#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
    int n,m,i,cnt=1;
 
    scanf("%d%d",&n,&m);
    char s[1000];
    getchar();
    while(n--){
        gets(s);
        if(strstr(s,"easy")||strstr(s,"qiandao"));
        else {
            if(m==0){
                puts(s);
                cnt=0;
            }
            m--;
        }
    }
    if(cnt)puts("Wo AK le");
 
}
