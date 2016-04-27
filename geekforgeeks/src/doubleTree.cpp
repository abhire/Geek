/*
 * doubleTree.cpp
 *
 *  Created on: 25-Apr-2016
 *      Author: abhishek.chandel
 */




#include <iostream>
#include "TreeProperties.h"

using namespace std;


void doubleTree (node *root)
{
	if (NULL == root)
		return;

	doubleTree(root->left);
	doubleTree(root->right);

	node *oldLeft = root->left;
	root->left = createnode(root->data);
	root->left->left = oldLeft;

}
