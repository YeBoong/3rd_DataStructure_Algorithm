#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char str[50];
	int cnt = 0;
	printf("문자열 입력 : \n");
	gets(str);
	printf("입력된 문자열은\n\"");
	for (int i = 0; i < 50; i++) {
		if (str[i] == '\0') break;
		else {
			printf("%c", str[i]);
			cnt++;
		}
	}
	printf("\"\n입니다.\n");
	printf("입력된 문자열의 길이 = %d", cnt);
}