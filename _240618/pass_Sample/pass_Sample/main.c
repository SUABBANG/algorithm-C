
#include <stdio.h>
int main(void) {
	int score = 0;
	printf("점수 입력 :");
	scanf_s("%d", &score);

	printf("%s",
		(score >= 80) ? "합격" : "불합격"
	);

	return 0;
}