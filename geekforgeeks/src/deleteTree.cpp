/*
 * deleteTree.cpp
 *
 *  Created on: Apr 23, 2016
 *      Author: Abhishek
 */

#include <iostream>
#include "TreeProperties.h"
using namespace std;

void _deleteTree (node *root)
{
	if (NULL == root)
		return;

	_deleteTree(root->left);
	_deleteTree(root->right);

	cout << "delete the node with data " << root->data <<endl;

	delete (root);
	root = NULL;

}

void deleteTree (node **root)
{
	_deleteTree (*root);
	*root = NULL;

	cout << "root set to NULL " << endl;

}

