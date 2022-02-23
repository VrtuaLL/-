#include<stdio.h>
#include<string.h>
char a[10001];
int judge(int i, int j) {
	while (i <= j)
		if (a[i++] != a[j--])
			return 0;
	return 1;
}

int main() {
gets(a);
	int maxn = 0;
    int len=strlen(a);
	for (int i = 0; i <len; ++i)
		for (int j =len- 1; j >= i; --j)
			if (judge(i, j))
				maxn = maxn>(j - i + 1)?maxn:(j-i+1);
	printf("%d",maxn);
	return 0;
}


