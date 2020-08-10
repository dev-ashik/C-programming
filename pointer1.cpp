#include<stdio.h>
int main() {

	int a = 10;
	
	// I stored memory address of "a" in the pointer variable *ptr
	int* ptr = &a; 

	printf("a = %d\n", a);
	printf("address of a = %d\n", &a); // &a memory address
	printf("valu of a = %d\n", *ptr);  //  *ptr is value
	printf("address of a = %d\n", ptr); // ptr is address

	//output
		// a = 10
		// address of a = 6354752
		// valu of a = 10
		// address of a = 6354752
	p1();

	return 0;
}

int p1() {
		int x = 5;
	
		int *ptr;
		ptr = &x;

		printf("%d\n", x);
	         	// value of x
		printf("%d\n", &x);
	         	// address of x
		printf("%d\n", ptr);
	         	// address of x because I stored &x in ptr
		printf("%d\n", *ptr);
	         	// valu of x 
		printf("%d\n", &ptr);
	         	// address of &ptr

		return 0;
	
}
