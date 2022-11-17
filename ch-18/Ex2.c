#include <stdio.h>

/* main() - typedef declaration and sizes of data types
*/

int main()
{
	typedef char WORD;
	typedef int SHORT;
	typedef long LONG;
	typedef float FLOAT;
	typedef double DFLOAT;


	printf("Size of WORD is %d byte(s)\n", sizeof(WORD));
	printf("Size of SHORT is %d byte(s)\n", sizeof(SHORT));
	printf("Size of LONG is %d byte(s)\n", sizeof(LONG));
	printf("Size of FLOAT is %d byte(s)\n", sizeof(FLOAT));
	printf("Size of DFLOAT is %d byte(s)\n", sizeof(DFLOAT));

	return (0);
}
