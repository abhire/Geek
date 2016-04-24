/*
 * convertTreeChildrenSum.cpp
 *
 *  Created on: Apr 24, 2016
 *      Author: Abhishek
 */

#include <iostream>
#include "TreeProperties.h"


using namespace std;

void increment (node *root, int diff)
{
	if (NULL == root)
		return;

	if (NULL != root->left) {

		root->left += diff;
		increment (root->left, diff);
	} else if (NULL != root->right) {
		root->right += diff;
		increment (root->right, diff);
	}

}


void convertTree(node *root)
{
	int left_val = 0;
	int right_val = 0;

	if (NULL == root || (NULL == root->left && NULL == root->right))
		return;

	convertTree(root->left);
	convertTree(root->right);

	if (NULL != root->left)
		left_val = root->left->data;

	if (NULL != root->right)
		right_val = root->right->data;

	int diff = left_val + right_val - root->data;

	if (diff > 0)
	{
		root->data += diff;
	} else {

		increment (root, -diff);
	}
}

