#include <iostream>
#include "BinaryTree.h"
using namespace std;
//http://www.cprogramming.com/tutorial/lesson18.html

//Definition for a binary tree node.

struct TreeNode {
	int val;
	TreeNode *left; 
	TreeNode *right;
	TreeNode(int x) {
		val = x;
		left = NULL;
		right = NULL;
	}
};

int main() {
	BinaryTree tree;
	tree.insert(4);
	tree.insert(2);
	tree.insert(7);
	tree.insert(1);
	tree.insert(3);
	tree.insert(6);
	tree.insert(9);

	tree.print_left2right();
	tree.invert();
	tree.print_left2right();
	system("pause");
	return 0;
}