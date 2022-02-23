#include <stdio.h>
#include <stdlib.h>

#define MAX 120
#define M 10000

typedef struct
{
    int n;
    int e;

    int edges[MAX][MAX];
}graph;

int flag[MAX][MAX];

void look_up_s(graph *g,int flag[MAX][MAX])
{
    int i,j,k;
    for (i=1;i<=g->n;i++)
    {
        for(j=0;j<g->n;j++)
        {
            if(g->edges[i][j]==1)
                flag[i][j]=1;
            else
                flag[i][j]=0;
        }
    }
    for(k=1;k<=g->n;k++)
    {
        for(i=1;i<=g->n;i++)
        {
            for (j=1;j<=g->n;j++)
            {
                if(flag[i][k]==1&&flag[k][j]==1)
                {
                    flag[i][j]=1;
                    flag[j][i]=1;
                }
            }
        }
    }

}




int main()
{
    graph *g=(graph *)malloc(sizeof(graph));
    int i,j,k,l,x;
    int f_d[2][M];
    scanf("%d%d%d",&g->n,&g->e,&x);
    for (i=1;i<=g->n;i++)
    {
        for(j=1;j<=g->n;j++)
        {
            g->edges[i][j]=0;
        }
    }
    for(i=1;i<=g->e;i++)
    {
        scanf("%d%d%d",&j,&k,&l);
        g->edges[j][k]=l;
        g->edges[k][j]=l;
    }
    for(i=0;i<x;i++)
    {
        scanf("%d%d",&f_d[0][i],&f_d[1][i]);
    }

    look_up_s(g,flag);

    for (i=0;i<x;i++)
    {
        if((g->edges[f_d[0][i]][f_d[1][i]]==1)||(g->edges[f_d[0][i]][f_d[1][i]]==0&&flag[f_d[0][i]][f_d[1][i]]==1))
        {
            printf("No problem\n");
            continue ;
        }
        if(g->edges[f_d[0][i]][f_d[1][i]]==-1&&flag[f_d[0][i]][f_d[1][i]]==1)
        {
            printf("OK but...\n");
            continue;
        }
        if(g->edges[f_d[0][i]][f_d[1][i]]==-1&&flag[f_d[0][i]][f_d[1][i]]==0)
        {
            printf("No way\n");
            continue ;
        }
        if(g->edges[f_d[0][i]][f_d[1][i]]==0&&flag[f_d[0][i]][f_d[1][i]]==0)
        {
            printf("OK\n");
            continue ;
        }
    }

    return 0;
}

