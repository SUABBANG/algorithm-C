/*����ڷ� ���� �������� �Է¹޾� ���� ���*/

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
	
	printf("����:%d", total);
	return 0;
}