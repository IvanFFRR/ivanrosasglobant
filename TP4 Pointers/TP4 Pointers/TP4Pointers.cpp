// TP4Pointers.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "DoublyLinkedList.h"
#include "swapf.h"
#include <iostream>


int main()
{
	using namespace std;

	int a, b;

	cout << "* * * * * * * * * * * * * * * * * * * * * *" << endl;
	cout << "* * * * * T P 4 : P O I N T E R S * * * * *" << endl;
	cout << "* * * * * * * * * * * * * * * * * * * * * *\n\n" << endl;

	cout << "Swap Function: " << endl;
	cout << "Enter two numbers to be swapped: " << endl;
	cin >> a >> b;
	cout << "You entered " << a << " and " << b << endl;
	swap_2(a, b);
	cout << "The variables were succesfully swapped to " << a << " and " << b << "\n\n" << endl;

	cout << "Doubly Linked List. " << endl;
	cout << "Add numbers to the list (This list doesn't allow prime numbers): " << endl;

		DoublyLinkedList *dll;
		dll = new DoublyLinkedList();;

		for (int i = 0; i < 5; ++i)
		{
			cin >> a;
			
			if (!dll->isPrime(a) || a == 1)
			{
				dll->addElement(a);
			}
			else 
			{
				cout << "This list doesn't allow prime numbers! Please enter another number." << endl;
				--i;
			}
		}
		
		cout << "The values added to the list are: ";
		dll->print();
		cout << endl;

	system("Pause");

    return 0;
}

