#include "stdafx.h"
#include "operaciones_matematicas.h"
#define PI 3.14
#define AREA(r) ((PI)*(r)*(r))
#define SQR(a) ((a)*(a))
#define SUM(a, b) ((a)+(b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int square(int n) 
{
	return SQR(n);
}

int sum(int a, int b) 
{
	return SUM(a, b);
}

float area(unsigned int r) 
{
	return AREA(r);
}

int max(int a, int b) 
{
	return MAX(a, b);
}

