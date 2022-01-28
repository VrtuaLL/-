#include<stdio.h>
#include<math.h>
#define L 6

int main()
{
	char ch[26]={'z','y','x','w','v','u','t','s','r','q','p','o','n','m'
	             ,'l','k','j','i','h','g','f','e','d','c','b','a'};
	char arr[L];
	int n,l,a,i;         //l为序列长度，n为序列所处倒序的位置,a为所求字符串的某个字符在ch数组中的位置 
	scanf("%d %d",&l,&n);
	n=n-1;               //根据推导过程发现，减去1后最后一个字符才是正确的
	for(i=0;i<l;i++)
	{
		a=n/pow(26,l-i-1);
		arr[i]=ch[a];
		n=n-a*pow(26,l-i-1);
	}
	for(i=0;i<l;i++)
	{
		printf("%c",arr[i]);
	}
	return 0;
 }

