#include <stdio.h>
#pragma warning(disable : 4996)

/* 201595079 �ֿ��� */

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

	printf("�ؼ� �Է� : ");
	scanf("%lf", &base);

	printf("���� �Է� : ");
	scanf("%d", &exp);

	
	pow = power(base, exp);

	printf("%.0f�� %d���� %.0f�Դϴ�.\n", base, exp, pow);
}