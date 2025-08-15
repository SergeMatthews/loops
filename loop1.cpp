#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int user_number = 0, sum = 0;
    do {
        cout << "Введите целое число или число '0', чтобы закончить:" << endl;
        cin >> user_number;
        sum += user_number;
    } while (user_number != 0);
    cout << "Сумма: " << sum << endl;
    
    return 0;
}


