#include "Functions.h"
#include <math.h>

//funkcja do potegowania liczb calkowitych dodatnich (uproszona)

int power(int a, int b)
{
	if (b < 0) //nie obs³ugujemy gdy wykladnik jest liczba ujemna
	{
		return -1;
	}
	if (b == 0)
	{
		return 1;
	}
	if (b == 1)
	{
		return a;
	}

	int r = 1;

	for (int i = 0; i < b; i++)
	{
		r *= a;
	}
	return r;
}


float power(float a, float b)
{
	return static_cast<float>(pow(a, b));
}

double power(double a, double b)
{
	return  pow(a, b);
}