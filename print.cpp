#include<stdio.h>

int main() {
	
	//variable & data type
	char c = 'A';
	const char* s = "Hello";
	int a = 10, b = 20, ans;
	unsigned int v1 = 10;
	float v2 = 2.768787;
	double v3 = 8.9897;

	printf("c = %c\n", c);
	printf("s = %s\n", s);
	ans = a + b;
	printf("Answer = %d\n", ans);
	printf("v1 = %u\n", v1);

	printf("v2 = %f\n", v2);
	printf("v2 = %.3f\n", v2);    //for  %.3f It will print 3 digits after (.) point.

	printf("v3 = %lf\n", v3);
	printf("v3 = %.7lf\n", v3);   //for  %.7lf It will print 7 digits after (.) point.

	return 0;
}