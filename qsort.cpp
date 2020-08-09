#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b);

int main()
{
	int values[] = { 40, 10, 100, 90, 20, 25 };

	int n = sizeof(values) / sizeof(int);

	qsort(values, n, sizeof(int), compare);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", values[i]);
	}
	printf("\n");

	return 0;
}


int compare(const void* a, const void* b)
{

	const int* p1 = (const int*)a;
	const int* p2 = (const int*)b;

	//return *p1 - *p2;   // ascending
	return *p2 - *p1;
}

