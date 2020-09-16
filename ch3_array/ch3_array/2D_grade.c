#include <stdio.h>
#pragma warning(disable:4996)
#define ROWS 3
#define COLS 5

int main(void) {
	int ar[ROWS][COLS] = {	{87, 98, 80, 76, 3},
								{99, 98, 90, 90, 0},
								{65, 68, 50, 49, 0}
							};

	for (int i = 0; i < ROWS; i++) {
		double final_score = ar[i][0] * 0.3 + ar[i][1] * 0.4 + ar[i][2] * 0.2 + ar[i][3] * 0.1 - ar[i][4];
		printf("학생 %d의 최종 성적 = %6.2f\n", i + 1, final_score);
	}
	
	return 0;
}