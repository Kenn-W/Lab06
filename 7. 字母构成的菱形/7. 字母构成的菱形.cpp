#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_space(int n, int x)
{
	if (x > n)  x = 2 * n - x;
	for (int i = 1 ; i <= n - x ; i++) printf(" ");
	return;
}

void print_alpha(int n, int x)
{
	int xi=x;
	if (x > n) xi = 2 * n - x;
	for (int i = 1; i <= 2 * (xi - 1) + 1 ; i++) printf("%c", 'A' + x - 1);
	printf("\n");
	return;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int x = 1;x <= 2 * n - 1;x++) {
		print_space(n, x);
		print_alpha(n, x);
	}
	return 0;
}