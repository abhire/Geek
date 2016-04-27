/*
 * printLevelsNode.cpp
 *
 *  Created on: 27-Apr-2016
 *      Author: abhishek.chandel
 */

#include <iostream>
#include "TreeProperties.h"

using namespace std;

void levelNode(node *root, int level, int data)
{
	if (NULL == root)
	{
		return;
	}

	level ++;

	if (root->data == data)
	{
		cout << level;
		return;
	} else {
		levelNode(root->left, level, data);
		levelNode(root->right, level, data);

	}


}


