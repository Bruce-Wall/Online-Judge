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
��������֪������gets�������ڰ�ȫ��ȱ�ݣ���VS2015�Ժ�İ汾����֧��gets���������ø��Ӱ�ȫ��gets_s���������
gets_s����oj�����ʾ�������
*/