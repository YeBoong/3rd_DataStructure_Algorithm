#include <stdio.h>
#pragma warning(disable : 4996)

/* 201595079 �ֿ��� */

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

	printf("�ؼ� �Է� : ");
	scanf("%lf", &base);

	printf("���� �Է� : ");
	scanf("%d", &exp);

	pow = slow_power(base, exp);

	printf("%.0f�� %d���� %.0f�Դϴ�.", base, exp, pow);
}