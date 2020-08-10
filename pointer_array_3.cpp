#include<stdio.h>

int main() {

	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int* pa = a + 9; pa >= a; pa--) {
		printf("%d ", *pa);
	}

	return 0;
}
