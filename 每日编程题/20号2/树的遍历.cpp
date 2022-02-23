#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct tree
{
	int data;
	struct tree* lchild;
	struct tree* rchild;
};
//建立树的结构体
struct tree *creat(int arr[], int brr[], int n)
{
	if (n == 0)
	{
		return NULL;
	}
	int i = 0;
	while (brr[i] != arr[n - 1])
	{
		i++;
	}
	int rn = n - 1 - i;
	int ln = i;
	struct tree* t = (struct tree*)malloc(sizeof(struct tree));
	t->data = brr[i];
	t->lchild = creat(&arr[0], &brr[0], ln);
	t->rchild = creat(&arr[ln ], &brr[ln+1], rn);
	return t;
}
//树的创造函数，在此函数中，已知第一个传入数组就是该树的后序遍历
//第二个数组就是中序遍历
void printff(struct tree* t)
{
	struct tree* dui[31];
//建立一个指针数组来存储指针数据，按照层序将指针相应的指针分别存储于对应的位置
	int f = -1, r = -1;
	int num = 0;
	dui[++r] = t;
	while (r > f)
	{
		struct tree* q = dui[++f];
		if (num == 0)
		{
			printf("%d", q->data);
			num++;
		}
		else
		{
			printf(" %d", q->data);
		}
		if (q->lchild)
		{
			dui[++r] = q->lchild;
		}
		if (q->rchild)
		{
			dui[++r] = q->rchild;
		}
//每循环一次，只打印一个数据，同时会将一个根节点的左右节点分别存入数组的下一位
//左右节点是无所谓的，因为经过会先存入左节点，之后存入右节点
//每一个结点的循环都类似于根节点
	}
}
int main()
{
	int n;
	int arr[31];
	int brr[31];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &brr[i]);
	}
//输入数据部分
	struct tree *Tree=creat(arr,brr,n);
	printff(Tree);
	return 0;
}
