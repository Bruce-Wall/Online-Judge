#include<cstdio>
#include<cstring>
int main() {
	char str[90];
	gets_s(str);
	int len = strlen(str);
	int wordnum = 1, length = 0;
	char wdlist[90][90];
	for (int i = 0; i < len; i++) {
		if (str[i] != ' ') {
			wdlist[wordnum][length++] = str[i];
		}
		else {
			wdlist[wordnum][length] = '\0';
			length = 0;
			wordnum++;
		}
	}
	wdlist[wordnum][length] = '\0';
	for (int i = wordnum; i > 0; i--) {
		printf("%s", wdlist[i]);
		if (i > 1) printf(" ");
	}
	return 0;
}

/*
����PAT���ϵĴ���������ģ�Ҫô�ڵ�9�е�len+1��Ҫô��ӵ�19�У���������������Ϊ��ȷ�����һ��������'\0'��β��
strlen�������صĽ���ǲ���'\0'�ģ�����ֱ���û�����⣬�����һ�ѡ��̡���δ�����������
���⣬PAT��C++��������֧��gets()����,gets_s()Ҳ��֧�֣�����ύ��ʱ��ĳ�C����Ҫע��C��for(int i = ; ; )��д
���ǲ��Ϸ��ģ�Ҫ�������ʼ��for��
*/