//// �ڵ� ���� ����
//#include <stdio.h>
//#include <stdlib.h>
//int main(void) {
//	char szBuffer[12] = { "Hello World" };
//	char* pszData = NULL;
//	pszData = (char*)malloc(sizeof(char) * 12);
//	pszData = szBuffer; //����������
//	puts(pszData);
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char szBuffer[12] = { "Hello World" };
	char* pszData = NULL;
	pszData = (char*)malloc(sizeof(char) * 12);
	memcpy(pszData, szBuffer, 12); // memcpy �Լ��� ����Ͽ� szBuffer�� ������ pszData�� ����
	puts(pszData);

	free(pszData); // �������� �Ҵ��� �޸𸮸� ����

	return 0;
}