#include <stdio.h>
#include <string.h>
int a[100][10][10];/*三维数组 存储第i个学校 第j支队伍 的第k个队员*/
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    int m[110];/*每个学校队伍数量*/ /*注意这里的一个小问题？？？ 第二行给出 N 个不超过10的正整数， 不要定义为m[10] 他只是说某个m[i]存的数不超过十 注意哈 不然出现段错误 表示数组越界访问 那么它有多少个m[i]呢 不超过一百个 */
    /* 要有一个数 记录最大的队伍数量*/
    int countmax = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
        if(m[i] > countmax)
        {
            countmax = m[i];
        }
    }
    int lasti = -1;
    int bianhao = 0;
    for(j = 0; j < countmax; j++)/*队伍数量 为什么条件是最大的那个？*/
    {
        for(k = 0; k < 10; k++)/*10个队员*/
        {
            for(i = 0; i < n; i++)/*内层循环才为学校编号*/
            {
                if(j < m[i])/* 看题 就拿样例来说 j = 3 m[1] = 4 时
                       
                              表示这第二个学校 还没分配完所有队伍 其他学校的分完了
                                第三个学校 j = 3 m[2] = 2 j > m[i] 第三个学校队伍分配完毕了 所以不会进入下面的语句*/
                {
                    if(lasti == i)/*说明只剩下一个学校*/
                    {               /*lasti是个标记变量 表示上一次操作标记的学校 
                                       如果跟这次操作的学校编号一样 不就表示只剩下这一个学校了吗
                                     i是学校编号*/
                        bianhao += 2;
                    }
                    else
                    {
                        bianhao++;
                    }
                    a[i][j][k] = bianhao;
                    lasti = i;/*每次操作完成后 更新lasti 重新标记此次操作的学校编号*/
                }
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("#%d\n", i + 1);
        for(j = 0; j < m[i]; j++)
        {
            for(k = 0; k < 9; k++)
            {
                printf("%d ", a[i][j][k]);
            }
            printf("%d\n", a[i][j][k]);
        }
    }
    return 0;
}

