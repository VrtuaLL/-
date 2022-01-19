#include<stdio.h>
#include<string.h>
int main()
{
	char a[10001];
	int i,j,h;
	scanf("%s",a);
	int lena;
	lena=strlen(a);
	int g=0,p=0,l=0,t=0;
	for(i=0;i<lena;i++)
	{
		if(a[i]=='p'||a[i]=='P')
		p++;
		if(a[i]=='g'||a[i]=='G')
		g++;
		if(a[i]=='l'||a[i]=='L')
		l++;
		if(a[i]=='t'||a[i]=='T')
		t++;
	}
//	printf("%d %d %d %d\n",g,p,l,t);
	while(1)
	{
		if(g==0&&p==00&&l==0&&t==0)
		{
			break;
		}
		
		if(g>0)
		{
			printf("G");
			g--;
		}
		if(p>0)
		{
			printf("P");
			p--;
		}
		if(l>0)
		{
			printf("L");
			l--;
		}
		if(t>0)
		{
			printf("T");
			t--;
		}
	}
	
}
