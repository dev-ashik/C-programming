#include<stdio.h>
int main() {
	int a[6] = { 2, 4, 5, 6, 8, 9 };

	int len = sizeof(a) / sizeof(int);
	printf("len = %d\n", len);

	int length = sizeof(a) / sizeof(a[0]);
	printf("length = %d\n", length);

	return 0;
}
