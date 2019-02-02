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
������ջ�ܴ�
���Լ����ĽǶȽ���
    1.���ŵ�ʡ�Ի����������˼��BUG��ͨ��������if-else����У�
	2.ע��OJ��Ŀ����������ĸ�ʽ����Ҫ�뵱Ȼ��
	3.ע����/�Ժ������λ��������10��1000����λ���϶���Ҫ�仯�ģ�
	4.If��������ͬ�������ִ�еĴ�����һ���ģ����if�������ֻ��дһ���ܳ��������ж�ʽ������Щ���룬
	  ���߲��м���if������ִ�в�����ÿ��if�¶���дһ�飬�����ֶ���̫�ã���ȷ������������4.
	5.�߼��ж�ʽ�����ŷǳ���Ҫ��
�ӱ�׼�ο����ĽǶȽ���
    1.�������if������������ͬ�������ִ�еĴ�����һ���ģ��������ر��ӣ���ʱҪ��������������ݽṹ
	  ��if�ĸ��û��߸��ӵı��ʽ��
	2.scanf��ĳЩOJ��Ҫд��while(scanf()!=EOF);�ĸ�ʽ,����ע����������������Ч���֡�
*/
