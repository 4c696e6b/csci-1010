// Link Parrish
// CSCI-1010-0002
// Assignment 4, Question 2
// this program takes 2 ints and displays which is larger

#include <iostream>

using namespace std;

int main() {

    int a, b;

    cout << "enter 2 ints: ";
    cin >> a >> b;

    if (a < b) {
        cout << a << " is less than " << b << endl;
    }

    else if (a > b) {
        cout << a << " is greater than " << b << endl;
    }

    else {
        cout << a << " is equal to " << b << endl;
    }

    return 0;
}