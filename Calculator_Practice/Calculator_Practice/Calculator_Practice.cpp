
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    std::cout << "Это калькулятор\n";
    while (true)
    {
        int x, y;
        char symb;
        cout << " + - Сложение  - - Вычитание  * - Умножение";
        cout << " / - Деление  s - Возведение в степень \t q - Нахождение квадратного корня";
        cout << " % - Нахождение 1% от числа  f - Найти факториал числа  l - Выход \n";
        cout << "Введите действие: ";
        cin >> symb;
        if (symb == '+')
        {
            cout << "Введите первое число: ";
            cin >> x;
            cout << "Введите второе число: ";
            cin >> y;
            cout << x + y;
            cout << "\n";
        }
        else if (symb == '-')
        {
            cout << "Введите первое число: ";
            cin >> x;
            cout << "Введите второе число: ";
            cin >> y;
            cout << x - y;
            cout << "\n";
        }
        else if (symb == '*')
        {
            cout << "Введите первое число: ";
            cin >> x;
            cout << "Введите второе число: ";
            cin >> y;
            cout << x * y;
            cout << "\n";
        }
        else if (symb == '/')
        {
            cout << "Введите первое число: ";
            cin >> x;
            cout << "Введите второе число: ";
            cin >> y;
            cout << x / y;
            cout << "\n";
        }
        else if (symb == 's') {
            cout << "Введите первое число: ";
            cin >> x;
            cout << "Введите второе число: ";
            cin >> y;
            cout << pow(x, y);
            cout << "\n";
        }
        else if (symb == 'q') {
            cout << "Введите первое число: ";
            cin >> x;
            cout << sqrt(x);
            cout << "\n";
        }
        else if (symb == '%') {
            cout << "Введите первое число: ";
            cin >> x;
            cout << (float)x / 100;
            cout << "\n";
        }
        else if (symb == 'f')
        {
            cout << "Введите первое число: ";
            cin >> x;
            int res = 1;
            for (int i = 1; i <= x; i++)
            {
                res *= i;
            }
            cout << res;
            cout << '\n';
        }
        else if (symb != 'l') {
            cout << "Ну до свидания, получается...";
            break;
        }
    }
}