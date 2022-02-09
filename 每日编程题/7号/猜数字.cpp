#include <stdio.h>

struct student
{
    char name[10];
    int number;
}stu[10000];

int main()
{
    int i, j, n, temp1, temp2;
    int sum, average, target;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s %d", &stu[i].name, &stu[i].number);
    for (sum = 0, i = 0; i < n; i++)

        sum += stu[i].number;
    average = sum/(2*n);
    target = 0; temp1 = stu[0].number - average;
    if (temp1 < 0)
        temp1 = -1*temp1;
    for (i = 1; i < n; i++)
    {
        temp2 = stu[i].number - average;
        if (temp2 < 0)
            temp2 = -1*temp2;
        if (temp2 < temp1)
        {
            temp1 = temp2;
            target = i;
        }
    }
    printf("%d %s", average, stu[target].name);

    return 0;
}

