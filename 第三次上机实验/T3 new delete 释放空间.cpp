#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a, b, c, sum, aver,av;
	a = 0;
	b = 0;
	c = 0;
	sum = 0;
	int *ptr;
	ptr =new int[20];
	for (int i = 0; i < 20; i++)
	{
		cin >> ptr[i];
		if (ptr[i] >= 0)
			a++;
		if (ptr[i]< 0)
			b++;
		sum = ptr[i] +sum;
	}
	aver = sum / 20;
	for (int i = 0; i < 20; i++)
	{
		c = c + (ptr[i] - aver)*(ptr[i] - aver);
	}
	av = c / 20;
	sort(ptr, ptr+20);
	cout << "��������" << endl;
	for (int i = 0; i < 20; i++)
		cout << ptr[i] << " ";
	cout << endl;
	cout <<"�����ĸ���Ϊ" << a << endl;
	cout <<"�����ĸ���Ϊ" << b << endl;
	cout << "��ֵΪ" << aver << endl;
	cout << "����Ϊ" << av << endl;
	delete[]ptr;
	system("pause");
}