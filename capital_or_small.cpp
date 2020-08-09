#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char a;
	printf("Enter you letter: ");
	scanf("%c", &a);

	if ('A' <= a && a <= 'Z')
	{
		printf("It's capital letter.\n");
	}
	else if ('a' <= a && a <= 'z') // A - Z, 97 - 122
	{
		printf("It's small letter.\n");
	}
	else {
		printf("input is wrong.\n");
	}

	return 0;
}