#include<stdio.h>
#pragma warning(disable:4996)

// 201595079 �ֿ���

int main(void) {
	int score[3] = {91, 86, 97};
	char grade[3] = {'A', 'B', 'C'};

	printf("**�г⺰ ������� ���**\n");
	for (int i = 0; i < 3; i++) {
		printf("%d�г� : ����=%d, ���=%c\n", i+1, score[i], grade[i]);
	}

	/*
	for (int i = 0; i < sizeof(score)/sizeof(int); i++) {
		printf("%d�г� : ����=%d, ���=%c\n", i+1, score[i], grade[i]);
	}
	*/
}