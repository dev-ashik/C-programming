#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char c;
	printf("input your letter: ");
	scanf("%c", &c);

	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
		printf("It's Vowel.\n");
	}
	else {
		printf("It's consonant.\n");
	}

	return 0;
}