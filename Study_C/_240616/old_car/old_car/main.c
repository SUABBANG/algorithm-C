//사용자로 부터 이름과 나이를 키보드로 입력 받아 출력

#include <stdio.h>
#include <stdlib.h>

 int main(void) {
	char name[10]  = { 0 };		
	int age = 0;

	printf("나이을 입력하세요 : ");
	scanf_s("%d%*c", &age);
	
	printf("이름을 입력하세요 : ");
	gets_s(name, sizeof(name));



	printf("입력된 이름은 %s, 나이는 %d", name, age);
}