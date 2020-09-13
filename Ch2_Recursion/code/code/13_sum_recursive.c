#include <stdio.h>
#pragma warning(disable : 4996)

// 201595079 최예준

int sum_recursive(int n) {
	if (n == 1) return 1;
	else return (n + sum_recursive(n - 1));
}

int main(void) {
	int num = 0;
	int result = 0;
	printf("입력 : ");
	scanf("%d", &num);
	result = sum_recursive(num);
	
	printf("1부터 %d까지의 합 : %d\n", num, result);
}

