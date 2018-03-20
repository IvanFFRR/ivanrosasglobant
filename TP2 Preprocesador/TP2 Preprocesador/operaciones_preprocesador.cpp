#include "stdafx.h"
#include "operaciones_preprocesador.h"
#include <iostream>
#include <sstream>

#define CONC(a, b) (#a ## #b)
#define PRINT(a) std::cout << a << std::endl;

std::string concat(int a, int b)
{
	return CONC(a, b) ;
}

void print(std::string a) {
	PRINT(a);
}