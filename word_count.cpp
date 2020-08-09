#include<stdio.h>
#include<string.h>


int countWords(const char* pStr) {
	int numWords = 0;
	int len = 0;

	if (pStr == NULL)
		return 0;

	while (*pStr) {
		if (*pStr == ' ')
			len = 0;
		else if (++len == 1)
			numWords++;


		pStr++;
	}

	return numWords;
}

int main() {

	char str[] = "Buffer overflows are categorized according to the location of the buffer in the process memory, the two main types being stack-based overflow and heap-based overflow.";

	int words = countWords(str);
	printf("Words = %d\n", words);


	return 0;
}
