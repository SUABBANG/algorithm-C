#include <stdio.h>
#include <string.h>

int main(void) {
	char szBuffer[12] = { "TestString" };
	char* pszData = "TestString";

	printf("%d\n", strcmp(szBuffer, pszData));
	printf("%d\n", strcmp("TestString", pszData));
	printf("%d\n", strcmp("Test", "TestString")); //�տ������۴�->-1

	//���ǹ�Ȱ��
	if (strcmp(szBuffer, pszData) == 0) {
		printf("���� ���ڿ�");
	}

	return 0;
}