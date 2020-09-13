#include <stdio.h>
#pragma warning(disable : 4996)

// 201595079 최예준

int sum_iter(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}

int main(void) {
	int num = 0;
	int result = 0;
	printf("입력 : ");
	scanf("%d", &num);
	result = sum_iter(num);

	printf("1부터 %d까지의 합 : %d\n", num, result);
}

