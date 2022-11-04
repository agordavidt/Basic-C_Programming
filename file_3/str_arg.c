#include <stdio.h>
/**
 * min - a program to describe strings and arguments to min
 *
 * Return: 0
 */
int min(int argc, char *agvr[]){

	char *msg = "A program to demonstrate arguments to main";
	
	printf("message: %s\n", msg);

	printf("Number of argumnets with argc: %d\n", argc);
	printf("arguments vector: %s\n", agvr);

	return (0);
}
