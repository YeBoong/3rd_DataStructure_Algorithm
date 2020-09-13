#include <stdio.h>
#pragma warning(disable : 4996)

int factorial_iter(int n) {
	int result = 1;
	for (int i = n; i >= 1; i--) {
		result *= i;
		if (i <= 1) {
			printf("%d = %d", i, result);
		}
		else {
			printf("%d * ", i);
		}
	}
}

int main(void) {
	int num;
	printf("ют╥б : ");
	scanf("%d", &num);

	factorial_iter(num);
}