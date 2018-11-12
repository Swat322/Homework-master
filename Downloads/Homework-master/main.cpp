#include "Header.h"
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Shoes Sport;
	Sport.message();
	Sport.name1 = "Nike";
	Sport.color1 = "black";
	Sport.price1 = 10;
	Sport.size1 = 28;
	Sport.Print1();
	Shoes Sport1;
	Sport1.name1 = "Adidas";
	Sport1.color1 = "white";
	Sport1.price1 = 15;
	Sport1.size1 = 25;
	Sport1.Print1();
	Shoes Sport2;
	Sport2.name1 = "Puma";
	Sport2.color1 = "blue";
	Sport2.price1 = 45;
	Sport2.size1 = 30;
	Sport2.Print1();
	_getch();
}
