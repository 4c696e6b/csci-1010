#include <iostream>

using namespace std;

int main() {

    int quarters, dimes, nickels, total;

    cout << "Enter a number of quarters: ";
    cin >> quarters;

    cout << "Enter a number of dimes: ";
    cin >> dimes;

    cout << "Enter a number of nickels: ";
    cin >> nickels;

    quarters = quarters * 25;
    dimes = dimes * 10;
    nickels = nickels * 5;

    total = quarters + dimes + nickels;
    cout << "This adds up to " << total << " cents" << endl;

    return 0;
}
