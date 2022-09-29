#pragma once
class Data
{
	int day;
	int month;
	int year;
public:
	Data();
	Data(int a, int b,int c);
	void Print()const;
	Data Sum(int a);
	//--- get,set
	int Getday()
	{
		return day;
	}
	void Setday(int a)
	{
		day = a;
	}
	int Getmonth()
	{
		return month;
	}
	void Setmonth(int b)
	{
		month = b;
	}
	int Getyear()
	{
		return year;

	}
	void Setyear(int c)
	{
		year=c;
	}
	/// операторные методы!!!
	
	Data operator+(int a);
	int operator+(const Data& obj)const;
	Data operator-(int a);
	int operator-(const Data&obj)const;
	Data& operator +=(int a);
	Data& operator-=(int a);
	bool operator>(const Data& b)const;
	bool operator<(const Data& b) const;
	bool operator<=(const Data& b)const;
	bool operator>=(const Data& b) const;
	bool operator==(const Data& b)const;
	bool operator!=(const Data& b)const;
	//Data& operator ++(int a);//a++
	Data& operator ++();//++a
};

