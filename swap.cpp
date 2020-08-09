#include<stdio.h>
int main() {
	int a, b;

	a = 10;
	b = 20;
	printf("before swap: a = %d, b = %d\n", a, b);
	int tamp = a;
	a = b;
	b = tamp;
	printf("before swap: a = %d, b = %d\n\n", a, b);

	int num1 = 50;
	int num2 = 100;
	printf("before swap: num1 = %d, num2 = %d\n", num1, num2);
	num1 = num1 - num2;
	num2 = num1 + num2;
	num1 = num2 - num1;

	printf("before swap: num1 = %d, num2 = %d\n", num1, num2);

	return 0;
}