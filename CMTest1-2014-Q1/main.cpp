#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>
#include "Complex.h"

using namespace std;

int main()
{
	//Creating complex number objects and demo of stream insertion
	Complex c1(5, 15);
	cout << "c1: " << c1 << endl;

	Complex c2(10, 25);
	cout << "c2: " << c2 << endl;

	Complex c3(0, 20);
	cout << "c3: " << c3 << endl;

	Complex c4(20, 0);
	cout << "c4: " << c4  << endl;

	//Demo of greater than operator overload

	if (c1 > c2)
	{
		cout << c1 << " is greater than " << c2;
	}
	else
		cout << c1 << " is less than or equal to " << c2 << endl;


	system("PAUSE");
	return 0;
}