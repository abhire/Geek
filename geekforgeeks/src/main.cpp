//============================================================================
// Name        : geekforgeeks.cpp
// Author      : @abhi
// Version     :
// Copyright   : Your copyright notice
// Description :geekforgeeks binary trees solution C++, Ansi-style
//============================================================================

#include <iostream>
#include "TreeProperties.h"
#include <queue>
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



	struct node *root4 = createnode(1);
	  root4->left        = createnode(2);
	  root4->right       = createnode(3);
	  root4->left->left  = createnode(4);
	  root4->left->right = createnode(5);


		struct node *root5 = createnode(1);
		root5->left        = createnode(2);
		root5->right       = createnode(3);
		root5->left->left  = createnode(4);
		root5->left->right = createnode(5);
		root5->right->left  = createnode(6);
		root5->right->right  = createnode(7);

		root5->left->right->left  = createnode(8);
		root5->left->right->right  = createnode(9);

		root5->right->left->right  = createnode(10);

		struct node *root6 = createnode(1);
		root6->left        = createnode(2);
		root6->right       = createnode(3);
		root6->left->right  = createnode(4);
		root6->left->right->right = createnode(5);
		root6->left->right->right->right = createnode(6);


//	root3->right = createnode(2);
//	root3->right->left = createnode(2);

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
//
//	 cout << endl << "print the tree root in spiral form" << endl;
//	 bool flag = false;
//
//	 for (int i = 1; i <= height(root); i++) {
//		 printSpiral(root,i, flag);
//		 flag = !flag;
//		 cout << endl;
//	 }
//
//	 cout << endl << "print the tree root in spiral form using stacks" << endl;
////	 printSpiralStack(root);
////
////	 cout << endl << "tree root follow children sum property ?" << endl;
////	 cout << childrenSumProperty(root);
////
////	 cout << endl << "tree root3 follow children sum property ?" << endl;
////	 cout << childrenSumProperty(root3);
////
////	 cout << endl << "tree root test : in order without recursion and stack" << endl;
////	 inorderTraversalTest(root);
////	 cout << endl << "convert tree to follow child sum porperty" <<endl;
////	 convertTree(root);
////	 inorderTraversalTest(root);
//
////	cout << endl << "is tree root height balanced ?" <<endl;
////	cout << heightBalanced(root3);
////
////	cout << endl << "for tree root, print the path to leaf with sum 7"<<endl;
////	int array[100];
////	printPathLeafPathSum(root, array, 0, 7);
////
////
////	cout << endl << "root4 tree before doubletree" <<endl;
////	inorderTraversalTest(root4);
////	doubleTree(root4);
////
////	cout << endl << "root4 tree after doubletree" <<endl;
////	inorderTraversalTest(root4);
//
//	  cout << endl << "max width of the tree root5 is :" << endl;
//	  cout << maxWidth(root5);
//
//	  cout << endl << "print the distance 4 nodes in tree root5" << endl;
//	printKdistanceNodes (root5, 4);
//
//	cout << endl << "level of node with data 9 in tree root5 is " << endl;
//	cout <<	getLevelofNode(root5 , 9);
//
////	cout << endl << "print level with nULL " << endl;
////	printLevelsQueueNULL(root);
//
//	cout << endl << "top view of tree root6 " << endl;
//	torchUpTree(root5);
//
//	cout << endl << "Ancestors of 10 in tree root5" << endl;
//	int array[20];
//	int len = 0;
//	PrintAncestors (root5, array, len, 5);

//	cout << endl << "level 10 in tree root5" << endl;
//	cout << 8;
//	int level = 0;
//	levelNode(root5,level, 1);

		std::queue <int> q;

		if ( 0 == q.front())
			cout << "thats it";
		else
			cout << q.front();


	 return 0;
}
