#include<stdio.h>

#define M 3
#define N 2
// matrix multiply...
int main() {

	int A[M][M] = {
		{1, 2, 1},
		{1, 2, 1},
		{1, 2, 1}
	};
	int B[M][N] = {
		{1, 2},
		{1, 2},
		{1, 2}
	};
	int C[M][N] = { 0 };

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	printf("A x B = ");

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n        ");
	}

	return 0;
}
