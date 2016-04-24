/*
 * printPaths.cpp
 *
 *  Created on: Apr 23, 2016
 *      Author: Abhishek
 */


#include <iostream>
#include "TreeProperties.h"

using namespace std;

int array[1000];

void printArray(int array[], int len)
{

	for (int i = 0; i < len; i++)
	{
		cout << array[i];
	}

	cout <<endl;
}
void printPaths(node *root, int array[], int length)
{
	if (NULL == root)
		return;

	array[length] = root->data;
	length ++;

	if ( (NULL == root->left) && (NULL == root->right))
	{
		printArray(array, length);

	} else {
		printPaths(root->left, array, length);
		printPaths(root->right, array, length);

	}
}

