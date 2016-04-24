/*
 * heightBalanced.cpp
 *
 *  Created on: Apr 24, 2016
 *      Author: Abhishek
 */


#include <iostream>
#include "TreeProperties.h"
using namespace std;

int heightBalanced(node *root)
{
	int lheight = 0;
	int rheight = 0;

	if (root == NULL)
		return 1;

	if (root->left)
		lheight = height(root->left);


	if (root->right)
		rheight = height(root->right);

	int diff = 0;
	if (lheight > rheight)
		diff = lheight -rheight;
	else
		diff = rheight -lheight;

	if (diff <= 1 &&  heightBalanced (root->left) && heightBalanced (root->right))
		return 1;
	else
		return 0;

}
