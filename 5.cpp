#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "");
    for (int a = 1; a <= 100; a++)
    {
        for (int b = 1; b <= 100; b++)
        {
            double c = sqrt(pow(a, 2) + pow(b, 2));
            if (int(c) == c)
            {
                cout << "Уравнение: " << a << "^2" << " + " << b << "^2" << " = " << c << "^2" << endl;
            }
        }
    }
    return 0;
}