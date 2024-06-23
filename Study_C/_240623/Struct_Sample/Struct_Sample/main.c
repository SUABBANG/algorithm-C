// Single linked list
#include <stdio.h>

typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];

	struct USERDATA* pNext;
} USERDATA;

int main(void)
{
	USERDATA user = { "�ڼ���", "1234", NULL };
	USERDATA newUser = { "ȫ�浿", "2345", NULL };

	user.pNext = &newUser; 
	printf("%s, %s\n", user.szName, user.szPhone);
	printf("----\n");
	printf("%s, %s\n", user.pNext->szName, user.pNext->szPhone);
	return 0;
}

