#include <stdio.h>

int main() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);

	int n3 = n1 * (n2 % 10);
	int n4 = n1 * (n2 / 10 % 10);
	int n5 = n1 * (n2 / 100);

	printf("%d\n", n3);
	printf("%d\n", n4);
	printf("%d\n", n5);
	printf("%d\n", n5 * 100 + n4 * 10 + n3);

	return 0;
}
