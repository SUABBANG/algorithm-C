/*������ �Է� �޾� ������ int������ a,b�� �����ϰ� �ӽú��� tmp�� Ȱ���� a,b����ȯ*/
#include<stdio.h>

int main(void) {

	int a = 0, b = 0;
	int tmp = 0;

	scanf_s("%d %d", &a, &b);
	tmp = a;
	a = b;
	b = tmp;

	printf("a:%d b:%d", a, b);

	return 0;
}