#include "Pair.h"
#include <iostream>
using namespace std;

Pair::Pair()
{
	x = 0;
	y = 0;
	cout << "Конструктор без параметров" << endl;
}

Pair::Pair(int X, double Y)
{
	this->x = X;
	this->y = Y;
	cout << "Конструктор с параметрами" << endl;
}

Pair::Pair(const Pair& p)
{
	this->x = p.x;
	this->y = p.y;
	cout << "Конструктор копирования" << endl;
}

Pair::~Pair() 
{
	cout << "Память освобождена." << endl;
}


void Pair::Set_x(int X)
{
	x = X;
}

void Pair::Set_y(double Y)
{
	y = Y;
}

Pair& Pair::operator =(const Pair& t)
{
	if (&t == this)
		return *this;
	x = t.x;
	y = t.y;
	return *this;
}

bool Pair::operator< (const Pair& t)
{
	return (x < t.x) && (y < t.y);
}

bool Pair::operator> (const Pair& t) 
{
	return (x > t.x) && (y > t.y);
}

Pair& Pair::operator --()
{
	this->x--;
	return*this;
}


Pair Pair::operator --(int)
{
	Pair t (*this);
	this->y--;
	return t;
}

istream& operator >>(istream& in, Pair& t)
{
	cout << "x= "; 
	in >> t.x;
	cout << "y= ";
	in >> t.y;
	return in;
}

ostream& operator <<(ostream& out, const Pair& t)
{
	return (out<<t.x<<":"<<t.y);
}
