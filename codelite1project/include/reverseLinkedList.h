#ifndef REVERSE_LINKED_LIST_H
#define REVERSE_LINKED_LIST_H

#include <iostream>
#include <list>

class Node {
public:
	int data;
	Node* nextPtr;
	
	Node(int val);
};

class ReverseLinkedList {
public:
	Node* reverseList(Node* head);
};

void printList(Node* head);

#endif // REVERSE_LINKED_LIST_H