/*사용자로 부터 세정수를 입력받아 총합 출력*/

#include <stdio.h>
int main(void) {
	int input = 0;
	int total = 0;
	scanf_s("%d",&input);
	total += input;
	scanf_s("%d", &input);
	total += input;
	scanf_s("%d", &input);
	total += input;
	
	printf("총합:%d", total);
	return 0;
}