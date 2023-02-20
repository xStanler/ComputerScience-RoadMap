#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	char *text;
	struct Node *next;
}Node;

Node *push_back(Node *ptr, char* text)
{

	Node *x = malloc(sizeof(Node));
	if(ptr == NULL)
	{
		ptr = x;
	}
	else{
		Node *tmp = ptr;

		while(tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = x;
	}
	x->next = NULL;
	x->text = text;

	return ptr;
}

Node *push_front(Node *ptr, char* text)
{
	Node *x = malloc(sizeof(Node));
	x->next = ptr;
	x->text = text;
	ptr = x;
	
	return ptr;
}


int main(void) {
	Node *list = NULL;
	
	list = push_back(list, "Awesome");
	list = push_back(list, "Man!");
	list = push_front(list, "Look!");
	list = push_front(list, "Stanler!");

	for(Node *i = list; i != NULL; i = i->next)
	{
		printf("%s \n", i->text);
	}

	Node *ptr = list;
	while(ptr != NULL)
	{
		Node *tmp = ptr->next;
		free(ptr);
		ptr = tmp;

	}
}
