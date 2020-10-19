#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a;
	double q;
	cout << "Введите число: ";
	cin >> a;

	if (a > 0)
	{
		for (int i = 0; i <= 10; i++)
		{
			q = a * i;
			cout << a << "*" << i << "=" << q << "\n";
		}
	}

	else if (a == 0)
	{
		cout << "Умножение всех чисел равно 0!" << "\n";
	}

	else if (a < 0)
	{
		for (int i = 0; i <= 10; i++)
		{
			q = a * i;
			cout << a << "*" << i << "=" << q << "\n";
		}
	}
	return 0;
}
