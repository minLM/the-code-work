#include <iostream>
#include <iomanip>

using namespace std;                         //使用C++的标准名字空�?

int sum = 5000; 		                    //定义全局变量sum 

int main()
{
	int arr[3] = { 10, 20, 30 };
	{                                       //一个小程序块的开�?
		int i, sum = 0;                     //定义局部变量sum               
		for (i = 0; i < 3; i++)
		{
			sum += arr[i];                  //求和，结果存于局部变量sum�?
		}
		cout << "sum=" << sum << endl;       //输出局部变量sum的�?
		::sum += sum;	                     //通过域解析符在同名局部变量的作用域内对全局sum访问
		cout << "全局sum=" << ::sum << endl;  //输出全局sum变量的�?
	}                                        //小程序块的结�?

	sum *= 2;                                //这是全局sum,因为局部变量sum的作用域已结�?
	cout << "sum=" << sum << endl;           //输出全局sum变量的�?

	int sum = 200;                        //定义另一个局部变量sum   	
	cout << "sum=" << sum << endl;           //输出刚定义的局部变量sum的�?
	::sum += sum;           	          //通过域解析符使全局sum在同名局部sum的作用域可见	

	cout << "全局sum=" << ::sum << endl;     //输出全局sum变量的�?
	system("pause");
	return 0;
}


