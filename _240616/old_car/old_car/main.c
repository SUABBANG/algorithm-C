//����ڷ� ���� �̸��� ���̸� Ű����� �Է� �޾� ���

#include <stdio.h>
#include <stdlib.h>

 int main(void) {
	char name[10]  = { 0 };		
	int age = 0;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d%*c", &age);
	
	printf("�̸��� �Է��ϼ��� : ");
	gets_s(name, sizeof(name));



	printf("�Էµ� �̸��� %s, ���̴� %d", name, age);
}