#include <stdio.h>
#pragma warning(disable : 4996)

// 201595079 �ֿ���

int sum_recursive(int n) {
	if (n == 1) return 1;
	else return (n + sum_recursive(n - 1));
}

int main(void) {
	int num = 0;
	int result = 0;
	printf("�Է� : ");
	scanf("%d", &num);
	result = sum_recursive(num);
	
	printf("1���� %d������ �� : %d\n", num, result);
}

