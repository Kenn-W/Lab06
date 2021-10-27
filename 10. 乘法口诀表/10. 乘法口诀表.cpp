#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_mul(int x)
{
	printf(" ");
	for (int i = 1; i <= x; i++) {
		printf("%d * %d = %2d ", i, x, x * i);
	}
	printf("\n");
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n;i++) {
		print_mul(i);
	}
	return 0;
}