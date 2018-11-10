#include"Date5.h"
bool Equal(Date &DateA, Date &DateB)
{
	return (DateA.GetYear() == DateB.GetYear() && DateA.GetMonth() == DateB.GetMonth() && DateA.GetDay() == DateB.GetDay());
}
int main()
{
	Date YourBirthday(1990, 10, 17);
	Date MyBirthday(1990, 10, 17);
	if (Equal(YourBirthday, MyBirthday))
		cout << "Birthday is the same!\n";
	else
		cout << "Birthday is not same!\n";
	system("pause");
	return 0;
}