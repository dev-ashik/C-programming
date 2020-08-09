#include<stdio.h>

// swap ing value...

int swap(int* a, int* b) {
    int tamp = *a;
    *a = *b;
    *b = tamp;
    return 0;
}


int main() {
    int n = 10, m = 20;

    printf("Before swap:\nn = %d, m = %d\n", n, m);
    swap(&n, &m); //dont need to print return value. It working like here have swap code.

    printf("After swap:\nn = %d, m = %d\n", n, m);

    return 0;
}


