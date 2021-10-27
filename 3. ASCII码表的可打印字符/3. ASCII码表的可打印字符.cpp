#include <cctype>
#include <stdio.h>

int main()
{
	int st, ed,f=0;
	scanf_s("%d %d", &st, &ed);
	for (int i = st;i <= ed;i++) {
		if (isgraph(i)) {
			printf("%-8d%c", i, i);
			if (i != ed && i!=126) printf("\n");
			f = 1;
		}
	}
	if (!f) printf("NONE");
	return 0;
}
