/*
 * foldable.cpp
 *
 *  Created on: 27-Apr-2016
 *      Author: abhishek.chandel
 */



#include <iostream>
#include "TreeProperties.h"
using namespace std;


int isSameStructure (node * root1, node *root2)
{
	if (root1 == NULL && root2 == NULL)
		return 1;

	if (root1 != NULL && root2 != NULL)
	{
		if (isSameStructure(root1->left, root2->left) && isSameStructure(root1->right, root2->right))
		{
			return 1;
		}

	}

	return 0;

}


int isFoldable (node *root)
{
	if (NULL == root)
		return 1;

	mirror (root->left);

	int res = isSameStructure(root->left , root->right);

	mirror (root->left);

	return res;

}
