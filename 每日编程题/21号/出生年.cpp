#include <stdio.h>
int main()
{
	int n, y, i, j, k, t;
	int x[4] = { 0 }, z[10] = { 0 };
	scanf("%d%d", &y, &n);
	for (i = y; i <= 3000 * 2; i++) {
		for (j = 0; j < 10; j++) {
			z[j] = 0;
			if (j <= 3) {
				x[j] = 0;
			}
		}//每次遍历回来后都要给数组重新赋0
		
		k = i;//一定要给k重新赋值增加后的年份i
		
		for (j = 3; j >= 0; j--) {
			x[j] = k % 10;
			k /= 10;
			z[x[j]]++;
		}
		
		t = 0;//每次遍历回来后要重新赋0，否则很有可能出现死循环，导致运行超时
		
		for (j = 0; j < 10; j++) {
			if (z[j] != 0) {
				t++;//有多少个不等于0，就是由多少个不同的数字，让t自增
			}
		}
		if (t == n) {
			break;
		}
	}
	printf("%d %04d", i - y, i);
	return 0;
}

