/*
사용자로 부터 1~9범위 정수를 입력받아 그 수만큼 * 출력
*/

#include <stdio.h>
int main(void) {
	int input = 0;
	
	printf("1~9정수 입력 : ");
	scanf_s("%d", &input);

	if (input < 1 || input >9) {
		printf("1~9사이의 정수 입력");
		return 0;
	}
	
	int i = 0;
	while (i < input) {
		printf("*\t");
		++i;
	}
	putchar('\n');
	return 0;
}