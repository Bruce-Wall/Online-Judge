#include<cstdio>
int main() {
	int date1, date2;
	while (scanf("%d%d", &date1, &date2) != EOF) {
		if (date1 > date2) {
			int temp = date1;
			date1 = date2;
			date2 = temp;
		}

		int dayInterval = 0;
		int year1 = date1 / 10000;
		int month1 = (date1 % 10000) / 100;
		int day1 = date1 % 100;
		int i = date1;

		while (i <= date2) {
			day1++;
			if (month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12) {
				if (day1 == 32) {
					day1 = 1;
					month1++;
					if (month1 == 13) {
						month1 = 1;
						year1++;
					}
				}
			}
			else if (month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11) {
				if (day1 == 31) {
					day1 = 1;
					month1++;
					if (month1 == 13) {
						month1 = 1;
						year1++;
					}
				}
			}
			else if (month1 == 2) {
				if (((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0)) && day1 == 30) {
					day1 = 1;
					month1++;
					if (month1 == 13) {
						month1 = 1;
						year1++;
					}
				}
				else if ((!((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0))) && day1 == 29) {
					day1 = 1;
					month1++;
					if (month1 == 13) {
						month1 = 1;
						year1++;
					}
				}
			}
			i = year1 * 10000 + month1 * 100 + day1;
			dayInterval++;
		}
		printf("%d\n", dayInterval);
	}
	return 0;
}

/*
这道题收获很大：
从自己做的角度讲：
    1.括号的省略会产生匪夷所思的BUG，通常出现在if-else语句中；
	2.注意OJ题目给出的输入的格式，不要想当然；
	3.注意用/以后的数的位数，除以10、1000这种位数肯定是要变化的；
	4.If语句如果不同条件最后执行的代码是一样的，光从if语句下手只能写一个很长的条件判断式囊括这些代码，
	  或者并列几个if，但是执行部分在每个if下都重写一遍，这两种都不太好，正确的做法看下面4.
	5.逻辑判断式的括号非常重要。
从标准参考题解的角度讲：
    1.如果几个if语句仅是条件不同，但最后执行的代码是一样的，条件还特别复杂，这时要考虑用数组等数据结构
	  简化if的复用或者复杂的表达式。
	2.scanf在某些OJ上要写成while(scanf()!=EOF);的格式,并且注意作用域在整个有效部分。
*/
