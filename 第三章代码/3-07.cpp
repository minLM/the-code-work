#include<iostream>
using namespace std;
class Date
{
public:
	int year, month, day;
protected:
	
	int GetDay()
	{
		return day;
	}
public:
	void Init(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	int GetYear()
	{
		return year;
	}
	void SetYear(int y)
	{
		year = y;
	}
}DateA,DateB;
int main()
{
	DateA.Init(2017, 7, 23);
	DateB.SetYear(2012);
	cout << "DateA.year=" << DateA.GetYear() << endl;
	cout << "DateA.day=" << DateA.day << endl;
	cout << "DateA.year=" << DateA.year << endl;
	cout << "DateB.year=" << DateB.year << endl;
	cout << "DateB.year=" << DateB.GetYear() << endl;
	system("pause");
	return 0;
}