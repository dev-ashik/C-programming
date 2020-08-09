#define _CRT_SECURE_NO_WARNINGS
//this line will avoid visual studio 2019 "scanf" error.

#include<stdio.h>

int main() {
	//int a;
	//printf("Enter you number: ");
                        // scanf will input a number from user.
	//scanf("%d", &a); // empersand(&) symbols for variable address.
	//printf("a = %d\n", a);

	int x, y;
	printf("Enter you two number: ");
	scanf("%d %d", &x, &y); 
	printf("%d + %d = %d\n",x, y, x+y);

	return 0;
}