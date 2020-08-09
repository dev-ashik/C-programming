#include<stdio.h>


// n! n factorial with function recursion.
long fact(long n);

int main() {
	long n = 5;

	long v = fact(n);
	printf("n! = %ld\n", v);

	return 0;
}

long fact(long n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * fact(n - 1);

	}
}

