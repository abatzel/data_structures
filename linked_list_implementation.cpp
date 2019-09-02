
#include "pch.h"
#include <iostream>
#include <cstdlib>

class Node
{
public:
	Node* next;
	int data;
};

using namespace std;

class LinkedList
{
public:
	int length;
	Node * head;
	LinkedList();
	~LinkedList;

	void addNode(int data);
	void print();
};

LinkedList::LinkedList() {
	this->length = 0;
	this->head = NULL;
}

LinkedList::~LinkedList() {
	std::cout << "List has been deleted";
}

void LinkedList::addNode(int data) {
	Node* node = new Node();
	node->data = data;
	node->next = this->head;
	this->head = node;
	this->length++;
}

void LinkedList::print() {
	Node* head = this->head;
	int i = 1;
	while (head) {
		std::cout << i << ": " << head->data << std::endl;
		head = head->next;
		i++;
	}
}


int main()
{
	LinkedList* myList = new LinkedList();
	for (int i = 0; i < 100, ++i);
	{
		myList->addNode(i);
	}
	myList->print();
	std::cout << "List length is " << myList->length << std::endl;

	myList->~LinkedList();
	return 0;
}
