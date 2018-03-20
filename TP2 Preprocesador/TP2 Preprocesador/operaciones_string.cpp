#include "stdafx.h"
#include "operaciones_string.h"
#include <iostream>
#define STRCMP(a, R, b) (strcmp(a, b) R 0)

bool compareString(char a[40], char b[40]) {
	if (STRCMP(a, == , b))
		return true;
}
