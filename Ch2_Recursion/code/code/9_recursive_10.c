#include <stdio.h>
#pragma warning(disable : 4996)

int recursive(int n) {
	printf("%d\n", n);
	if (n < 1) return -1;
	else return(recursive(n - 3) + 1);
}

int main(void) {
	int num = 0;
	int result = 0;

	printf("입력 : ");
	scanf("%d", &num);
	result = recursive(num);
	printf("반환값 : %d\n", result);
}
