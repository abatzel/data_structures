// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>

struct Node
{
public:
	struct Node* next;
	int value;
};

using namespace std;

class LinkedList
{
public:
	int length;
	Node * head;
	LinkedList();
	~LinkedList();

	void addNode(int value);
	void print();
};

LinkedList::LinkedList() {
	this->length = 0;
	this->head = NULL;
}

LinkedList::~LinkedList() {
	std::cout << "List has been deleted";
}

void LinkedList::addNode(int value) {
	Node* node = new Node();
	node->value = value;
	node->next = this->head;
	this->head = node;
	this->length++;
}

void LinkedList::print() {
	Node* head = this->head;
	int i = 1;
	while (head) {
		std::cout << i << ": " << head->value << std::endl;
		head = head->next;
		i++;
	}
}


int main()
{
	LinkedList* myList = new LinkedList();
	for (int i = 0; i < 100; i++) {
		myList->addNode(i);
	}
	myList->print();
	std::cout << "List length is " << myList->length << std::endl;

	myList->~LinkedList();
	return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
