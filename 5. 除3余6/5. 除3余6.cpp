#include <stdio.h>
int main() {
	int s[100], p = 0;
	for (int i = 3;i <= 100;i++) {
		if (i % 3 == 0 && i % 10 == 6) { 
			s[p++] = i;
		}
	}
	for (int i = 0;i < p;i++) {
		printf("%d", s[i]);
		if (i != p) printf(" ");
	}
	return 0;
}

