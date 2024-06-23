#include <stdio.h>
#include <string.h>

void MyStrcpy(char* Src, unsigned int size, char* Dst) {

	size_t nLenSrc = 0;
	nLenSrc = strlen(Src);

	for (int i = 0; i < nLenSrc; ++i) {
		Dst[i] = Src[i];
	}
	
}

int main(void) {
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);

	return 0;
}