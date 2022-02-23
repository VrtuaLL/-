#include<stdio.h>
#include<set>
using namespace std;

int n, m, k;
int num, a, b;
int c, t;
int i, j;
double sum;
set<int>s[55];

int main()
{
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        for (j = 1; j <= m; j++)
        {
            scanf("%d", &num);
            s[i].insert(num);
        }
    }
    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        c = 0;
        scanf("%d %d", &a, &b);
        for (set<int>::iterator it = s[a].begin(); it != s[a].end(); it++) {
            if (s[b].count(*it) == 1) 
            {
                c++;
            }
        }
        t = s[b].size() + s[a].size() - c;
        sum = 1.0 * c / t * 100;
        printf("%.2lf%%\n", sum);
    }
    return 0;
}

