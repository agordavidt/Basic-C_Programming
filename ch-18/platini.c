#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	printf("The value received by argc is %d\n", argc);
	printf("There are %d command-line arguments passed to main().\n", argc);
	if (argc) {
		printf("The first commnad-line argument is %s\n", argv[0]);
		printf("All the command-line arguments are:\n");
		for (i=0; i<argc; i++)
			printf("%s\n", argv[i]);
		printf("The number of command-line arguments is %d\n", argc);
	}

	return (0);
}
