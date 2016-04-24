//============================================================================
// Name        : geekforgeeks.cpp
// Author      : @abhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "TreeProperties.h"
using namespace std;


int main() {

	//create tree
	struct node *root= createnode(1);
	root->left = createnode(2);
	root->left->left = createnode(3);
	root->left->right = createnode(4);
	root->right = createnode(5);
	root->right->left = createnode(6);


	struct node *root2= createnode(1);
	root2->left = createnode(2);
	root2->left->left = createnode(3);
	root2->left->right = createnode(4);
	root2->right = createnode(5);
	root2->right->left = createnode(6);


	struct node *root3= createnode(10);
	root3->left = createnode(8);
	root3->left->left = createnode(3);
	root3->left->right = createnode(5);
	root3->right = createnode(2);
	root3->right->left = createnode(2);

	//inorder traversal
//
//	cout << endl << "inorder traversal :" <<endl;
//	inOrderTraversal(root);
//
//	cout << endl << "height of tree :"<< endl;
//	cout << height(root);
//
//	cout << endl << "diameter of tree :"<< endl;
//	cout << diameter(root);
//
//	cout << endl << "levels of tree :"<< endl;
//	printLevelsQueue(root);
//
//	cout << endl << "morris inorder traversal" <<endl;
//	morrisInorderTraversal(root);

//
//	cout << endl << "size of tree" << endl;
//	cout << sizeOfTree(root);
//
//	cout << endl << "root and root2 are identical ?" << endl;
//	cout << identicalTrees(root, root2);
//
//	cout << endl << "root and root3 are identical ?" << endl;
//	cout << identicalTrees(root, root3);
//
//	cout << endl << "delete the root3 tree " << endl;
//	deleteTree (&root3);
//
//	cout << endl << "mirror of  the root tree " << endl;
//	mirror(root);
//	morrisInorderTraversal(root);

//	cout<<endl << "print paths of the tree root" <<endl;
//	int array[100];
//	 printPaths(root, array, 0);
//
//	 cout << endl << "count leaf nodes of tree root" << endl;
//	 cout << "no. of leaf nodes is " << countLeafNodes(root);

	 cout << endl << "print the tree root in spiral form" << endl;
	 bool flag = false;

	 for (int i = 1; i <= height(root); i++) {
		 printSpiral(root,i, flag);
		 flag = !flag;
		 cout << endl;
	 }

	 cout << endl << "print the tree root in spiral form using stacks" << endl;
	 printSpiralStack(root);

	 cout << endl << "tree root follow children sum property ?" << endl;
	 cout << childrenSumProperty(root);

	 cout << endl << "tree root3 follow children sum property ?" << endl;
	 cout << childrenSumProperty(root3);

	 cout << endl << "tree root test : in order without recursion and stack" << endl;
	 inorderTraversalTest(root);
	 cout << endl << "convert tree to follow child sum porperty" <<endl;
	 convertTree(root);
	 inorderTraversalTest(root);

	 return 0;
}
