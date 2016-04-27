/*
 * MaxWidth.cpp
 *
 *  Created on: 25-Apr-2016
 *      Author: abhishek.chandel
 */



#include <iostream>
#include "TreeProperties.h"
#include <queue>


int maxWidth(node *root)
{
	int max_width = 0;
	if (NULL == root)
		return max_width;


	std::queue<node *> q;
	q.push(root);

	while (!q.empty())
	{


		int size = q.size();


		while (size)
		{
			if (size > max_width)
				max_width = size;

			node *tmp = q.front();
			q.pop();

			if (tmp->left)
				q.push(tmp->left);


			if (tmp->right)
				q.push(tmp->right);

			size --;
		}

	}

	return max_width;

}



