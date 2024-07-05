#include <stdio.h>

int main(void) {
	char szBuffer[32] = { "You are a girl" };

	//Y
	printf("szBuffer[0] : %c\n", szBuffer[0]);
	printf("*szBuffer : %c\n", *szBuffer);
	printf("*(szBuffer+0) : %c\n", *(szBuffer+0));

	//r
	printf("szBuffer[5] : %c\n", szBuffer[5]);
	printf("*(szBuffer + 5) : %c\n", *(szBuffer + 5));

	//are a girl
	printf("&szBuffer[4] : %s\n", &szBuffer[4]);
	printf("&*(szBuffer + 4) : %s\n", &*(szBuffer + 4));
	printf("szBuffer s + 4 : %s\n", szBuffer + 4);
	printf("szBuffer p + 4 : %s\n", szBuffer + 4);

	return 0;

}
