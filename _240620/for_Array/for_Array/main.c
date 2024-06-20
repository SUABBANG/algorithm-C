#include <stdio.h>
int main(void) {
	int aList[5][5] = { 0 };

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			printf("%d\t", aList[i][j]);
		}
		printf("\n");
	}

	return 0;
}