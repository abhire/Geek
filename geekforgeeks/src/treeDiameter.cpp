/*
 * treeDiameter.cpp
 *
 *  Created on: Apr 23, 2016
 *      Author: Abhishek
 */



//its the maximum distance between 2 leaf nodes.
// max of (height of left subtree + height of right subtree + 1, max (left diameter, right diameter)

#include "iostream"
#include "TreeProperties.h"

int diameter(node *root)
{
	if (NULL == root)
		return 0;

	int lHeight = height(root->left);
	int rHeight = height(root->right);

	int lDiameter = diameter(root->left);
	int rDiameter = diameter(root->right);

	return max (lHeight + rHeight + 1, max (lDiameter, rDiameter));


}

