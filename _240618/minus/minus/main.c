/*
����ڷ� ���� �� ������ �Է¹޾� ������ �����ϰ� ��� ��� (��Ʈ ������) 
*/
#include <stdio.h>

int main(void) {
	int a = 0, b = 0;
	int result = 0;
	printf("�� ���� �Է�:");
	scanf_s("%d %d", &a, &b);

	result = (~b + 1) + a;

	//(�� ���� 2�� ����)+���� ��

	printf("��� %d", result);

	return 0;
}