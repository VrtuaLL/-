#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct tree
{
	int data;
	struct tree* lchild;
	struct tree* rchild;
};
//�������Ľṹ��
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
//���Ĵ��캯�����ڴ˺����У���֪��һ������������Ǹ����ĺ������
//�ڶ�����������������
void printff(struct tree* t)
{
	struct tree* dui[31];
//����һ��ָ���������洢ָ�����ݣ����ղ���ָ����Ӧ��ָ��ֱ�洢�ڶ�Ӧ��λ��
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
//ÿѭ��һ�Σ�ֻ��ӡһ�����ݣ�ͬʱ�Ὣһ�����ڵ�����ҽڵ�ֱ�����������һλ
//���ҽڵ�������ν�ģ���Ϊ�������ȴ�����ڵ㣬֮������ҽڵ�
//ÿһ������ѭ���������ڸ��ڵ�
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
//�������ݲ���
	struct tree *Tree=creat(arr,brr,n);
	printff(Tree);
	return 0;
}
