#include <stdio.h>
int main(void) {
	int Array[5] = {0};
	int nMax = 0;

	for (int i = 0; i < sizeof(Array)/sizeof(int); ++i) {
		scanf_s("%d", &Array[i]);
	}

	printf("BEFORE : ");
	for (int i = 0; i < sizeof(Array) / sizeof(int); ++i) {
		printf("%d ", Array[i]);
	}
	printf("\n");


	for (int i = 0; i < sizeof(Array) / sizeof(int); ++i) {
		nMax = (nMax < Array[i]) ? Array[i] : nMax;
	}

	printf("MAX : %d", nMax);

	return 0;
}