#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char A;
	printf("Enter you capital letter: ");
	scanf("%c", &A);

	int s = A + 32; // capital to small = capital letter + 32
	                 // small to capital = small letter - 32
	printf("small - %c\n", s);

	return 0;
}