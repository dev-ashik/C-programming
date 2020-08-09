#include<stdio.h>

int main() {

	// 1*2*3*.......*10 = ?
	int ans = 1;
	for (int i = 1; i < 5; i++) {
		ans *= i;
	}
	printf("answer = %d\n", ans);


	return 0;
}