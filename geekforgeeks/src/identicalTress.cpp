/*
 * identicalTress.cpp
 *
 *  Created on: Apr 23, 2016
 *      Author: Abhishek
 */

#include <iostream>
#include "TreeProperties.h"

using namespace std;


int identicalTrees(node *root1, node *root2)
{
	if (NULL == root1 && NULL == root2)
		return 1;

	if (NULL != root1 && NULL != root2)

	{
		return ( root1->data == root2->data &&
				identicalTrees(root1->left , root2->left)
				&& identicalTrees(root1->right, root2->right)) ;
	}

	return 0;


}

