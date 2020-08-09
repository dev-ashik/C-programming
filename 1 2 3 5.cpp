#include<stdio.h>

int main() {

	// 1 3 5.......19 = ?
	for (int i = 1; i < 20; i+=2)   // here I can't use i+2
	{
		printf("%d\n", i);
	}

	return 0;
}