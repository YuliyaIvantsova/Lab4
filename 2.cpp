#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double A, B;
	cout << "Введите A: ";
	cin >> A;
	cout << "Введите B: ";
	cin >> B;
	if (A > 0 && B > 0)
	{
		if (A != 0)
		{
			double x = B / A;
			cout << "Корень уравнения Ax=B: " << x << endl;
		}
		else
		{
			cout << "Решений нет. На ноль делить нельзя!" << endl;
		}
	}
	else
	{
		cout << "Необходимо ввести два положительных числа!" << endl;
	}
	return 0;
}
