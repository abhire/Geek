/*
 * treeTraversal.cpp
 *
 *  Created on: Apr 23, 2016
 *      Author: Abhishek
 */

#include <iostream>
using namespace std;

#include "TreeProperties.h"

int max (int a , int b)
{
	return (a>=b ? a: b);
}
void inOrderTraversal(node *root)
{
	if (NULL == root)
		return;

	inOrderTraversal(root->left);
	cout << root->data;
	inOrderTraversal(root->right);
}

void postOrderTraversal(node *root)
{
	if (NULL == root)
		return;

	inOrderTraversal(root->left);

	inOrderTraversal(root->right);

	cout << root->data;
}

void preOrderTraversal(node *root)
{
	if (NULL == root)
		return;

	cout << root->data;

	inOrderTraversal(root->left);

	inOrderTraversal(root->right);
}


