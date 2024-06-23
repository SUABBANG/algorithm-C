#include <stdio.h>
#include <string.h>

int main(void) {
	char szBuffer[12] = { "TestString" };
	char* pszData = "TestString";

	printf("%d\n", strcmp(szBuffer, pszData));
	printf("%d\n", strcmp("TestString", pszData));
	printf("%d\n", strcmp("Test", "TestString")); //앞에가더작다->-1

	//조건문활용
	if (strcmp(szBuffer, pszData) == 0) {
		printf("같은 문자열");
	}

	return 0;
}