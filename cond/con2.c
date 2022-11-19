#include <stdio.h>

int main(int argc, char *argv[]){
	int n = 3;

	for (int i; i < 13; i++) {
		printf("%d  X   %d  =   %d\n", i,n,n*i);
	}

	return (0);
}
