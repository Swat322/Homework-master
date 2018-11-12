#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Shoes
{
protected: int price5;

		   string name5;
private: int  price, size;
		 string name = "Jordan";
		 string color = "gray";
public:
	Shoes()
	{
		string name = "Jordan";
		price = 50;
		size = 35;
		string color = "gray";
		Print0();
		cout << endl;
	}
	void message()
	{
		cout << "Class is working" << endl;
	}

	string name1;
	string color1;
	int price1;
	int size1;
	void Print0()
	{
		cout << "Name is-" << name << ",price is-" << price << ",size is-" << size << ",color this shoes is-" << color << endl;
	}
	void Print1()
	{
		cout << "Name1 is -" << name1 << ",price1 is-" << price1 << ",size1 is -" << size1 << ",color1 this shoes is -" << color1 << endl;
	}

	~Shoes()
	{
		cout << "Class is not working" << endl;
		system("pause");
	}
};
