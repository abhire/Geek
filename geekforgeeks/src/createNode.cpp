/*
 * createNode.cpp
 *
 *  Created on: Apr 23, 2016
 *      Author: Abhishek
 */


#include <iostream>
#include "TreeProperties.h"

struct node * createnode(int x)
{
	struct node *ptr = new node;
	ptr->data = x;
	ptr->left = NULL;
	ptr->right = NULL;
	ptr->level = 0;

	return ptr;

}
