// 문제 : 문장에서 특정 문장의 위치를 반환하는 함수를 만들어주세요.(get_index_of_str)

#include <stdio.h>
int f = 0;
int length(char* a) {
	int i;
	for (i = 0; 1; i++) {
		if (a[i] == '\0') {
			break;
		}
	}
	return i;
}
int get_index_of_str(char* str, char* str1)
{
	int strg = length(str);
	int str2g = length(str1);

	for (int i = 0; i < strg; i++) {
		if (str[i] == str1[f]) {
			if (str2g == 1) {
				return i;
			}
			for (f = 1; f < str2g; f++)
				if (str[i + f] == str1[f]) {
					return i;
				}
				else if (str[i + f] != str1[f]) {

					return -1;
				}
		}
	}
}
int main(void) {
	int index;

	index = get_index_of_str("abc", "b");
	printf("index : %d\n", index);
	// 출력 => index : 1

	index = get_index_of_str("test", "es");
	printf("index : %d\n", index);
	// 출력 => index : 1

	index = get_index_of_str("abcd", "bd");
	printf("index : %d\n", index);
	// 출력 => index : -1

	return 0;
}