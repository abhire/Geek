


#include <iostream>
#include "TreeProperties.h"
#include <stack>

using namespace std;


int childrenSumProperty(node *root)
{
	int Lsum = 0;
	int Rsum = 0;

	if (NULL == root || (root->left == NULL && root->right == NULL))
	{
		return 1;
	}

	if (root->left)
		Lsum = root->left->data;

	if (root->right)
		Rsum = root->right->data;

	if ((root->data == Lsum + Rsum) && childrenSumProperty(root->left) && childrenSumProperty(root->right))
		return 1;
	else
		return 0;
}

//Test : use the morris algo (threaded ) to print the tree in inorder

void inorderTraversalTest(node *root)
{
	if (NULL == root)
		return;
	node *prev;
	node *current = root;

	while (NULL != current)
	{
		if (current->left == NULL)
		{
			cout << current->data;
			current = current ->right;
		} else {
			prev = current->left;
			while(prev->right != NULL && prev->right != current)
			{
				prev = prev->right;
			}

			if (prev->right == NULL)
			{
				prev->right = current;
				current = current->left;
			} else {
				cout << current->data;
				prev->right = NULL;
				current = current->right;
			}
		}
	}
}



