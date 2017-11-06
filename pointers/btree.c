/* Implementing the binary tree in C
 * #iwillalwaysbeabeginner
 */

#include<stdio.h>
#include<stdlib.h>

typedef int(*COMPARE)(void*, void*);
typedef struct _tree
{
	struct _tree *right;
	struct _tree *left;
	void *data;
}Tree;

int main()
{
	void addBranch(Tree **tree, COMPARE compare, void *data);
}

/* In a simple Binary Tree a node has two children
 * namely left and right. root is a double pointer
 * beacuse it points to branch which eventually
 * points to data. This type of usage is often called
 * MULTIPLE LEVELS OF INDIRECTION , also root here
 * is the local root */

void addBranch(Tree **root, COMPARE compare, void *data)
{
	/* initialising a new branch */

	Tree *branch = (Tree*)malloc(sizeof(Tree)); // assign memory to new branch
	branch->data = data;
	branch->right = branch->left = NULL;        // since the new branch will be empty

	/* adding a new branch */

	if (*root == NULL)                          // if the tree is empty
	{
		*root = branch;
		return;
	}

	while (1)
	{
		if (compare((*root)->data, data) > 0)
		{
			if ((*root)->left != NULL)
				*root = (*root)->left;
			else
			{
				(*root)->left = branch;
				break;
			}
		}
		else
		{
			if ((*root)->right != NULL)
				*root = (*root)->right;
			else
			{
				(*root)->right = branch;
				break;
			}
		}
	}
}


