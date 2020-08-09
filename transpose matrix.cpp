#include<stdio.h>

int main() {
	int A[3][2] = {
		{1, 3},
		{3, 5},
		{6, 3}
	};
	int B[2][3]; // B will opposite will A

	// it will follow A , that's why first for loop will compute A of first row.
	// and second loop will compute A of column.
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			B[j][i] = A[i][j]; // this loop follow A. that't why A[i][j]. A[row][column].
		}
	}


	printf("A of transpose = ");

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", B[i][j]);
		}
		printf("\n                 ");
	}


	return 0;
}