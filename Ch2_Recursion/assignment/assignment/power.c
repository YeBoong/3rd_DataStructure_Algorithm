#include <stdio.h>
#pragma warning(disable : 4996)

/* 201595079 최예준 */

double power(double x, int n) {
	if (n == 0) return 1;
	else if ((n % 2) == 0)
		return power(x*x, n/2);
	else return x * power(x*x, (n - 1) / 2);
}

int main(void) {
	double base;
	int exp;
	double pow;

	printf("밑수 입력 : ");
	scanf("%lf", &base);

	printf("지수 입력 : ");
	scanf("%d", &exp);

	
	pow = power(base, exp);

	printf("%.0f의 %d승은 %.0f입니다.\n", base, exp, pow);
}