#pragma once
#include "Node.h"
#include <iostream>

class DoublyLinkedList
{
private:
	Node *head, *tail;

public:
	DoublyLinkedList();
	~DoublyLinkedList();
	void addElement(int i);
	bool isPrime(int n);
	void print();

};

