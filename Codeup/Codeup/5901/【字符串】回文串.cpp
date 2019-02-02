#include<cstdio>
#include<cstring>
const int maxn = 256;

bool judge(char str[]) {
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - i - 1])
			return false;
	}
	return true;
}

int main() {
	char str[maxn];
	while (gets_s(str,sizeof(str))){
		bool flag = judge(str);
		if (flag == true) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

/*
做这道题可知，由于gets函数存在安全性缺陷，故VS2015以后的版本不再支持gets函数，采用更加安全的gets_s来替代，但
gets_s放在oj里会提示编译错误。
*/