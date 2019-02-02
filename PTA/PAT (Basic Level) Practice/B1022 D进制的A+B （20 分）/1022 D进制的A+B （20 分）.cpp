#include<cstdio>
int main() {
	int a, b, c, d;
	scanf("%d%d%d", &a, &b, &d);
	c = a + b;
	int covert[31], num = 0;
	do {
		covert[num++] = c % d;
		c /= d;
	} while (c != 0);
	for (int i = num - 1; i >= 0; i--) {
		printf("%d", covert[i]);
	}
	return 0;
}