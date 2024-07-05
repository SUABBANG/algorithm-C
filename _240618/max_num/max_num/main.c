/*
사용자로 부터 입력받은 정수 중 가장 큰 수를 출력
정수는 부호가 있는 32비트 정수로 한정하며 scanf_s 함수로 한번에 한 값만 입력 받고 내부적으로
최대값 갱신
*/
#include <stdio.h>
int main(voide) {
	int input = 0;
	int max = 0;
	
	scanf_s("%d", &input);
	max = (max < input) ? input : max;
	scanf_s("%d", &input);
	max = (max < input) ? input : max;
	scanf_s("%d", &input);
	max = (max < input) ? input : max;

	printf("MAX : %d", max);

	return 0;
}