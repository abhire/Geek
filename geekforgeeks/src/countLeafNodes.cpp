/*
 * countLeafNodes.cpp
 *
 *  Created on: Apr 23, 2016
 *      Author: Abhishek
 */




#include <iostream>
#include "TreeProperties.h"
using namespace std;


int countLeafNodes(node *root)
{
	if (root == NULL)
		return 0;

	if (root->left == NULL && root->right == NULL)
		return 1;
	else {

		return (countLeafNodes(root->right) + countLeafNodes(root->left));
	}
}
