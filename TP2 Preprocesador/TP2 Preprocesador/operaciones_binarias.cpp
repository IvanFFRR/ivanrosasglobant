#include "operaciones_binarias.h"
#include "stdafx.h"

int logicAnd(int a, int b) {
	return a && b;
}

int logicOr(int a, int b) {
	return a || b;
}

unsigned int shiftLeft(unsigned int a) {
	return a << 2;
}

unsigned int shiftRight(unsigned int a) {
	return a >> 2;
}


