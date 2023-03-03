#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int value;
	struct Node* left;
	struct Node* right;
	struct Node* parent;
}Node;

void insert(Node** root, int value)
{
	Node* x = (Node*)malloc(sizeof(Node));

	if(*root == NULL)
	{
		*root = x;
	}else{

	}


	x->left = NULL;
	x->right = NULL;
	x->value = value;
}

void show(Node* ptr)
{
	if(ptr == NULL) return;

	show(ptr->left);
	printf("%d\n", ptr->value);
	show(ptr->right);
}

int main(void)
{
	Node* root = NULL;
	insert(&root, 5);
	insert(&root, 6);
	insert(&root, 3);

	show(root);
}
