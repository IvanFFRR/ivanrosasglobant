/* * * * * */ 
/* M A I N */
/* * * * * */

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <istream>
#include "operaciones_matematicas.h"
#include "operaciones_binarias.h"
#include "operaciones_logicas.h"
#include "operaciones_preprocesador.h"
#include "operaciones_string.h"


using namespace std;
void mainscreen() {
	cout << "\t1) Operaciones matematicas." << endl;
	cout << "\t2) Operaciones de preprocesador." << endl;
	cout << "\t3) Operaciones logicas" << endl;
	cout << "\t4) Operaciones binarias." << endl;
	cout << "\t5) Operaciones string." << endl;
	cout << "\t0) Salir." << endl;
}
//prints mainscreen
void mathscreen() {
	cout << "\t1) Suma de dos numeros enteros." << endl;
	cout << "\t2) Cuadrado de un numero." << endl;
	cout << "\t3) Area de un circulo." << endl;
	cout << "\t4) Calcular el maximo de dos numeros.\n" << endl;
}
//shows math functions
void preprocscreen() {
	cout << "\t1) Concatenación de variables." << endl;
	cout << "\t2) Impresion de literal." << endl;
}
//shows preprocessor operations
void bitscreen() {
	cout << "\t1) Operador AND lógico. " << endl;
	cout << "\t2) Operador OR lógico. " << endl;
	cout << "\t3) Desplazamiento de bits hacia la izquierda. " << endl;
	cout << "\t4) Desplazamiento de bits hacia la derecha. " << endl;
}
//shows binary operations screen
void logicscreen() {
	cout << "\t1) Intercambio de variables. " << endl;
}
//shows logic operations
void clear() {
	system("cls");
	cout << "Presione un numero (y enter) para seleccionar un tipo de operacion\n" << endl;
}

int main()
{
	clear();
	mainscreen();

	int input1, input2, a, b;
	input1 = 0;
	input2 = 0;
	a = 0;
	b = 0;
	string s;
	s = "";

	cin >> input1;

	switch (input1) {
	case 0:
		return 0;
	case 1:
		mathscreen();
		cin >> input2;
		switch (input2) {
		
		case 1:
			cout << "Elija dos numeros enteros para ser sumados\n";
			cin >> a >> b;
			cout << "El total de la suma es " << sum(a, b) << endl;
			break;
		case 2:
			int sqr;
			cout << "Elija un numero para calcular su cuadrado" << endl;
			cin >> sqr;
			cout << "El cuadrado de " << sqr << " es " << square(sqr) << endl;
			break;
		case 3:
			int r;
			cout << "Elija el radio del circulo." << endl;
			cin >> r;
			cout << "El area de un circulo con radio " << r << " es " << area(r) << endl;
			break;
		case 4:
			cout << "Elija dos numeros para calcular cual es mayor." << endl;
			cin >> a >> b;
			cout << "El numero mayor es " << max(a, b) << endl;
			break;
		default:
			cout << "El numero no corresponde. " << endl;
			break;
		}
		break;
	case 2: 
		preprocscreen();
		cin >> input2;
		switch (input2) {
		case 1:
			cout << concat(a, b) << endl;
			break;
		case 2:
			cout << "Ingrese el texto a ser impreso. \n";
			getline(cin, s);
			print(s);
		}
		break;
	case 3:
		logicscreen();
		cin >> input2;
		switch (input2) {
		case 1: 
			int x, y;
			int *a = &x, *b = &y; //pointers
			cout << "Ingrese los dos numeros enteros a ser intercambiados." << endl;;
			cin >> x >> y;
			cout << "Las variables ingresadas son " << *a << " y " << *b << endl;
			swap(a, b);
			cout << "Las nuevas variables son " << *a << " y " << *b << endl;
			break;
		}
		break;
	case 4:
		bitscreen();
		cin >> input2;
		switch (input2) {
		case 3: 
			cout << "Ingrese un numero" << endl;
			cin >> a;
			cout << "Desplazar dos bits de 4 a la izquierda da: " << shiftLeft(a) << endl;
			break;
		case 4: cout << "Ingrese un numero" << endl;
			cin >> a;
			cout << "Desplazar dos bits de 4 a la derecha da: " << shiftRight(a) << endl;
			break;
		}

	}
	system("PAUSE");
	main();
	return 0;
}

