#include <stdio.h>
#pragma warning(disable : 4996)

int factorial(int n) {
	if (n <= 1) return 1;
	else return (n * factorial(n - 1));
}

int main(void) {
	int num;
	printf("ют╥б : ");
	scanf("%d", &num);

	for (int i = num; i >= 1; i--) {
		if (i <= 1) {
			printf("%d = %d", i, factorial(num));
		}
		else {
			printf("%d * ", i);
		}
	}
}