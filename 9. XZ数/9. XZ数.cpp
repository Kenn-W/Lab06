#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int judge(int x)
{
	int i = x % 10;
	int t;
	while (x / 10 != 0) {
		x /= 10;
		t = x % 10;
		if (t != i) return 0;
	}
	return 1;
}

int main()
{
	int a, b,sum=0;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++) {
		if (judge(i)) sum++;
	}
	printf("%d", sum);
	return 0;
}