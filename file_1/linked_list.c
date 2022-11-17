#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodePtr;

//struct defn and typdef below are
//broken into two parts for clarity of explaining
//in our code we would usually combine the two integers
struct node {
	int data;
	nodePtr next;
};

typedef struct node node;

int main(int argc, const char *argv[]) {


	first->next = malloc (sizeof (node));
	first->next->next = NULL;
	first->next->data = 62;

	
	printf("Hello, World!\n");
	return 0;
}
