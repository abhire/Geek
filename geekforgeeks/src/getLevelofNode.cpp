/*
 * getLevelofNode.cpp
 *
 *  Created on: 25-Apr-2016
 *      Author: abhishek.chandel
 */




#include "TreeProperties.h"
#include "iostream"

using namespace std;


int _getLevelofNode(node *root , int data, int level)
{
	if (root == NULL)
		return 0;

	if (root->data == data)
		return level;

	 int dep = _getLevelofNode(root->left, data, level+1);
	 if (!dep)
		 return dep;

	 dep = _getLevelofNode(root->right, data, level + 1 );
	 return dep;
}


int getLevelofNode (node *root, int data)
{
	return _getLevelofNode(root , data, 1);
}
