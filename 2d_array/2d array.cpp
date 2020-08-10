#include<stdio.h>

int main() {

    int A[2][3] =       // first one for row and second one coulmn.
    {
        {2, 4, 5},
        {9, 1, 3}
    };

    printf("%d ", A[0][0]);
    printf("%d ", A[0][1]);
    printf("%d ", A[0][2]);
    printf("%d ", A[1][0]);
    printf("%d ", A[1][1]);
    printf("%d\n", A[1][2]);
   

    return 0;
}

