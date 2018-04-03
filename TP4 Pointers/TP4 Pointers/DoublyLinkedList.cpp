#include "stdafx.h"
#include "DoublyLinkedList.h"


DoublyLinkedList::DoublyLinkedList()
{
	head = nullptr;
	tail = nullptr;
}


DoublyLinkedList::~DoublyLinkedList()
{

}

void DoublyLinkedList::addElement(int i)
{
	Node *add;
	add = new Node();
	add->value = i;
	add->next = head;
	head = add;
}


bool DoublyLinkedList::isPrime(int n) 
{
	bool isPrime = true;
	for (int i = 2; i <= n / 2; ++i) 
	{
		if (n % i == 0) 
		{
			return false;
			break;
		}
	}
}
void DoublyLinkedList::print()
{
	Node *sweep = head;
	while (sweep != nullptr) 
	{
		std::cout << sweep->value;;
		sweep = sweep->next;
		std::cout << ", ";
	}
}
;
