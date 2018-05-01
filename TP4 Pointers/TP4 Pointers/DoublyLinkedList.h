#pragma once
#include "Node.h"
#include <iostream>

class DoublyLinkedList
{
private:
	Node *head;

public:
	DoublyLinkedList();
	~DoublyLinkedList();
	int length();
	void addElement(int i, int pos);
	bool isPrime(int n);
	void print();

};

