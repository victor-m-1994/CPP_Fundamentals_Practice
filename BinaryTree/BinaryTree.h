#pragma once

struct node
{
	int key_value;
	node *left;
	node *right;
};

class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();
	void insert(int key);
	node *search(int key);
	void destroy_tree();
	void print_preorder();
	void print_preorder(node *leaf);
	void print_left2right();
	void print_left2right(node *leaf);
	void invert();//inverts binary tree
	void invert(node *leaf);//inverts binary tree


private:
	void destroy_tree(node *leaf);
	void insert(int key, node *leaf);
	node *search(int key, node *leaf);

	node *root;
};