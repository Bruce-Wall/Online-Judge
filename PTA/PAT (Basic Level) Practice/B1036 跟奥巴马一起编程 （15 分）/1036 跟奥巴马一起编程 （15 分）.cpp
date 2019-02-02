#include<cstdio>
int main() {
	int n;
	char c;
	scanf("%d %c", &n, &c);
	for (int i = 0; i < n; i++) {
		printf("%c", c);
	}
	printf("\n");
	if (n % 2 != 0) {
		for (int i = 1; i <= n / 2 - 1; i++) {
			printf("%c", c);
			for (int j = 1; j <= n - 2; j++) printf(" ");
			printf("%c\n", c);
		}
	}
	else {
		for (int i = 1; i <= n / 2 - 2; i++) {
			printf("%c", c);
			for (int j = 1; j <= n - 2; j++) printf(" ");
			printf("%c\n", c);
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%c", c);
	}
	printf("\n");
	return 0;
}