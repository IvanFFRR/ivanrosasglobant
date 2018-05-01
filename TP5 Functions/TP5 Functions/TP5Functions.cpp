#include "stdafx.h"
#include "Functions.h"
#include "limits"
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdlib.h>
#include <time.h>

int main()
{ 
	
	int size = 0;
	int *p = new int[size];
	srand(time(NULL));

	std::cout << "Let's sort an array. \nFirstly, determine the size of the array. " << std::endl;
	std::cin >> size;

	std::cout << "\nA total of " << size << " numbers have been randomly generated in the following order. " << std::endl;
	for (int i = 0; i < size; ++i) 
	{
		p[i] = rand() % std::numeric_limits<int>::max();
		std::cout << "Position " << i + 1 << ": " << p[i] << std::endl;
	}

	std::cout << "\nNow let's sort the list incrementally" << std::endl;
	
	std::cout << "Press Enter to sort." << std::endl;
	std::cin.get();
	std::cin.get();

	sort(p, size);

	std::cout << "\nDone! The list was sorted as follows: " << std::endl;
	

	for (int i = 0; i < size; ++i)
	{
		std::cout << "Position " << i + 1 << ": " << p[i] << std::endl;
	}

	std::cout << "\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "* * * * * * * * * F U N C T I O N S * * * * * * * * * * * " << std::endl;
	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n" << std::endl;

	int y, x;

	std::cout << "Enter a number. This is a constant variable." << std::endl;
	std::cin >> y;
	std::cout << "Enter another number. This will replace the constant variable." << std::endl;
	std::cin >> x;
	y = changeConst(y, x);
	std::cout << "The new constant variable is " << y << "\n" << std::endl;

	int(*fptr1)(double d); /* declaration of pointer to function */
	fptr1 = doubleToInt; /* initialization */
	char(*fptr2)(int);				 /* pointer to function that takes an int and returns a pointer */
	fptr2 = functionPointer;			
	float(*fptr3)(char fptr2);			/* to a function that takes a char and returns a float*/
	fptr3 = charToFloat;


	std::cout << "Insert a number with decimal places. It will be rounded to its nearest integer." << std::endl;
	double d;
	std::cin >> d;
	std::cout << "The rounded integer of " << d << " is " << fptr1(d) << "\n" << std::endl;

	

	std::cout << "Insert an integer, which will be converted into a char value, and then into a float." << std::endl;
	int i;
	std::cin >> i;
	std::cout << "The converted char value was " << fptr2(i) << std::endl;
	printf("Which was then converted to %.2f\n\n", fptr3(fptr2(i)));
	

	system("Pause");
}

