﻿#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    
    int number = 0;
    cout << "Введите целое число:" << endl;
    cin >> number;
    for (int i = 1; i <= 10; ++i)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}


