#include <stdio.h>

int cha(int a, int b) {

	int cha = b - a;

	if (cha < 0) {

		cha = -cha;

	}

	return cha;

}

int start(int a, int b) {

	if (a <= b) {

		return a;

	}

	if (b <= a) {

		return b;

	}

}

int str_part_equals(char* str, int a, int b, char* str2) {

	int start1;

	start1 = start(a, b);

	int cha1 = cha(a, b);



	for (int i = start1; i != (start1 + cha1); i++) {
		if (str[i] != str2[i - cha1]) {
			if ((i - cha1) < 0) {
				if (str[i] == str[0]) {
					if (str[i + 1] == str[1]) {
						return 1;
					}

				}
			}
			return 0;
		}

	}
	return 1;

}
int main(void) {

	printf("str_part_equals(\"abcd\", 0, 2, \"ab\") : %d\n", str_part_equals("abcd", 0, 2, "ab"));

	// 출력 => str_equals("abcd", 0, 2, "ab") : 1



	printf("str_part_equals(\"abcd\", 1, 2, \"b\") : %d\n", str_part_equals("abcd", 1, 2, "b"));

	// 출력 => str_equals("abcd", 1, 2, "b") : 1



	printf("str_part_equals(\"abcd\", 2, 2, \"\") : %d\n", str_part_equals("abcd", 2, 2, ""));

	// 출력 => str_equals("abcd", 2, 2, "") : 1



	printf("str_part_equals(\"abcd\", 2, 4, \"cb\") : %d\n", str_part_equals("abcd", 2, 4, "cb"));

	// 출력 => str_equals("abcd", 2, 4, "cb") : 0



	printf("str_part_equals(\"abcd\", 2, 4, \"cd\") : %d\n", str_part_equals("abcd", 2, 4, "cd"));

	// 출력 => str_equals("abcd", 2, 4, "cb") : 1



	return 0;

}