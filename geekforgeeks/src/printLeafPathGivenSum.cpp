/*
 * printLeafPathGivenSum.cpp
 *
 *  Created on: Apr 24, 2016
 *      Author: Abhishek
 */



#include <iostream>
#include "TreeProperties.h"
using namespace std;

void printArraywithSum(int array[], int len, int sum)
{
	int _sum = 0;
	for (int i = 0 ; i < len; i++)
	{
		_sum += array[i];
	}

	if (_sum == sum)
	{
		for (int i = 0 ; i < len; i++)
		{
			cout << array[i];
		}
	}


}

void printPathLeafPathSum(node *root, int array[], int len, int sum)
{
	if (NULL == root)
		return;

	array[len] = root->data;
	len++;

	if (root->left == NULL && root->right == NULL)
		printArraywithSum(array, len, sum);

	if (NULL != root->left)
		printPathLeafPathSum(root->left, array, len, sum);

	if (NULL != root->right)
		printPathLeafPathSum(root->right, array, len, sum);


}
