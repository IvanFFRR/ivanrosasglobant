#include "stdafx.h"
#include "operaciones_string.h"
#include <iostream>

bool compareString(char a[40], char b[40]) {
	if (strcmp(a, b) == 0)
		return true;
	else
		return false;
}
