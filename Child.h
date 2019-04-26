#pragma once
#pragma once

#include <string>

#include <iostream>

#ifndef CHILD_H

#define CHILD_H

using namespace std;

class child

{

private:

	string name;
	string surname;
	int age;
public:

	child()
	{
		name = "none";
		surname = "none";
		age = 0;//пустой
	}
	child(string name, string surname, int age)

	{
		this->name = name;
		this->surname = surname;
		this->age = age;//c параметром
	}
	child(const child & object) :

		name(object.name), surname(object.surname), age(object.age)
	{}
	//копирование
	~child()
	{}

		void enterChild()

	{
		cout << "VVedite ima: ";
		cin >> name;
		cout << endl;
		cout << "VVedite familiy: ";
		cin >> surname;
		cout << endl;
		cout << "VVedite vozrast: ";
		cin >> age;
		cout << endl;
	}

	void printChild()
	{
		cout << name << " " << surname << " is " << age << " years old";
	}

};

void num1();

#endif