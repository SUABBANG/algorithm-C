/*
1~10���� ������ �ۼ�
*/

#include <stdio.h>
int main(void) {
	int sum = 0;

	for (int i = 1; i < 11; ++i) {
		sum += i;
	}
	printf("%d", sum);

	return 0;

}