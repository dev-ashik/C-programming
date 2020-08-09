#include<stdio.h>
int main() {
	// if, else if and else
	int num = 101;

	if (num > -1 && num < 70) {
		printf("fail\n");
	}
	else if (num > 69 && num <= 100) {
		printf("pass\n");
	}
	else {
		printf("something wrong\n");
	}

	return 0;
}