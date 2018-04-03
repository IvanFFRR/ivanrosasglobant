#include "swapf.h"
#include "stdafx.h"

void swap_1(int *a, int *b) {
	int x = *a;
	*a = *b;
	*b = x;
}

void swap_2(int &a, int &b) {
	int x = a;
	a = b;
	b = x;
}