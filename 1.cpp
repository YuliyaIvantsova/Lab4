#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int x;
	cout << "Введите целое число: ";
	cin >> x;
	cout << "Числа, на которые делится введённое число: " << endl;
	for (int i = 1; i <= 1000; i++)
	{
		if (x % i == 0)
		{
			cout << i << endl;
		}
	}
	return 0;
}
