#include <stdlib.h>
#include <stdio.h>

typedef struct node{
	int value;
	struct node* next;
}node;

node* push(node* ptr, int value)
{
	node* x = malloc(sizeof(node));
	x->next = ptr;
	x->value = value;
	ptr = x;

	return ptr;
}

node* pop(node* ptr)
{
	node* tmp = ptr;
	ptr = ptr->next;

	free(tmp);
	return ptr;
}

void show(node* ptr)
{
	for(node* i = ptr; i != NULL; i = i->next)
	{
		printf("stack: %i \n", i->value);
	}
}

int main() {
	node *stack = NULL;

	stack = push(stack, 12);
	stack = push(stack, 2);

	show(stack);
	
	node* ptr = stack;
	while(ptr != NULL)
	{
		node* tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
}
