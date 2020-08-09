#include<stdio.h>
int main() {
	// 1 daimensial array

	int arr1[5];
	
	arr1[0] = 1;
	arr1[1] = 2;
	arr1[2] = 3;
	arr1[3] = 4;
	arr1[4] = 5;
	for (int i = 0; i < 5; i++) {
		printf(" %d", arr1[i]);
	}

	printf("\n");


	 
	int arr2[5] = {7, 6, 5, 4, 9};
	arr2[2] = 3; // value change
	
	for (int i = 0; i < 5; i++) {
		printf(" %d", arr2[i]);
	}

	return 0;
}