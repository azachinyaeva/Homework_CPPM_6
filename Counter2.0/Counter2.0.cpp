#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string answer;
    string command;
    float counter_value;
    Counter counter;
    cout << "Do you want to specify an initial counter value? Enter yes or no: ";
    cin >> answer;

    if (answer == "yes") {
        cout << "Enter the initial counter value: ";
        cin >> counter_value;
        counter.set_value(counter_value);
    }

    while (true) {
        cout << "Enter the command ('+', '-', '=' or 'x'): ";
        cin >> command;

        if (command == "+") {
            cout << counter.increase() << '\n';
        }
        else if (command == "-") {
            cout << counter.decrease() << '\n';
        }
        else if (command == "=") {
            cout << counter.show() << '\n';
        }
        else if (command == "x") {
            cout << "Good bye!";
            exit(0);
        }
        else {
            cout << "Wrong command!";
        }
    }
    return 0;
}