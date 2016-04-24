/*
 * treeHeight.cpp
 *
 *  Created on: Apr 23, 2016
 *      Author: Abhishek
 */



#include "TreeProperties.h"
#include "iostream"

int height(node *root)
{
	if (NULL == root)
		return 0;

	int lHeight = height (root->left);
	int rHeight = height (root->right);

	return 1 + max(lHeight, rHeight);

}


