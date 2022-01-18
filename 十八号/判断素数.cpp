#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, shaobing;
    long x;
    scanf("%d", &n);
 
    while(n--)
    {
        scanf("%ld", &x);
        shaobing = 1;
        for(i = 2; i <= sqrt(x); i++)
        {
            if(x % i == 0)
            {
                shaobing = 0;
                break;
            }
        }
        if(x == 1 || shaobing == 0)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}

