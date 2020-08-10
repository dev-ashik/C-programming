#include<stdio.h>

int main() {
	const char* color_names[] = {
		"red",
		"green",
		"blue"
	};

	const char** cp = &color_names[0];
	int i = 0;

	while (i < 3) {
		printf("color is %s\n", *cp);
		cp++;
		i++;
	}

	return 0;
}
