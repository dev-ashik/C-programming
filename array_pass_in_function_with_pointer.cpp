#include<stdio.h>

int getmax(int* p, int n);

int main() {

    int a[5] = { 3, 7, 9, 5, 1 };

    int maxi = getmax(a, 5);
    printf("maxi = %d\n", maxi);

    return 0;
}


int getmax(int* p, int n) //function will recive pointer array name
{

    int maxi = p[0];

    for (int i = 1; i < n; i++) {

        if (p[i] > maxi) {

            maxi = p[i];

        }
    }

    return maxi;

}
