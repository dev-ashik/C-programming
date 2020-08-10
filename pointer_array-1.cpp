#include<stdio.h>

int main() {
    int arr[5] = { 1, 2, 4, 5, 6 };

    int* ptr;
    ptr = &arr[0]; // I stored memory address of first value.

    printf("%d\n", *ptr);
    printf("%d\n", *(ptr + 1));
    printf("%d\n", *(ptr + 2));
    printf("%d\n", *(ptr + 3));

    printf("\n\n\n\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *ptr);
        ptr++;
    }

    // a[0] = a
	// a[1] = a+1
	// a[2] = a+2
	// a[3] = a+3
	// a[4] = a+4


    return 0;
}
