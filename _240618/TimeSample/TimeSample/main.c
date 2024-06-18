#include <stdio.h>
int main(void) {

	int input = 0;
	scanf_s("%d", &input);

	int second = 0, hour = 0, min = 0;

	hour = input / 3600;
	min = (input % 3600) / 60;
	second = input % 60;

	printf("%02d:%02d:%02d", hour, min, second);

	return 0;

}