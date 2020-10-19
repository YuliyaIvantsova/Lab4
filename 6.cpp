#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a, b, c, x;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите c: ";
	cin >> c;
	if ((b * b - 4 * a * c) >= 0)
	{
		x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "x1 = " << x << endl;
		x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "x2 = " << x << endl;
	}
	else
	{
		cout << "Корней нет." << endl;
	}
	return 0;
}
