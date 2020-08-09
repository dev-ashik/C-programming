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


    return 0;
}
