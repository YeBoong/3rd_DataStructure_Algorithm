#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char str[50];
	int cnt = 0;
	printf("���ڿ� �Է� : \n");
	gets(str);
	printf("�Էµ� ���ڿ���\n\"");
	for (int i = 0; i < 50; i++) {
		if (str[i] == '\0') break;
		else {
			printf("%c", str[i]);
			cnt++;
		}
	}
	printf("\"\n�Դϴ�.\n");
	printf("�Էµ� ���ڿ��� ���� = %d", cnt);
}