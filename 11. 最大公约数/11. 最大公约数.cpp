#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, t, res;
	scanf("%d %d", &a, &b);
	if (a < b) {
		t = a;a = b;b = t;
	}
	while (1) {
		t = a % b;
		if (t == 1) {
			res = 1;
			break;
		}
		else if (t == 0) {
			res = b;
			break;
		}
		a = b;
		b = t;
	}
	printf("最大公约数是: %d", res);
	return 0;
}