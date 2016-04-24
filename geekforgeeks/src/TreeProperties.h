/*
 * TreeProperties.h
 *
 *  Created on: Apr 23, 2016
 *      Author: Abhishek
 */

#ifndef TREEPROPERTIES_H_
#define TREEPROPERTIES_H_

#include <iostream>

struct node
{
	int data;
	struct node *left;
	struct node *right;
	int level;
};

int max (int a , int b); //defined in treetraversal.cpp
struct node * createnode(int x);
int height(node *root);
int diameter(node *root);
void inOrderTraversal(node *root);
void postOrderTraversal(node *root);
void preOrderTraversal(node *root);
void printLevels(node *root, int x);
void printLevelsQueue(node *root);
void morrisInorderTraversal(node *root);
int sizeOfTree (node *root);
int identicalTrees(node *root1, node *root2);
void deleteTree (node **root);
void mirror(node *root);
void printPaths(node *root, int array[], int length);
int countLeafNodes(node *root);
void printSpiral(node *root, int level, bool flag);
void printSpiralStack(node *root);
int childrenSumProperty(node *root);
void inorderTraversalTest(node *root);
void convertTree(node *root);



#endif /* TREEPROPERTIES_H_ */
