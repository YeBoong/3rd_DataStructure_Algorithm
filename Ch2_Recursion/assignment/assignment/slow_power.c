#include <stdio.h>
#pragma warning(disable : 4996)

/* 201595079 최예준 */

double slow_power(double x, int n) {
	int i;
	double result = 1.0;

	for (i = 0; i < n; i++)
		result = result * x;
	
	return(result);
}

int main(void) {
	double base;
	int exp;
	double pow;

	printf("밑수 입력 : ");
	scanf("%lf", &base);

	printf("지수 입력 : ");
	scanf("%d", &exp);

	pow = slow_power(base, exp);

	printf("%.0f의 %d승은 %.0f입니다.", base, exp, pow);
}