/*정수를 입력 받아 각각을 int형변수 a,b에 저장하고 임시변수 tmp를 활용해 a,b값교환*/
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