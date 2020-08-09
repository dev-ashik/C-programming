#include<stdio.h>


typedef int(*PFUNC)(int, int); // here function can recive int type value
  // and function can return int type value.

int add(int a, int b);
int sub(int a, int b);

int main() {
	int a = 10, b = 40;

	PFUNC ptr = &add;

	int c = ptr(a, b);
	printf("add = %d\n", c);

	ptr = &sub;
	int s = ptr(a, b);
	printf("sub = %d\n", s);


	return 0;
}

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}


