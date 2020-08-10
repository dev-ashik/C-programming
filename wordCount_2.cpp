#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 Count the words number in words
 */
int main()
{
	const char* words = "Buffer overflows are categorized according "
		"to the location of the buffer in the process memory, "
		"the two main types being stack - based overflow and heap - based overflow.";
	int number = 0;
	int index = 0;
	const int length = strlen(words);
	bool isword = false;
	bool isnonword = false;

	while (words[index] != '\0')
	{
		if (isalnum(words[index]))
		{
			isword = true;
			isnonword = false;
		}
		else
		{
			if (!isnonword)
			{
				isnonword = true;
				isword = false;
				number++;
			}
		}

		index++;
	}

	printf("There are %d words.\n", number);

	return 0;
}
