#include<iostream>
using namespace std;
#include"Circle.h"
int main()
{
	Circle c1(3.5), c2;
	cout << "area of c1=" << c1.Area() << ",circunference of c1=" << c1.Circumference() << endl;
	cout << "area of c2=" << c1.Area() << ",circunference of c2=" << c1.Circumference() << endl;
	system("pause");
	return 0;
}