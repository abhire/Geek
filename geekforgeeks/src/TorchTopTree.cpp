/*
 * TorchrightofTree.cpp
 *
 *  Created on: 26-Apr-2016
 *      Author: abhishek.chandel
 */


#include <iostream>
#include "TreeProperties.h"
#include <queue>
#include <map>
#include <set>
using namespace std;

struct NodeInfo
{
	node *root;
	int dist;
	int level;

	NodeInfo(node * ptr, int distance, int lev)
	{
		root = ptr;
		dist = distance;
		level = lev;

	}
	NodeInfo()
		{
			root = NULL;
			dist = 0;
			level = 0;

		}
};


void torchUpTree(node *root)
{
	if (NULL == root)
		return ;


	std::map <int , NodeInfo> m;
	std::map <int, std::pair <NodeInfo, NodeInfo> > m2;

	queue <NodeInfo> q;

	NodeInfo x (root, 0, 0);

	q.push (x);

	while (!q.empty())
	{
				int size = q.size();

				while (size)
				{
					NodeInfo tmp = q.front();

					cout << tmp.root->data << " ";
					cout << "dist : "  << tmp.dist  << " ";
					if ( m.find(tmp.dist) != m.end() ) {

						NodeInfo y = m[tmp.dist];

						if (tmp.level < y.level)
							m[tmp.dist] = tmp;

					} else {
						m[tmp.dist] = tmp;
					}

					if (m2.find (tmp.level) != m2.end())
					{
						std::pair <NodeInfo, NodeInfo> z = m2[tmp.level];
						if (tmp.dist < z.first.dist)
						{
							std::pair <NodeInfo, NodeInfo> x (tmp, z.second);
							m2[tmp.level] =  x;
						}
						if (tmp.dist > z.second.dist)
						{
							std::pair <NodeInfo, NodeInfo> x (z.first, tmp);
							m2[tmp.level] =  x;
						}

					} else {
						std::pair <NodeInfo, NodeInfo> x (tmp, tmp);
						m2[tmp.level] = x;

					}


					q.pop();

					if (tmp.root->right) {

						NodeInfo x (tmp.root->right, tmp.dist + 1, tmp.level+1);
						q.push(x);
					}

					if (tmp.root->left)
					{
						NodeInfo x (tmp.root->left, tmp.dist - 1, tmp.level+1 );
						q.push(x);
					}

					size --;
				}
				cout << endl;

		}


	 cout << endl << " tree top view is " << endl;
	map <int, NodeInfo> ::iterator it = m.begin();
	while (it != m.end())
	{
		cout << " " << it->second.root->data;
		cout << endl;
		it++;
	}

	 cout << endl << " tree boundary is " << endl;
	 std::set <int > setBoundary;

	 map <int, std::pair <NodeInfo, NodeInfo> >::iterator it2 = m2.begin();

		while (it2 != m2.end())
		{
			setBoundary.insert(it2->second.first.root->data);
			setBoundary.insert(it2->second.second.root->data);


			cout << endl;
			it2++;
		}

	std::set<int >::iterator it3 = setBoundary.begin();
	while (it3 != setBoundary.end())
			{
				cout << *it3;

				cout << endl;
				it3++;
			}



}


