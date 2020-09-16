#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 3
#define COLS 5

int main() {
	srand((int)time(NULL));

	int i, j;
	int ar[ROWS][COLS];

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			ar[i][j] = rand() % 100;
			printf("%5d ", ar[i][j]);
		}
		
		printf("\n");
	}
}


