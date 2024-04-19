// Link Parrish
// CSCI-1010-0002
// Assignment 5, Question 2
// this program takes an int and displays the hailstone sequence

#include <iostream>

using namespace std;

int main() {

    int x;
    cout << "enter an int: ";
    cin >> x;

    while (x != 1) {
        cout << x << ", ";

        if (x % 2 == 0) x /= 2;

        else x = 3 * x + 1;
    }

    cout << x << endl;

    return 0;
}