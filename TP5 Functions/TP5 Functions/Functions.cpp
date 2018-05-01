#include "Functions.h"
#include <iostream>
#include "stdafx.h"
#include <math.h>
#include <stdlib.h>


void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void sort(int p[], int size) 
{
	int i, j, min;
	for (i = 0; i < size; ++i) 
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (p[j] < p[min])
				min = j;

		swap(&p[min], &p[i]);
	}
}

int changeConst(const int i, int x)
{
	*(int *)&i = x;
	return i;
}

char functionPointer(int i)
{
	return (char)i;
}

int doubleToInt(double d) 
{
	return (int)round(d);
}

float charToFloat(char c) 
{
	char a = c;
	float f = a;
	return f;
}

