#include <iostream>

using namespace std;

int main() {

    double bill, tipP, total, people;

    cout << "enter the total before the tip: ";
    cin >> bill;

    cout << "enter the tip precentage: ";
    cin >> tipP;

    cout << "enter the number of people: ";
    cin >> people;


    total = bill * (1+tipP/100) / people;

    cout << "the total per person is: $" << total << endl;

    return 0;
}