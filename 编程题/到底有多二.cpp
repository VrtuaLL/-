#include<stdio.h>
#include<string.h>
 
int main() {
    char s[55];
    scanf("%s", s);
    int len = strlen(s);                
    int i, cnt;
    double p1, p2;
    p1 = p2 = 1.0;               
    if (s[0] == '-')               
        p1 = 1.5;
    if ((s[len - 1] - '0') % 2 == 0)                
        p2 = 2.0;
    for (i = cnt = 0; s[i]; i++)
        if (s[i] == '2')                
            cnt++; 
    if (p1 == 1.0)                
        printf("%.2f%%", 1.0 * cnt / len * p1 * p2 * 100);                
    else                             
        printf("%.2f%%", 1.0 * cnt / (len - 1) * p1 * p2 * 100);
 
    return 0;
}
