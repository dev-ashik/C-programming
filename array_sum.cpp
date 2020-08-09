#include<stdio.h>
int main() {
	int a[5] = { 1, 3, 4, 5, 6 };

	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += a[i];
	}
	printf("sum = %d\n", sum);

	return 0;
}