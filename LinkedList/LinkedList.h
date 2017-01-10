#pragma once

struct Node {
	int data;
	Node* next;
};

class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	void insert(int value);
	bool remove(int value);
	void print();
private:
	int listLength;
	Node *head;
	Node *current;
};

