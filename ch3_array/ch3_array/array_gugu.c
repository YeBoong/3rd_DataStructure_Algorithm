#include <stdio.h>
#pragma warning(disable : 4996)

// 201595079	�ֿ���

int main(void) {
	int num;
	int multiply[9];

	printf("1~9�� ���� �Է� : ");
	
	while (1) {
		scanf("%d", &num);
		if (num < 0 || num>9) {
			printf("1~9 ���̷� �Է��ϼ��� : ");
		}
		else break;
	}

	printf("\n");

	for (int i = 0; i < 9; i++) {
		multiply[i] = num * (i + 1);
		printf("%d X %d = %d\n", num, i + 1, multiply[i]);
	}
}