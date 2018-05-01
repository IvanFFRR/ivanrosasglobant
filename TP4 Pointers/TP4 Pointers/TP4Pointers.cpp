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
	cout << "The variables were successfully swapped to " << a << " and " << b << "\n\n" << endl;

	cout << "Doubly Linked List. " << endl;
	cout << "Add 5 (five) numbers to the list (CAUTION: This list doesn't allow prime numbers): " << endl;

		DoublyLinkedList *dll;
		dll = new DoublyLinkedList();;

		for (int i = 0; i < 5; ++i)
		{
			cin >> a;
			if (!dll->isPrime(a) && a != 1)

			{
				dll->addElement(a, i+1);
			}
			else 
			{
				cout << "\nThis list doesn't allow prime numbers! Please enter another number.\n" << endl;
				--i;
			}
		}
		
		cout << "The values added to the list are: ";
		dll->print();
		cout << "\n\n\n" << endl;

	

		cout << "* * * * * * * * * * * * * * * * * * * * * *" << endl;
		cout << "* * * * * * * P O I N T E R * * * * * * * *" << endl;
		cout << "* * * * * * A R I T M E T H I C * * * * * *" << endl;
		cout << "* * * * * * * * * * * * * * * * * * * * * *\n\n" << endl;

		cout << "[!] Check for commentaries at the bottom of the main function.\n" << endl;

	///**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
	/*
	1- Referencias. La mejor manera de definirlas es diciendo que es simplemente otro alias para
	una variable ya definida.
	Indicar en cada caso si es o no es válido:

	int var = 40;
	int &ref= var;  //THIS IS VALID

	int &ref = 1; //THIS IS NOT VALID

	int var = 1;
	int *ptr;
	int &ref = var;
	*ptr = ref; //THIS IS NOT VALID, THE POINTER IS NEVER INITIALIZED

	///**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
	/*
	Aritmética de punteros. Completar el siguiente código para que imprima “true”.
	int indice [] = {1,2,3,4,5,6,7,8,9,10};
	int *ptr;
	ptr ++;
	if(( *ptr *5 )==( *(ptr + )))
	{
	printf("true");
	}
	else
	{
	printf("false");

	}
	*/
	///**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**///

	int indice[] = { 1,2,3,4,5,6,7,8,9,10 };
	int *ptr = indice;
	ptr++;
	if ((*ptr * 5) == (*(ptr + *ptr * 4)))
	{
		printf("true");
	}
	else
	{
		printf("false");

	}
	cout << "\n" << endl;
	/* I'm not entirely sure if this is what you meant us to do but it does print true, though!*/

	system("Pause");
	return 0;
}

