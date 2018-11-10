#include"Date5.h"
Date &Fun(Date &pDate)
{
	pDate.ModifyDate(2012, 5, 1);
	cout << "refernce pDate:\n";
	pDate.Display();
	return pDate;
}
int main()
{
	Date DateA(2010), tDate;
	cout << "Before right Fun,DateA:\n";
	DateA.Display();
	cout << "Beforre right Fun,tDate:\n";
	tDate.Display();
	tDate = Fun(DateA);
	cout << "After right Fun,DateA:\n";
	DateA.Display();
	cout << "After right Fun,tDate:\n";
	tDate.Display();
	Fun(DateA) = Date(1998, 10, 5);
	cout << "After left Fun,DateA:\n";
	DateA.Display();
	cout << "After left Fun,tDate:\n";
	tDate.Display();
	system("pause");
	return 0;
}