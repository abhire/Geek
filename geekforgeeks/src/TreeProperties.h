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
int heightBalanced(node *root);
void printPathLeafPathSum(node *root, int array[], int len, int sum);
void doubleTree (node *root);
int maxWidth(node *root);
void printKdistanceNodes (node *root, int dist);
int getLevelofNode(node *root , int data);
void printLevelsQueueNULL(node *root);
void torchUpTree(node *root);
void PrintAncestors (node *root, int array[], int len, int data);
void levelNode(node *root, int level, int data);

#endif /* TREEPROPERTIES_H_ */
