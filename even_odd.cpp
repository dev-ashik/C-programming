#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num;
	printf("input your number: ");
	scanf("%d", &num);
	
	if (num == 0) {
		printf("It's zero.\n");
	}
	else if (num % 2 == 0) {
		printf("It's a even number.\n");
	}
	else {
		printf("It's a odd number.\n");
	}

	return 0;
}