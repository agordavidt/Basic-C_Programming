#include <stdio.h>

/* typedef - create name for data types and use in place of the data types.
*/

int main(){
	typedef int dave;
	dave i;
	i = 100;
	printf("The last number is %d\n", i);
	return (0);
}
