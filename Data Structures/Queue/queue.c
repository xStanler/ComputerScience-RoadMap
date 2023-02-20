#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	float value;
	struct node* next;
}node;

void push(node** ptr, float value)
{
	node* x = (node*) malloc(sizeof(node));

	if(*ptr == NULL)
	{
		*ptr = x;
	}else{
		node* tmp = *ptr;

		while(tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = x;
	}

	x->value = value;
	x->next = NULL;

}

void pop(node** ptr)
{
	node* tmp = *ptr;

	*ptr = tmp->next;

	free(tmp);
}

node* first(node* ptr)
{
	return ptr;
}

node* last(node *ptr)
{
	node* tmp = ptr;

	while(tmp == NULL)
	{
		tmp = tmp->next;
	}

	return tmp;
}

void show(node* ptr)
{
	for(node* i = ptr; i != NULL; i = i->next)
	{
		printf("%f \n", i->value);
	}
}

int main(void) {
	node* queue = NULL;

	push(&queue, 2.54f);
	push(&queue, 4.3f);
	push(&queue, 3.14f);
	
	show(queue);
	printf("\n");

	pop(&queue);


	show(queue);

	printf("%f \n", (first(queue))->value);

	printf("%f \n", (last(queue))->value);

	node* ptr = queue;
	while(ptr != NULL)
	{
		node *tmp = ptr->next;

		free(ptr);

		ptr = tmp;
	}
}
