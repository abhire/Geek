/*
 * sizeTree.cpp
 *
 *  Created on: Apr 23, 2016
 *      Author: Abhishek
 */


#include <iostream>
#include "TreeProperties.h"

using namespace std;


int sizeOfTree (node *root)
{
	if (NULL == root)
		return 0;


	return (sizeOfTree(root->left) + 1 + sizeOfTree(root->right));

}

