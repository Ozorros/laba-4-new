#pragma once
#pragma once

#include <iostream>

#include <string>

#ifndef TILES_H

#define TILES_H

using namespace std;

class tiles
{
public:

	string brand;
	int size_h;
	int size_w;

	int price;
	tiles()
	{
	brand = "none";
		size_h = 0;
		size_w = 0;
		price = 0;

	}
	tiles(string brand, int size_h, int size_w, int price)

	{

		this->brand = brand;

		this->size_h = size_h;

		this->size_w = size_w;

		this->price = price;

	}

	tiles(const tiles & object) :

		brand(object.brand), size_h(object.size_h), size_w(object.size_w), price(object.price)

	{

		cout << "Copy constructor." << endl;

	}
	~tiles()
	{
		cout << endl;
		cout << "class has been destructed" << endl;
	}
	void getData()
	{
		cout << "Size " << size_h << " h/" << size_w << " w " << "of the " << brand << " brand will cost " << price;
	}
};

void num2();

#endif