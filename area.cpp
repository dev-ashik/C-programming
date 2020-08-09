#include<stdio.h>

int main(){
	int length, width, rectangle_area;

	length = 10;
	width = 6;
	rectangle_area = length * width;
	printf("rectangle_area = %d\n", rectangle_area);

	int r = 7;
	int circle_area = 3.1416 * r * r;
	printf("circle_area = %d\n", circle_area);

	return 0;
}