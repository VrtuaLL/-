#include<stdio.h>
 
int main()
{
	int a;
	int b;
	scanf(" %d", &a);
	scanf(" %d", &b);
	
	int n;
	scanf(" %d", &n);
	
	int a1;
	int a2;
	int b1;
	int b2;
	int i;
	int x = 0;
	int y = 0;
	for (i=1; i<=n; ++i)
	{
		scanf(" %d", &a1);
		scanf(" %d", &a2);
		scanf(" %d", &b1);
		scanf(" %d", &b2);
		
		if (x != a+1 && y != b+1)
		{
			if (a2 == b2 && a2 == a1 + b1)
				continue;
				
			if (a2 == a1 + b1)
				++x;
				
			if (b2 == a1 + b1)
				++y;
				
		}
	}

	if (x == a+1)
	{
		printf("A\n");
		printf("%d\n", y);
	}
	else 
	{
		printf("B\n");
		printf("%d\n", x);
	}
	
	return 0;
}

