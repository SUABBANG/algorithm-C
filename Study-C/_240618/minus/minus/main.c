/*
사용자로 부터 두 정수를 입력받아 뺄셈을 수행하고 결과 출력 (비트 연산자) 
*/
#include <stdio.h>

int main(void) {
	int a = 0, b = 0;
	int result = 0;
	printf("두 정수 입력:");
	scanf_s("%d %d", &a, &b);

	result = (~b + 1) + a;

	//(뺄 값의 2의 보수)+원래 값

	printf("결과 %d", result);

	return 0;
}