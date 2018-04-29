#pragma once
#include <vector>
#include <set>
#include <iostream>
#include <string>

using namespace std;

class CircularInt{
private:
	int min, max;
	int now;

public:
	CircularInt(int a, int b);
	CircularInt(const CircularInt& h);


	CircularInt& operator+=(const int);
	CircularInt& operator+=(const CircularInt& h);

	CircularInt& operator-=(const int);
	CircularInt& operator-=(const CircularInt& h);

	CircularInt& operator*=(const int);
	CircularInt& operator*=(const CircularInt& h);

	CircularInt& operator/=(const int);
	CircularInt& operator/=(const CircularInt& h);

	CircularInt operator--(int);
	CircularInt& operator--();

	CircularInt operator++(int);
	CircularInt& operator++();

	CircularInt& operator=(const int);
	CircularInt& operator=(const CircularInt& h);

	friend CircularInt operator/(const CircularInt& h, int num);
	friend CircularInt operator/(int num, const CircularInt& h);
	friend CircularInt operator/(const CircularInt& a, const CircularInt& b);

	friend int operator>=(const CircularInt& h, int num);
	friend int operator>=(int num, const CircularInt& h);
	friend int operator>=(const CircularInt& a, const CircularInt& b);

	friend int operator>(const CircularInt& h, int num);
	friend int operator>(int num, const CircularInt& h);
	friend int operator>(const CircularInt& a, const CircularInt& b);

	friend int operator<=(const CircularInt& h, int num);
	friend int operator<=(int num, const CircularInt& h);
	friend int operator<=(const CircularInt& a, const CircularInt& b);

	friend int operator<(const CircularInt& h, int num);
	friend int operator<(int num, const CircularInt& h);
	friend int operator<(const CircularInt& a, const CircularInt& b);

	friend int operator==(const CircularInt& h, int num);
	friend int operator==(int num, const CircularInt& h);
	friend int operator==(const CircularInt& a, const CircularInt& b);

	friend int operator!=(const CircularInt& h, int num);
	friend int operator!=(int num, const CircularInt& h);
	friend int operator!=(const CircularInt& a, const CircularInt& b);

	friend CircularInt operator-(const CircularInt& h);
	friend CircularInt operator-(const CircularInt& h, const int num);
	friend CircularInt operator-(const int num, const CircularInt& h);
	friend CircularInt operator-(const CircularInt& a, const CircularInt& b);

	friend CircularInt operator-=(const CircularInt& h, const int num);
	friend CircularInt operator-=(const int num, const CircularInt& h);
	friend CircularInt operator-=(const CircularInt& a, const CircularInt& b);

	friend CircularInt operator*(const CircularInt& h, const int num);
	friend CircularInt operator*(const int num, const CircularInt& h);
	friend CircularInt operator*(const CircularInt& a, const CircularInt& b);

	friend CircularInt operator+(const CircularInt& h);
	friend CircularInt operator+(const CircularInt & h, const int num);
	friend CircularInt operator+(const int num,const CircularInt & h);
	friend CircularInt operator+(const CircularInt & a,const CircularInt & b);

	friend CircularInt operator-(const CircularInt & h, const int num);
	friend CircularInt operator-(const int num,const CircularInt & h);
	friend CircularInt operator-(const CircularInt & a,const CircularInt & b);

	friend ostream& operator<<(ostream& os, const CircularInt &m);
	friend istream& operator>>(istream& os, CircularInt &m);
};
