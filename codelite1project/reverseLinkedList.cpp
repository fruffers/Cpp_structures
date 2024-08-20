
#include "include/ReverseLinkedList.h"

// Constructor for Node class
Node::Node(int val) {
	data = val;
	nextPtr = nullptr;
};

Node* ReverseLinkedList::reverseList(Node* head) {
	Node* prevPtr = nullptr;
	Node* currPtr = head;

	while (currPtr != nullptr) {
		// Reverse the two pointers, curr and prev, 
		// assign next of curr as prev, 
		// and prev as current,
		// then current as the next
		Node* nextTmp = currPtr->nextPtr; // Save the next node
		currPtr->nextPtr = prevPtr; // Reverse the current node's next pointer to the previous
		prevPtr = currPtr; // Move prevPtr one step forwards so it points to the node we are currently at
		currPtr = nextTmp; // Set our current pointer to the next node in original list
	
	};
	
	return prevPtr;

};

void printList(Node* head) {
	Node* temp = head;
	while (temp != nullptr) {
		std::cout << temp->data << " ";
		temp = temp->nextPtr;
	}
	
	std::cout << std::endl;
};

int main() {
	
	// Creating linked list: 1 -> 2 -> 3 -> 4 -> nullptr
	Node* head = new Node(1);
	head->nextPtr = new Node(2);
	head->nextPtr->nextPtr = new Node(3);
	head->nextPtr->nextPtr->nextPtr = new Node(4);
	
	std::cout << "Original list: ";
	printList(head);
	
	ReverseLinkedList reverser;
	Node* reversedHead = reverser.reverseList(head);
	
	std::cout << "Reversed list: ";
	printList(reversedHead);
	
	return 0;
}