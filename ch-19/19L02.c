#include <stdio.h>

int main(int argc, char *argv[]){
	struct employee {
		int id;
		char name[32];
	};
/* structure initialization */
	struct employee info = {
		1,
		"B.Smith"
	};
	printf("Here is a sample:\n");
	printf("Employee Name: %s\n", info.name);
	printf("Employee ID #: %04d\n\n", info.id);

	printf("What's your name?\n");
		gets(info.name);
	printf("What's your ID?\n");
		scanf("%d", &info.id);

	printf("\nHere are what you entered\n");
	printf("Employee Name: %s\n", info.name);
	printf("Employee ID #%d\n", info.id);

	return (0);
}
