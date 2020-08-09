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

	return 0;
}
