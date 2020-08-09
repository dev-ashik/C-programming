#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	//number system
	int num;
	printf("Enter you decimal number: ");
	scanf("%d", &num);

	printf("decimal = %d\n", num);
	printf("octal = %o\n", num);
	//printf("binary = %lld\n", num);
	printf("hexadecimal = %x\n", num);
	
	return 0;
}