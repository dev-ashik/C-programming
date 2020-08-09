#include<stdio.h>

int main() {

	// 1+2+3+.......+10 = ?
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("sum = %d\n", sum);

	return 0;
}