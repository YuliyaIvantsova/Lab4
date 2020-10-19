#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    float x, ln;
    int n;
    bool com = false;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите n: ";
    cin >> n;
    ln = x;
    for (int i = 2; i <= n; i++)
    {
        if (!com)
            ln -= pow(x, i)/i;
        else
            ln += pow(x, i)/i;
        com = !com;
    }
    cout << "ln(1+x)= " << ln << endl;
    return 0;
}