#include<stdio.h>
#include<math.h>
#define L 6

int main()
{
	char ch[26]={'z','y','x','w','v','u','t','s','r','q','p','o','n','m'
	             ,'l','k','j','i','h','g','f','e','d','c','b','a'};
	char arr[L];
	int n,l,a,i;         //lΪ���г��ȣ�nΪ�������������λ��,aΪ�����ַ�����ĳ���ַ���ch�����е�λ�� 
	scanf("%d %d",&l,&n);
	n=n-1;               //�����Ƶ����̷��֣���ȥ1�����һ���ַ�������ȷ��
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

