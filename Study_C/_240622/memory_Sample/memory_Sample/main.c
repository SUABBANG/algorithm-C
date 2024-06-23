//// 코드 결함 수정
//#include <stdio.h>
//#include <stdlib.h>
//int main(void) {
//	char szBuffer[12] = { "Hello World" };
//	char* pszData = NULL;
//	pszData = (char*)malloc(sizeof(char) * 12);
//	pszData = szBuffer; //오버라이팅
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
	memcpy(pszData, szBuffer, 12); // memcpy 함수를 사용하여 szBuffer의 내용을 pszData로 복사
	puts(pszData);

	free(pszData); // 동적으로 할당한 메모리를 해제

	return 0;
}