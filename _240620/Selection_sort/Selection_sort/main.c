#include <stdio.h>

int main(void) {
	int Array[5] = { 30,40,10,50,20 };
	int tmp = 0;

	for (int i = 0; i < 5; ++i) {
		for (int j = i + 1; j < 5; ++j) {
			if (Array[i] > Array[j]) {
				tmp = Array[i];
				Array[i] = Array[j];
				Array[j] = tmp;
			}
		}
		for (int k = 0; k < 5; ++k) {
			printf("%d ", Array[k]);
		}

		printf("\n");
	}


	return 0;
}