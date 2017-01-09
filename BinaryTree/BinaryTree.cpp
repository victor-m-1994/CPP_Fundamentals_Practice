#include "BinaryTree.h"
#include <iostream>
using namespace std;

BinaryTree::BinaryTree()
{
	root = NULL;
}

BinaryTree::~BinaryTree()
{
	destroy_tree();
}

void BinaryTree::destroy_tree(node *leaf)
{
	if (leaf != NULL)
	{
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

void BinaryTree::insert(int key, node *leaf) //Recursive insertion
{
	if (key< leaf->key_value)
	{
		if (leaf->left != NULL)
			insert(key, leaf->left);
		else
		{
			leaf->left = new node;
			leaf->left->key_value = key;
			leaf->left->left = NULL;    //Sets the left child of the child node to null
			leaf->left->right = NULL;   //Sets the right child of the child node to null
		}
	}
	else if (key >= leaf->key_value)
	{
		if (leaf->right != NULL)
			insert(key, leaf->right);
		else
		{
			leaf->right = new node;
			leaf->right->key_value = key;
			leaf->right->left = NULL;  //Sets the left child of the child node to null
			leaf->right->right = NULL; //Sets the right child of the child node to null
		}
	}
}

node *BinaryTree::search(int key, node *leaf)
{
	if (leaf != NULL)
	{
		if (key == leaf->key_value)
			return leaf;
		if (key<leaf->key_value)
			return search(key, leaf->left);
		else
			return search(key, leaf->right);
	}
	else return NULL;
}

void BinaryTree::insert(int key)
{
	if (root != NULL)
		insert(key, root);
	else
	{
		root = new node;
		root->key_value = key;
		root->left = NULL;
		root->right = NULL;
	}
}

node *BinaryTree::search(int key)
{
	return search(key, root);
}

void BinaryTree::destroy_tree()
{
	destroy_tree(root);
}

void BinaryTree::print_preorder()
{
	if (root == NULL) {
		cout << "Tree is empty" << endl;
	}
	else {
		//cout << root->key_value << " , ";
		print_preorder(root);
	}
}

void BinaryTree::print_preorder(node *leaf)
{
	if (leaf != NULL) {
		cout << leaf->key_value << "  ";
		print_preorder(leaf->left);
		print_preorder(leaf->right);
	}
}

void BinaryTree::print_left2right() 
{
	if (root != NULL) {
		cout << "[ " << root->key_value << " ";
		print_left2right(root);
		cout << "]" << endl;
	}
}

void BinaryTree::print_left2right(node *leaf) 
{
	if (leaf != NULL) {
		if (leaf->left != NULL) {
			cout << (leaf->left)->key_value << " ";
		}
		if (leaf->right != NULL) {
			cout << (leaf->right)->key_value << " ";
		}
		print_left2right(leaf->left);
		print_left2right(leaf->right);
	}
}

void BinaryTree::invert()
{
	invert(root);
}

void BinaryTree::invert(node *leaf)
{
	if (leaf != NULL) {
		invert(leaf->left);
		invert(leaf->right);
		node *tmp;
		tmp = leaf->left;
		leaf->left = leaf->right;
		leaf->right = tmp;
	}
}