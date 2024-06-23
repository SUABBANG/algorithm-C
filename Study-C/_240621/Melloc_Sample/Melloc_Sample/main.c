#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int* pList = NULL;
	pList = (int*)malloc(sizeof(int) * 3); //4*3=12

	pList[0] = 10;
	pList[1] = 20;
	pList[2] = 30;

	for (int i = 0; i < 3; ++i) {
		printf("%d\n", pList[i]);
	}

	free(pList); // ¸Þ¸ð¸® ¹Ý³³

	return 0;
}