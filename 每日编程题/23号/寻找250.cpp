#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,i=1;
    while (1){
        scanf("%d",&x);
        if (x==250) break;
        i++;
    }
    printf("%d",i);
    return 0;
}

