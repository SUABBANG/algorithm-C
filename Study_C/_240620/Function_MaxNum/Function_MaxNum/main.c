#include <stdio.h>

int Max_Num(int a, int b, int c) {
	int max = 0;

	max = (a > b) ? a : b;
	max = (c > max) ? c : max;

	return max;
}

int main(void) {
	int max = 0;
	max = Max_Num(2, 4, 10);
	printf("%d",max);

	return 0;
}