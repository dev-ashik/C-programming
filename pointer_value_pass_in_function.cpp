#include<stdio.h>

// pointer value pass in a function...

int sum(int* a, int* b) {

    return  *a + *b;
}


int main() {
    int n = 10, m = 20;

    int s = sum(&n, &m); // I will pass memory address and function will recive pointer argument.

    printf("sum = %d\n", s);

    return 0;
}