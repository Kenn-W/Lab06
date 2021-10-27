#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_space(int n, int x)
{
	int t = 2 * (n - 1) - 2 * (x - 1);
	for (; t > 0 ; t--) printf(" ");
	return;
}

void print_equal(int n, int x)
{
	printf("1");
	if (x > 1) {
		for (int i = 2; i <= x; i++) printf("+%d", i);
	}
	printf("=%d",x);
	if (x > 1) {
		for (int i = x - 1; i >= 1; i--) printf("+%d", i);
	}
	printf("\n");
	return;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n;i++) {
		print_space(n, i);
		print_equal(n, i);
	}
	return 0;
}