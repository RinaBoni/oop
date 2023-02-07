#include "Header.h"
#include <math.h>


float calc_a(float x, float y)
{
	float a;

	a = (sqrt(abs(x - 1)) - pow(abs(y), 1.0 / 3.0)) / (1 + (pow(x, 2) / 2) + (pow(y, 2) / 4));
	
	return a;
}

float calc_b(float x, float z)
{
	float b;
	//* pi / 180 - перевод в градусы
	b = x * (atan(z * pi / 180) + exp(3 - x);
	return b;
}