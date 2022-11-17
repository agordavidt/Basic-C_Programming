#include <stdio.h>

int main()
{
	int a = 2;
	int *p = &a;
	//pointer arithmetic
	printf("Address p is %d\n", p); //variable address
	printf("Size of double is &d bytes\n", sizeof(int));
	printf("Address of p+1 is %d\n", p+2);

	return 0;
}
