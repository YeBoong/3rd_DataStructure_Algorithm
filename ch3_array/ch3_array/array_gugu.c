#include <stdio.h>
#pragma warning(disable : 4996)

// 201595079	최예준

int main(void) {
	int num;
	int multiply[9];

	printf("1~9의 정수 입력 : ");
	
	while (1) {
		scanf("%d", &num);
		if (num < 0 || num>9) {
			printf("1~9 사이로 입력하세요 : ");
		}
		else break;
	}

	printf("\n");

	for (int i = 0; i < 9; i++) {
		multiply[i] = num * (i + 1);
		printf("%d X %d = %d\n", num, i + 1, multiply[i]);
	}
}