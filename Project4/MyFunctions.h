#pragma once
#include<iostream>
#include"Data.h"
using namespace std;

Data& operator--(Data& obj)// реализация префиксного декремента
{
	obj.Setday(obj.Getday() - 5);
	return obj;
}
Data& operator--(Data& obj, int x)// реализация постфиксного декремента
{
	Data rez(obj);
	obj.Setday(obj.Getday() - 5);//меняем состояние объектов уменьшаем поля
	return obj;  //возвращаем то что было вначале
}
Data& operator++(Data& obj)// реализация префиксного инкремента
{
	obj.Setday(obj.Getday() + 5);
	return obj;
}
Data& operator++(Data& obj, int x)// реализация постфиксного декремента
{
	Data rez(obj);
	obj.Setday(obj.Getday() + 5);//меняем состояние объектов уменьшаем поля
	return obj;  //возвращаем то что было вначале
}
Data operator+(int a, Data& b)
{
	Data rez;
	rez.Setday(b.Getday() + a);
	return rez;
}
Data operator-(int a, Data& b)
{
	Data rez;
	rez.Setday(b.Getday() - a);
	return rez;
}
Data operator-=(Data& obj, int a)
{
	obj.Setday(obj.Getday() - a);
	obj.Setday(obj.Getday() - a);
	return obj;
}
Data operator+=(Data& obj, int a)
{
	obj.Setday(obj.Getday() - a);
	obj.Setday(obj.Getday() - a);
	return obj;
}
bool operator<(Data& a, Data& b)
{
	if (b.Getday() < a.Getday())
	{
		return true;
	}
	return false;
}
bool operator>(Data& b, Data& a)
{
	if (a.Getday() > b.Getday())
	{
		return true;
	}
	return false;
}
bool operator<=(Data& a, Data& b)
{
	if (a.Getday() <= b.Getday())
	{
		return true;
	}
	return false;
}
bool operator>=(Data& a, Data& b)
{
	if (a.Getday() >= b.Getday())
	{
		return true;
	}
	return false;
}
bool operator==(Data& a, Data& b)
{
	if (a.Getday() < b.Getday() && a.Getday() < b.Getday())
	{
		return true;
	}
	return false;
}
bool operator!=(int a, Data& b)
{
	if (a < b.Getday() && a < b.Getday())
	{
		return true;
	}
	return false;
}
