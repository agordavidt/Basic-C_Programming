#include <stdio.h>
/* main() - values represented by enum names
*/

int main(){
	enum tag { name1,
			name2 = 10,
			name3,
			name4 };

	printf("name1 : %d\n", name1);
	printf("name2 : %d\n", name2);
	printf("name3 : %d\n", name3);
	printf("name4 : %d\n", name4);

	return (0);
}
