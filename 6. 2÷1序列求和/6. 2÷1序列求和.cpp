#include <stdio.h>
int main() {
	int a = 2, b = 1, t;
	double sum = 0;
	for (int i = 1;i <= 50;i++) {
		sum += 1.0 * a / b ;
		t = a + b;
		b = a;
		a = t;
	}
	printf("%.2f", sum);
	return 0;
}