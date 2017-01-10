#include "LinkedList.h"
#include <iostream>
using namespace std;


LinkedList::LinkedList()
{
	listLength = 0;
	head = NULL;
	current = NULL;
}


LinkedList::~LinkedList()
{

}

void LinkedList::insert(int value)
{
	if (head == NULL) {
		head = new Node;
		head->data = value;
		head->next = NULL;
		current = head;
	}
	else {
		Node *newNode = new Node;
		newNode->data = value;
		newNode->next = NULL;
		current->next = newNode;
		current = newNode;
	}
	listLength++;
}

bool LinkedList::remove(int value) //TODO
{
	if (head->data == value) {//if head
		head = head->next;
	}
	else {
		
	}
	return false;
}

void LinkedList::print()
{
	current = head;
	while (current!=NULL) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}