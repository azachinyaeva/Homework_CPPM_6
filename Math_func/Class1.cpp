#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num1 = 0;
    int num2 = 0;
    int choice = 0;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    cin >> choice;
    switch (choice) {
    case 1:
        cout << num1 << " плюс " << num2 << " = " << add(num1, num2) << '\n';
        break;
    case 2:
        cout << num1 << " минус " << num2 << " = " << subtract(num1, num2) << '\n';
        break;
    case 3:
        cout << num1 << " умножить на " << num2 << " = " << multiply(num1, num2) << '\n';
        break;
    case 4:
        cout << num1 << " разделить на " << num2 << " = " << divide(num1, num2) << '\n';
        break;
    case 5:
        cout << num1 << " в степени " << num2 << " = " << pwr(num1, num2) << '\n';
        break;
    default:
        cout << "Неверно выбрана операция!";
        break;
    } 
        return 0;
}

