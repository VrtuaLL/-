#include<stdio.h>
#include<string.h>
int main()
{
	int phone[11];//����ֻ����� 
	int a[10],b[10];//a[]ͳ�ƺ������֣�b[]Ҫ��a[]�����ִӵ�С���� 
	int i,j=0,k=0;
	memset(a,-1,sizeof(a));
	memset(b,-1,sizeof(b));
	char s[11];
	scanf("%s",s);
	for(i=0;i<11;i++)
	{
		phone[i]=s[i]-'0';
		a[phone[i]]++;
	}
	printf("int[] arr = new int[]{");
	for(i=9;i>=0;i--)
	{
		if(a[i]>=0)
		{
			b[j++]=i;//������Ӵ�С�������У������������� 
			k++;
		}
	}
	for(i=0;i<k;i++) 
	{
			printf("%d",b[i]);
			if(i<k-1) printf(",");//��ʽ��ĩβ�������� 
	}
	printf("};\nint[] index = new int[]{");
	for(j=0;j<11;j++)
	{
		for(i=0;i<10;i++)
		{
			if(phone[j]==b[i])//�жϺ��������������λ�� 
			{
				printf("%d",i);
				break;
			}
		}
		if(j<10) printf(",");
		else 	printf("};");
	}
	return 0;
}


