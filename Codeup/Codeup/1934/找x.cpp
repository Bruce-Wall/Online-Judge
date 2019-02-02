#include<cstdio>
int list[201] = { 0 };
int main() {
	int n, x;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &list[i]);
		}
		scanf("%d", &x);
		int k;
		for (k = 0; k < n; k++) {
			if (x == list[k]) {
				printf("%d\n", k);
				break;
			}
		}
		if (k == n) printf("-1\n");
	}
	return 0;
}