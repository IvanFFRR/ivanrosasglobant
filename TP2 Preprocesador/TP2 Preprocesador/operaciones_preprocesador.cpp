#include "stdafx.h"
#include "operaciones_preprocesador.h"
#include <iostream>
#include <sstream>

#define CONC(a, b) (a ## b)

std::string concat(int a, int b)
{
	char ab[40] = "Eureka!";
	return CONC(a, b);
}

void print(std::string a) {
	std::cout << a << std::endl;;
}