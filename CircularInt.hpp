#include <iostream>
#include <string>
#pragma once

class CircularInt{
	public:
	int num;
	int first;
	int last;
	
	CircularInt(int x1, int y1);
	CircularInt operator+ (const CircularInt &circ);
	friend CircularInt operator+ ( CircularInt &circ, const int &x);
	friend CircularInt operator+ (const int &x ,const CircularInt &circ);
	friend CircularInt operator- (const int &x ,const CircularInt &circ);
	CircularInt operator* (const int &x);
	CircularInt& operator*= (const int &x);
	friend CircularInt operator- (const CircularInt &circ);
	CircularInt operator- (const int &x);
	friend CircularInt operator/ (const CircularInt &circ, const int &x);
	CircularInt& operator+= (const int &x);
	CircularInt &operator++ ();
	CircularInt operator++ (int);
	std::ostream &operator<<(std::ostream &ost);
	friend std::ostream &operator<<(std::ostream &ost , CircularInt &m);
	friend std::ostream& operator<<(std::ostream& os, CircularInt const& r);
	void add(int x);
	void minus(int x);
	void fix();	
};
