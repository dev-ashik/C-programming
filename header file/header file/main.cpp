#include<stdio.h>
#include"header1.h"
#include"header2.h"

int main() {
	int num1, num2, result1, result2;

	num1 = 16;
	num2 = 9;

	result1 = square(num1);
	printf("square of %d = %d\n",num1,  result1);

	result2 = max(num1, num2);
	printf("maximun number between %d and %d = %d\n",num1, num2, result2);

	return 0;
}
