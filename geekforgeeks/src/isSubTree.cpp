/*
 * isSubTree.cpp
 *
 *  Created on: 28-Apr-2016
 *      Author: abhishek.chandel
 */

#include "TreeProperties.h"
#include "iostream"

using namespace std;

int isIdentical (node *root1, node * root2)
{
	if (NULL == root1 && NULL == root2)
		return 1;

	if ((NULL != root1) && (NULL != root2))
	{
		if ((root1->data == root2->data) &&
				isIdentical(root1->left, root2->left) &&
				isIdentical(root1->left, root2->left) )
			return 1;
	}

	return 1;

}

//d is the tree, s is the subtree
int isSubtree (node *d, node* s)
{
	if (s == NULL)
		return 1;

	if (d == NULL)
		return 0;

	if (isIdentical (d, s))
		return 1;

	if (isSubtree (d->left, s) || isSubtree (d->right, s))
		return 1;

	return 0;
}
