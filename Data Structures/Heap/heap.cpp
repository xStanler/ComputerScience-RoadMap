#include <cstdlib>
#include <iostream>

//MAX HEAP

typedef struct Node{
	int value;
	struct Node* right;
	struct Node* left;
}Node;

void insert(Node** ptr, int number)
{
	Node* x = (Node*) malloc(sizeof(Node));

	if(*ptr == NULL)
	{
		x->value = number;
		x->right = NULL;
		x->left = NULL;
		*ptr = x;
	}

}

void fix();

void show(Node* ptr)
{
	std::cout<<ptr->value;

	show(ptr->left);
	show(ptr->right);
}

void find_max();

Node* find();

void freeHeap(Node* ptr)
{
	if(ptr->left != NULL)
	{
		freeHeap(ptr->left);
	}else if(ptr->right != NULL)
	{
		freeHeap(ptr->right);
	}

	free(ptr);
}

int main() {
	Node* heap = NULL;
	
	insert(&heap, 6);

	show(heap);

	free(heap);
}
