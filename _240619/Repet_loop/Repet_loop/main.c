/*
����ڷ� ���� 1~9���� ������ �Է¹޾� �� ����ŭ * ���
*/

#include <stdio.h>
int main(void) {
	int input = 0;
	
	printf("1~9���� �Է� : ");
	scanf_s("%d", &input);

	if (input < 1 || input >9) {
		printf("1~9������ ���� �Է�");
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