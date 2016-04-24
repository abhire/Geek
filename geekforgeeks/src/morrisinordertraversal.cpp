/*
 * morrisinordertraversal.cpp
 *
 *  Created on: Apr 23, 2016
 *      Author: Abhishek
 */

#include <iostream>
#include "TreeProperties.h"
using namespace std;

//without stack and without recursion
void morrisInorderTraversal(node *root)
{
	node *current = root;
	while (NULL != current)
	{
		if (NULL == current->left)
		{
			cout << current->data;
			current = current -> right;
		} else {
			node *prev = current->left;

			while ((prev->right != NULL) && (prev->right != current))
				prev = prev->right;

			if (prev->right == NULL) {

				prev->right = current;

				current = current->left;
			} else {
				prev->right = NULL;
				cout << current->data;
				current = current->right;

			}
		}

	}



}


