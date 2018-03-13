// Macrodesuma.cpp: define el punto de entrada de la aplicación de consola.
//
#include "stdafx.h"
#include <iostream>
#define SUM(a, b) ((a) + (b)) //macro correcto
#define MAL(a, b) a + b //macro incorrecto

int f() { return 3; }
int main()
{
	int x = 3;
	int s = SUM(x, f() + 1) * 2; //la macro se expande como [(3 + (3 + 1)] * 2 = 14
	int m = MAL(x, f() + 1) * 2; //la macro se expande como 3 + 3 + (1 * 2) = 8
	printf("La macro con paréntesis da un total de %d, \nLa macro sin paréntesis da un total de %d\n\n", s, m); //feedback
	system("PAUSE");
}

