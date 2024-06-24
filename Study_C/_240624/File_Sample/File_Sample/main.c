#include <stdio.h>

int main(void) {

	FILE* fp = NULL;
	fopen_s(&fp, "TESTa.txt", "w");
	if (fp == NULL) {
		puts("ERROR");
		return;
	}

	//File I/O
	fprintf("%s\n", "Hello");

	fclose(fp);
	return 0;
}