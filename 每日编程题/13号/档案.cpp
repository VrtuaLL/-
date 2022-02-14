/*
	有题目可知，最小值为1，即结论1，最大值是结论2^N
	当为y的时候，表示是左子树，因此，原有值不需要改动 
	当为n时，表示在右子树，此时需要在原有值的基础上 加上 当前结点所有的叶节点的一半 
*/

#include<stdio.h>
#include<string.h>
#include<math.h>

char str[35];
int N,M;

int main()
{
	scanf("%d %d",&N,&M);
	
	int k = pow(2,N);	// 计算出最大结论值 
	int index,n;
	
	for(int i=0;i<M;i++){ 
		index = 1;	// 每次循环，都要将结论值赋值为1 
		n = k;		// 修改当前结点所拥有的叶节点，这个时候是根节点，所以置为 k 
		scanf("%s",str);

		for(int j=0;j<strlen(str);j++){	// 遍历输入的字符串 
			if(str[j]=='n'){	// 若为 n ，则表示需要加上当前结点所拥有的叶节点个数的一半 
				index += (n/2);
			}	
			n /= 2;	// 每次循环，叶节点的数量都会减半 
		}
		printf("%d\n",index);	// 输出结果即可 
	}
	
	return 0;
} 

