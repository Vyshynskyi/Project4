#include "Data.h"
#include<iostream>
using namespace std;

Data::Data()
{
	day = month = year = 0;
}
Data::Data(int a, int b, int c)
{
	day = a;
	month = b;
	year = c;
}
void Data::Print()const
{
	cout << "Day:" << day << "\tMonth:" << month << "\tYear:" << year << endl;
}

Data Data::Sum(int a)
{
	Data temp;
	temp.day = day + a;
	temp.month = month;
	temp.year = year;
	return temp;

}

Data Data::operator+(int a)
{
	Data temp;
	temp.day = day + a;
	temp.month = month;
	temp.year = year;
	return temp;
}

Data Data::operator-(int a)
{
	Data temp;
	temp.day = day - a;
	temp.month = month;
	temp.year = year;
	return temp;
}

Data& Data::operator+=(int a)
{
	day += a;
	month = month;
	year = year;
	return *this;
}

Data& Data::operator-=(int a)
{
	day -= a;
	month = month;
	year = year;
	return*this;
}

bool Data::operator>(const Data& b) const
{
	if (day > b.day && month > b.month)
	{
		return true;
	}
	return false;

}

bool Data::operator<(const Data& b) const
{
	if (day < b.day && month < b.month)
	{
		return true;
	}
	return false;
}

bool Data::operator>=(const Data& b) const
{
	if (day >= b.day && month >= b.month)
	{
		return true;
	}
	return false;
}

bool Data::operator<=(const Data& b) const
{
	if (day <= b.day && month <= b.month)
	{
		return true;
	}
	return false;
}
bool Data::operator==(const Data& b) const
{
	if (day == b.day && month == b.month)
	{
		return true;
	}
	return false;
}
bool Data::operator!=(const Data& b) const
{
	if (day != b.day && month != b.month)
	{
		return true;
	}
	return false;
}
