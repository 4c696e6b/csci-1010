#include <iostream>

using namespace std;

int main() {
    double hours, gross, social, federal, state, net;

    cout << "Enter the number of hours worked: ";
    cin >> hours;

    gross = (40 * 16.78) + (hours - 40) * 16.78 * 1.5;
    cout << "Gross pay: $" << gross << endl;

    social = gross * 0.06;
    cout << "Social Security Tax: $" << social << endl;

    federal = gross * 0.14;
    cout << "Federal Income Tax: $" << federal << endl;

    state = gross * 0.05;
    cout << "State Income Tax: $" << state << endl;

    cout << "Union Dues: $10.0" << endl;

    net = gross - social - federal - state - 10;
    cout << "Net Income: $" << net << endl;
    return 0;
}