#include <iostream>
using namespace std;

int Fun(const int &x, int &y, int z)   		//对第1个实际参数变量保护，只能访问不能修改
{   //  x++ ;                  		//此句若作为函数的语句，则报错，用const限制后只�?
	//访问x，不能修改x
	z++;                      		//对值形式参数的修改不会影响对应的实际参数变�?
	y = x + y + z;                  		//通过修改y改变�?个实际参数变量的�?
	return y;
}

int main()
{
	int a = 1, b = 2, c = 3, d = 0;
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	d = Fun(a, b, c);               		//�?个实际参数和�?个实际参数都不可能被修改
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	system("pause");
	return 0;
}
