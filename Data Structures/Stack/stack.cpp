#include <iostream>
#include <cstdlib>

typedef struct node{
	int value;
	struct node* next;
}node;

void push(node **ptr, int value)
{
	node* x = (node*) malloc(sizeof(node));
	x->next = *ptr;
	x->value = value;
	*ptr = x;
}

void pop(node** ptr)
{
	node* tmp = *ptr;
	*ptr = tmp->next;

	free(tmp);
}

node* top(node* ptr)
{
	return ptr;
}

void show(node* ptr)
{
	for(node* i = ptr; i != NULL; i = i->next)
	{
		std::cout<<"Stack: "<<i->value<<std::endl;
	}
}

int main() {
	node *stack = NULL;

	push(&stack, 12);
	push(&stack, 2);

	show(stack);
	
	push(&stack, 14);

	std::cout<<"\n";
	show(stack);

	pop(&stack);

	std::cout<<"\n";
	show(stack);
	
	node* ptr = stack;
	while(ptr != NULL)
	{
		node* tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
}
