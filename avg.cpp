#include <stdio.h>

int main(void) {
	int score[5], i, total = 0, count;
	double avg;

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < 5; i++) {
		scanf_s("%d", &score[i]);
	}
	for (i = 0; i < 5; i++) {
		
		total += score[i];
	}
	avg = total / (double)count;//���� ������ count

	for (i = 0; i < 5; i++) {
		printf("%5d", score[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);
	return 0;
}