/*
 * printSpiral.cpp
 *
 *  Created on: Apr 24, 2016
 *      Author: Abhishek
 */


#include <iostream>
#include "TreeProperties.h"
#include <stack>

using namespace std;

void printSpiral(node *root, int level, bool flag)
{
	if (NULL == root)
		return;

	if (1 == level) {
		cout << root->data;
	} else if (level > 1) {
		if (flag)
		{
			printSpiral(root->left,level -1 , flag);
			printSpiral(root->right,level -1 , flag);
		} else {
			printSpiral(root->right,level -1 , flag);
			printSpiral(root->left,level -1 , flag);
		}
	}
}

void printSpiralStack(node *root)
{
	if (NULL == root)
		return;

	std::stack<node *> s1;
	std::stack<node *> s2;

	s1.push(root);

	while (!s1.empty()  || !s2.empty())
	{
		while (!s1.empty() )
		{
			int i = s1.size();
			while (i)
			{
				node *tmp = s1.top();

				cout << tmp->data;
				s1.pop();

				if (tmp->right)
					s2.push(tmp->right);

				if (tmp->left)
					s2.push(tmp->left);

				i--;
			}
			cout << endl;
		}

		while (!s2.empty() )
		{
			int j = s2.size();
			while (j)
			{
				node *tmp = s2.top();

				cout << tmp->data;
				s2.pop();

				if (tmp->left)
					s1.push(tmp->left);

				if (tmp->right)
					s1.push(tmp->right);

				j--;
			}
			cout <<endl;
		}
	}

}
