#pragma once
#pragma once

#include <iostream>

#include <string>

#ifndef COMPLEX_H

#define COMPLEX_H

using namespace std;

class Complex
{
	int re;
	int im;

public:

	Complex()
	{
		re = 0;
		im = 0;
	}
	Complex(double re, double im)		
	{
		this->re = re;
		this->im = im;
	}

	Complex(const Complex & object) :

		re(object.re), im(object.im)
	{}
	~Complex()
	{}
		void enterComplex()
	{
		cout << "enter complex number:" << endl;
		cout << "real: ";
		cin >> re;
		cout << endl;
		cout << "imaginary: ";
		cin >> im;
		cout << endl;
	}
	void printArg()

	{
		cout << "real part is: " << re << endl;

		cout << "imaginary part is: " << im << "i" << endl;
	}
	void coef()
	{

		int b = sqrt(re*re + im * im);
		cout << "coefficient is: " << b << endl;
	}

};

void num3();

#endif