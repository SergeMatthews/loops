#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int number = 0, digitsSum = 0;
    cout << "Введите целое число:" << endl;
    cin >> number;
    if (number < 0)
        number = -number;

    while (number != 0)
    {
        digitsSum += number % 10;
        number /= 10;
    }
    cout << "Сумма цифр: " << digitsSum << endl;

    return 0;
}

