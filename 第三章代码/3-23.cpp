#include"Date6.h"
int main()
{
	Date YourBirthday(1990, 10, 17);
	Date MyBirthday(1990, 10, 10, 17);
	if (Equal(YourBirthday, MyBirthday))
		cout << "Birthday is same!\n";
	else
		cout << "Birthday is not same!\n";
	system("pause");
	return 0;
}