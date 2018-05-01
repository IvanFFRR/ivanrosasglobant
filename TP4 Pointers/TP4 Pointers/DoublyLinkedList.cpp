#include "stdafx.h"
#include "DoublyLinkedList.h"

//exercises 1 and 2 at the bottom
DoublyLinkedList::DoublyLinkedList()
{
	head = nullptr;
}


DoublyLinkedList::~DoublyLinkedList()
{
	Node *p = head;
	while (head != nullptr) {
		head = head->next;
		delete p;
	}
}

int DoublyLinkedList::length()
{
	Node *sweep = head;
	int length = 0;
	while (sweep != nullptr)
	{
		length++;
		sweep = sweep->next;
	}
	return length;
}

void DoublyLinkedList::addElement(int i, int pos)
{
	if (pos <= length() + 1)
	{
		Node *node = new Node();
		node->value = i;
		if (pos == 1)
		{
			node->next = head;
			if (head != nullptr)
				head->prev = node;
			head = node;
		}
		else
			if (pos == length() + 1)
			{
				Node *sweep = head;
				while (sweep->next!= nullptr)
				{
					sweep = sweep->next;
				}
				sweep->next = node;
				node->prev = sweep;
				node->next = nullptr;
			}
			else
			{
				Node *sweep = head;
				for (int f = 1; f <= pos - 2; f++)
					sweep = sweep->next;
				Node *follow = sweep->next;
				sweep->next = node;
				node->prev = sweep;
				node->next = follow;
				follow->prev= node;
			}
	}
}


bool DoublyLinkedList::isPrime(int n) 
{
	int div = n / 2;
	for (int i = 2; i <= div; ++i) 
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
	do
	{
		std::cout << sweep->value;;
		sweep = sweep->next;
		std::cout << ", ";
	} while (sweep != nullptr);

};



