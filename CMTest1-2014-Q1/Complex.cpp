#include "Complex.h"
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

Complex::Complex()
{
	re = 0;
	im = 0;
}


Complex::~Complex()
{

}

Complex::Complex(float ire, float iim)
{
	re = ire;
	im = iim;
}

bool Complex:: operator > (Complex c)
{
	float mag1 = sqrt(pow(re, 2) + pow(im, 2)); //Magnitude of the calling implicit object
	float mag2 = sqrt(pow(c.re, 2) + pow(c.im, 2));

	if (mag1 > mag2)
	{
		return true;
	}
	else
		return false;
}

ostream &operator << (ostream &output, Complex c) //NON MEMBER FUNCTION
{
	if (c.re == 0 && c.im == 0)
	{
		output << 0;
	}
	else if (c.re == 0)
	{
		output << "j" << c.im;
	}
	else if (c.im == 0)
	{
		output << c.re;
	}
	else
	{
		output << c.re << "+" << "j" << c.im ;
	}

	return output;
}