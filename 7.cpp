#include <iostream>
using namespace std;
int main()
{
	int i;
	do
	{
		setlocale(0, "");
		double a;
		double f = 1;
		cout << "Введите число: ";
		cin >> a;

		for (a; a > 0; a--)
		{
			f*= a;
		}
		cout << "Его факториал: " << f << endl;
		cout << "0 - завершить программу, 1 - продолжить" << endl;
		cin >> i;
	}
	while (i!= 0);
}