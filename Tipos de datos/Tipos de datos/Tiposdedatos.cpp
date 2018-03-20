// Tiposdedatos.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "limits"
#include <iostream>
#include <cstddef>
#include <stdlib.h>

char var = 65;
int a = 0xFFFFFFFF;
unsigned int b = 0xFFFFFFFF;
int vec[5];
short int input;

using namespace std;

/*comments inside*/
void dataTypes() {
	cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
	cout << "* * * * * * * * * D A T A   T Y P E S * * * * * * * * * * " << endl;
	cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n" << endl;
	cout << "Size of data types.\n " << endl;
	cout << "Short: " << sizeof(short) << " bytes." << endl;
	cout << "Integer: " << sizeof(int) << " bytes." << endl;
	cout << "Float: " << sizeof(float) << " bytes." << endl;
	cout << "Double: " << sizeof(double) << " bytes." << endl;
	cout << "Long: " << sizeof(long) << " bytes." << endl;
	cout << "Long Long: " << sizeof(long long) << " bytes." << endl;
	cout << "Maximum size for this architecture: " << sizeof(size_t) << " bytes. \n\n " << endl;
	//the maximum size isn't the same when debugging for x86 and x64 architectures because the length of their memory address is different


	//given a char variable A
	cout << "Decimal value of variable: " << +var << endl; // + operator promotes char to int, otherwise, it shows character A
	cout << "Hexadecimal value of variable: " << hex << +var << endl;
	cout << "Octal value of variable: " << oct << +var << endl;
	cout << "Character: " << var << "\n\n" << endl;

	/*printf("Decimal value of variable: %d\n", var);
	printf("Hexadecimal value of variable: %X\n", var);
	printf("Octal value of variable: %o\n", var);
	printf("Character: %c\n", var);*/ //redundant

	cout << "Minimum numeric limit for: \n" << endl;
	cout << dec << "Short: " << numeric_limits<short>::min() << endl;
	cout << dec << "Integer: " << numeric_limits<int>::min() << endl;
	cout << dec << "Float: " << numeric_limits<float>::min() << endl;
	cout << dec << "Double: " << numeric_limits<double>::min() << endl;
	cout << dec << "Long: " << numeric_limits<long>::min() << endl;
	cout << dec << "Long Long: " << numeric_limits<long long>::min() << endl;
	cout << dec << "Minimum limit for this architecture: " << numeric_limits<size_t>::min() << "\n\n" << endl;

	cout << "Maximum numeric limit for: \n" << endl;
	cout << dec << "Short: " << numeric_limits<short>::max() << endl;
	cout << dec << "Integer: " << numeric_limits<int>::max() << endl;
	cout << dec << "Float: " << numeric_limits<float>::max() << endl;
	cout << dec << "Double: " << numeric_limits<double>::max() << endl;
	cout << dec << "Long: " << numeric_limits<long>::max() << endl;
	cout << dec << "Long Long: " << numeric_limits<long long>::max() << endl;
	cout << dec << "Maximum limit for this architecture: " << numeric_limits<size_t>::max() << "\n\n" << endl;

	cout << "Decimal value of signed 0xFFFFFFFF: " << dec << a << endl;
	cout << "Decimal value of unsigned 0xFFFFFFFF: " << dec << b << "\n\n\n" << endl;
	/*The values are different because unsigned int data type doesn't account for negatives, whereas signed int does.
	0xFFFFFFFF effectively equals 4294967295 (unsigned). However, in order to make a number negative, the 'two's complement' operation is applied, in which
	all the bits are inverted and then added 1. So, to turn the value 1 (0x00000001) into a negative, we invert it to (0xFFFFFFFE) and add 1, meaning that 0xFFFFFFFF equals -1 (signed)*/
}

void doArrays() {
	input = 0;

	cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
	cout << "* * * * * * * * * * * A R R A Y S * * * * * * * * * * * * " << endl;
	cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n\n" << endl;

	cout << "Pick an option: " << endl;
	cout << "\t1 Enter numbers to an array." << endl;
	cout << "\t2 Display array." << endl;
	cout << "\t3 Display data types exercise." << endl;
	cout << "\t0 Exit.\n" << endl;
	cin >> input;

	switch (input) {
	case 1:
		cout << "Enter 5 numbers." << endl;
		for (int i = 0; i < 5; i++) {
			cin >> (vec[i]);
		}
		system("cls");
		doArrays();
		break;
	case 2:
		cout << "The numbers in the array are: ";
		for (int i = 0; i < 5; i++) {
			cout << vec[i] << ", ";
		}
		cout << "\n" << endl;
		system("Pause");
		system("cls");
		doArrays();
		break;
	case 3: 
		dataTypes();
		doArrays();
		break;
	case 0:
		break;
	default:
		cout << "There is no such option!\n" << endl;
		system("Pause");
		system("cls");
		doArrays();
		break;
	}



}

int main()
{
	doArrays();
	return 0;
  
}


