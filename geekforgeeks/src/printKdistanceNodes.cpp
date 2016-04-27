/*
 * printKdistanceNodes.cpp
 *
 *  Created on: 25-Apr-2016
 *      Author: abhishek.chandel
 */




#include "TreeProperties.h"
#include "iostream"

using namespace std;


void printKdistanceNodes (node *root, int dist)
{
	if (NULL == root)
		return;

	if (1 == dist)
	{
		cout << root->data << " ";
	}
	printKdistanceNodes (root->left, dist -1 );

	printKdistanceNodes (root->right, dist -1 );

}
