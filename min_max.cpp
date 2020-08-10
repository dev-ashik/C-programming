#include<stdio.h>
int main() {
	int arr[5] = { 8, 4, 3, 0, 2 };

	int max = arr[0];
	for (int i = 1; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("maximum = %d\n", max);

	return 0;
