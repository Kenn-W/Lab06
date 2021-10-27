#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char s;
	int n, a, b, c;
	double t = 0, ti;
	while (scanf("%c", &s)) {
		if (s == 'T') break;
		scanf("%d %d %d %d", &n, &a, &b, &c);
		ti = n * a * b * c / 12.0;
		if (s == 'P') {
			ti *= 0.89;
			printf("%d %d*%d*%d Pine, Cost: $%.2f\n", n, a, b, c, ti);
			t += ti;
		}
		else if (s == 'F') {
			ti *= 1.09;
			printf("%d %d*%d*%d Fire, Cost: $%.2f\n", n, a, b, c, ti);
			t += ti;
		}
		else if (s == 'C') {
			ti *= 2.26;
			printf("%d %d*%d*%d Cedar, Cost: $%.2f\n", n, a, b, c, ti);
			t += ti;
		}
		else if (s == 'M') {
			ti *= 4.50;
			printf("%d %d*%d*%d Maple, Cost: $%.2f\n", n, a, b, c, ti);
			t += ti;
		}
		else if (s == 'O') {
			ti *= 3.10;
			printf("%d %d*%d*%d Oak, Cost: $%.2f\n", n, a, b, c, ti);
			t += ti;
		}
	}
	printf("Total cost: $%.2f", t);
	return 0;
}