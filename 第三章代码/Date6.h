#include<iostream>
using namespace std;

class Date
{

	int year, month, day;
public:
	Date(int y = 2007, int m = 1, int d = 1);
	Date(const Date &date);
	~Date();
	int GetYear();
	int GetMonth();
	int GetDay();
	void ModifyDate(int, int, int);
	void Display();
	friend bool Equal(Date&, Date&);
};
Date::~Date()
{
	cout << "Destructor called.\n";
}
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	cout << "Constructor called.\n";

}
Date::Date(const Date &date)
{
	year = date.year;
	month = date.month;
	day = date.day;
	cout << "Copy Constructor called.\n";
}
bool Equal(Date &DateA, Date &DateB)
{
	return (DateA.year == DateB.year &&DateA.month == DateB.month&&DateA.day == DateB.day);
}
int Date::GetYear()
{
	return year;
}
int Date::GetMonth()
{
	return month;
}
int Date::GetDay()
{
	return day;
}
void Date::Display()
{
	cout << year << "-" << month << "-" << day << endl;
}
void Date::ModifyDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}