/*ㅇ*/

#include <stdio.h>

int main(void) {
	int a = 0, b = 0;
	double avg = 0.0;

	printf("두 정수 입력 : ");
	scanf_s("%d %d", &a, &b);

	avg = (a + b) / 2.0; // int/float=float

	printf("결과:%.2f", avg);

	return 0;

}