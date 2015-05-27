#include <iostream>
#include <string>
#include "Rev.h"

using namespace std;

Rev::Rev()
{
	num = 0;
}

Rev::~Rev()
{
}

int Rev::getNum()
{
	return num;
}

void Rev::setNum(int k)
{
	num = k;
}

Rev Rev:: operator+(Rev &h)
{
	Rev result;
	result.num = num + h.num;
	return result;
}

Rev Rev:: operator-(Rev &h)
{
	Rev result;
	result.num = num - h.num;
	return result;
}

istream &operator >> (istream &is, Rev &h)
{
	is >> h.num;
	return is;
}

ostream &operator<<(ostream &os, const Rev &h)
{
	os << h.num;
	return os;
}
