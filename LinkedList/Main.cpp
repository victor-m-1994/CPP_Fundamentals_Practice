#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
	LinkedList list;
	list.insert(1);
	list.insert(2);
    list.insert(3);
	list.print();


	system("pause");
	return 0;
}