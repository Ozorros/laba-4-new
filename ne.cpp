
#include "Child.h"
#include "Complex.h"
#include "Tiles.h"
#include "Vector.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
child t;
t.enterChild();
t.printChild();

Complex a;
a.enterComplex();
a.printArg();
a.coef();

tiles y;
cout << "Enter brand name: ";
cin >> y.brand;
cout << endl;
cout << "Enter height: ";
cin >> y.size_h;
cout << endl;
cout << "Enter the waist size: ";
cin >> y.size_w;
cout << endl;
cout << "Enter the price: ";
cin >> y.price;
y.getData();


string operation;
vector p;
p.enterVector();
cout << "what do you want to do? (vector coef, sum or sub)" << endl;
cin >> operation;
if (operation == "coef")

{
	int vectornum;

	cout << "which vector do you want?" << endl;
	cin >> vectornum;
	switch (vectornum)
	{
	case 1:
	{
		p.coefVector1();
		break;
	}
	case 2:
	{
		p.coefVector2();
		break;
	}
	default:
	{
		cout << "vector entered wrong" << endl;
		break;
	}
	}
}
else if (operation == "sum")
{
	p.vectorSum();
}
else if (operation == "sub")
{
	p.vectorSub();
}
else



cout << "operation entered wrong" << endl;


	int number;
	cout << "which number do you want to check?" << endl;

	cin >> number;

	switch (number)

	{

	case 1:

	{

		num1();

		break;
	}
	case 2:

		num2();
		break;

	case 3:

	{
		num3();

		break;

	}
	case 4:
	{

		num4();

		break;
	}
	default:

	{

		cout << "You entered wrong number " << endl;

		break;

	}

	}

	cin.get();

}
