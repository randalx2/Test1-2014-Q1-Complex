#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>
#include "Complex.h"

using namespace std;

int main()
{
	//Creating complex number objects
	Complex c1(5, 15);
	cout << "c1: " << c1;

	Complex c2(10, 25);
	cout << "c2: " << c2;

	Complex c3(0, 20);
	cout << "c3: " << c3;

	Complex c4(20, 0);
	cout << "c4" << c4;


	system("PAUSE");
	return 0;
}