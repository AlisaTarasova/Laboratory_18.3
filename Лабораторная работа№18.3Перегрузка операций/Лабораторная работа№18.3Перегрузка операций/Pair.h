#pragma once
#include <iostream>
using namespace std;

class Pair
{
	int x;
	double y;
public:
	Pair();
	Pair(int X, double Y);
	Pair(const Pair& p);
	~Pair();
	void Set_x(int X);
	void Set_y(double Y);

	Pair& operator = (const Pair & t);

	bool operator< (const Pair& t);
	bool operator> (const Pair& t);
	
	Pair& operator--();
	Pair operator--(int);

	//Глобальные функции ввода и вывода
	friend istream& operator>>(istream& in, Pair& t);
	friend ostream& operator<<(ostream& out, const Pair& t);
};