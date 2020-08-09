#include<stdio.h>

int main() {
	//bubble sort.
	// ascending order 1, 2, 3, 4....
	//descending order ....4, 3, 2, 1

	int arr[5] = { 5,3,1,4,2 };

	for (int i = 0; i < 5 - 1; i++) {

		for (int j = 0; j < 5 - 1 - i; j++) {

			if (arr[j] > arr[j + 1])  // ascending order
			{

				int tamp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tamp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}
}
