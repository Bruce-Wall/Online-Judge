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
本题PAT书上的答案是有问题的，要么在第9行的len+1，要么添加第19行，这两个工作都是为了确保最后一个单词以'\0'结尾，
strlen函数返回的结果是不带'\0'的，所以直接用会出问题，会出现一堆“烫”（未定义变量）。
另外，PAT的C++编译器不支持gets()函数,gets_s()也不支持，因此提交的时候改成C，还要注意C中for(int i = ; ; )的写
法是不合法的，要在外面初始化for。
*/