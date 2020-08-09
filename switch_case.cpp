#include<stdio.h>

enum day{sunday, monday, tuesday, wednesday, thursday, friday, saturday};

int main() {

	enum day myday = tuesday;

	switch (myday) {
	case sunday:
		printf("Sunday\n");
		break;
	case monday:
		printf("Monday\n");
		break;
	case tuesday:
		printf("Tuesday\n");
		break;
	case wednesday:
		printf("Wednesday\n");
		break;
	case thursday:
		printf("Thursday\n");
		break;
	case friday:
		printf("Friday\n");
		break;
	case saturday:
		printf("Saturday\n");
		break;
	default:
		printf("Default\n");
	}

	return 0;
}