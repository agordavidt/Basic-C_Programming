#include <stdio.h>

int main (int argc, char *argv[]){

	struct automobile {
		int year;
		char model[8];
		int engine_power;
		float weight;
		} volvo, jeep, honda;

	volvo.year = 2008;
	volvo.model[8] = 'beast';
	printf("The model of the car is %s\n", volvo.model);
	printf("the year of manufacture is %d\n", volvo.year);
	return (0);
}
