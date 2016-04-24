/*
 * mirror.cpp
 *
 *  Created on: Apr 23, 2016
 *      Author: Abhishek
 */



#include <iostream>
#include "TreeProperties.h"
using namespace std;

void mirror(node *root)
{
	if (NULL == root)
			return;
	node *temp;

	mirror (root->left);
	mirror (root->right);

	temp = root->left;
	root->left = root->right;
	root->right = temp;


}
