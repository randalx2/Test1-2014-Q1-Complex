#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>

using namespace std;

class Complex
{
private: float re, im;
public:
	Complex();
	~Complex(); 
	Complex(float, float);
	bool operator > (Complex c);
	friend ostream &operator << (ostream &output, Complex c);
};

#endif