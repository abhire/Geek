/*
 * printLevels.cpp
 *
 *  Created on: Apr 23, 2016
 *      Author: Abhishek
 */

//levels of tree are the height positions. we can do this by BFS(queue) or using STACK(recursion)
#include <iostream>
#include "TreeProperties.h"
#include "abhiQueue.h"
#include <queue>
using namespace std;

void printLevels(node *root, int x)
{
	if (NULL == root || x < 1)
		return;

	if(1 == x) {
		cout << root->data;
		return;
	}

	printLevels(root->left, x-1);
	printLevels(root->right, x-1);
}

//this is BFS traversal as well
void printLevelsQueue(node *root)
{
	if (NULL == root)
		return;

	abhiQueue<node *> q;

	q.enQueue(root);



	while (!q.isEmpty())
	{
		node *ptr ;

		int qsize = q.size();
		while (qsize != 0)

		{

			q.deQueue(ptr);





			cout << ptr->data;


			if (ptr->left)
				q.enQueue(ptr->left);

			if (ptr->right)
				q.enQueue(ptr->right);

			qsize--;
		}
		cout << endl;
	}

}

//this is BFS traversal as well //it is not working
void printLevelsQueueNULL(node *root)
{
	if (NULL == root)
		return;

	std::queue<node *> q;

	q.push(root);
	q.push(NULL);



	while (!q.empty())
	{
		node *ptr ;
		ptr = q.front();
		q.pop();

		if (ptr == NULL) {
			q.push(NULL);
			cout << endl;
		} else {

			cout << ptr->data;

			if (ptr->left)
				q.push(ptr->left);

			if (ptr->right)
				q.push(ptr->right);

		}

	}

}
