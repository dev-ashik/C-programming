#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char a;
	printf("Enter you letter: ");
	scanf("%c", &a);
	
	if (65 <= a && a <= 90) // a - z, 65 - 90
	{
		printf("It's capital letter\n");
	}
	else if (97 <= a && a <= 122) // A - Z, 97 - 122
	{
		printf("It's small letter\n");
	}
	else {
		printf("input is wrong\n");
	}


	return 0;
}