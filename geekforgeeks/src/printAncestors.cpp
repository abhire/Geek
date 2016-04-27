/*
 * printAncestors.cpp
 *
 *  Created on: 27-Apr-2016
 *      Author: abhishek.chandel
 */

#include <iostream>
#include "TreeProperties.h"

using namespace std;


void  _printArray(int array[], int len)
{
	for (int i = 0; i < len ; i++)
	{
		cout << array [i] << " ";
	}

}
void PrintAncestors (node *root, int array[], int len, int data)
{
	if (NULL == root)
		return;

		array[len] = root->data;
		len = len + 1;

	if (root->data == data) {
		_printArray(array, len -1);

	} else {

		PrintAncestors (root->left, array, len, data);
		PrintAncestors (root->right, array, len, data);
	}

}


