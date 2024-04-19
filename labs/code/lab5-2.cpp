#include <iostream>

using namespace std;

int main() {
    int burgers, coffees;
    double total;

    cout << "Enter a number of cheeseburgers: ";
    cin >> burgers;

    cout << "Enter a number of cups of coffee: ";
    cin >> coffees;

    total = (burgers * 5.89 + coffees * 3.99) * 1.07;
    cout << "The total cost is: $" << total << endl;

    return 0;
}