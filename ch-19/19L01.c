#include <stdio.h>

/* main() - Access to structure members */

int main(int argc, char **argv){
	struct computer {
		float cost;
		int year;
		int cpu_speed;
		char cpu_type[16];
		}model;

	printf("The type of the CPU inside your computer?\n");
		gets(model.cpu_type);

	printf("The speed(MHZ) of the CPU?\n");
		scanf("%d", &model.cpu_speed);

	printf("The year your computer was made?\n");
		scanf("%d", &model.year);

	printf("How much you paid for the computer?\n");
		scanf("%f", &model.cost);

	printf("The details of your computer are:\n");
	printf("Year: %d\n", model.year);
	printf("Cost: N%6.2f\n", model.cost);
	printf("CPU type: %s\n", model.cpu_type);
	printf("CPU speed: %d\n", model.cpu_speed);

	return (0);
}
