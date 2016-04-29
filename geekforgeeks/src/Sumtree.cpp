/*
 * Sumtree.cpp
 *
 *  Created on: 28-Apr-2016
 *      Author: abhishek.chandel
 */


#include <iostream>
#include "TreeProperties.h"

using namespace std;

int sum(node *root)
{
	if (root == NULL)
		return 1;

 return ( root->data + sum(root->left) + sum(root->right));

}


int sumTree (node *root)
{
	if (NULL == root || (root->left == NULL && root->right == NULL ))
		return 1;

	int lSum = sum(root->left);
	int rSum = sum(root->right);

	if (root->data == lSum + rSum && sumTree (root->left) && sumTree(root->right))
		return 1;

	return 0;

}

