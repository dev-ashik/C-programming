#include<stdio.h>

//prototype diclaration
int maxi(int x, int y);
int mini(int x, int y);

int main() {
	int a = 10, b = 40;

	int max = maxi(a, b);
	printf("Maximum = %d\n", max);

	int min = mini(a, b);
	printf("Mnimum = %d\n", min);
	return 0;
}

int maxi(int x, int y) {

	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}


int mini(int x, int y) {

	if (x < y) {
		return x;
	}
	else {
		return y;
	}
}