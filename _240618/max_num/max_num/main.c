/*
����ڷ� ���� �Է¹��� ���� �� ���� ū ���� ���
������ ��ȣ�� �ִ� 32��Ʈ ������ �����ϸ� scanf_s �Լ��� �ѹ��� �� ���� �Է� �ް� ����������
�ִ밪 ����
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