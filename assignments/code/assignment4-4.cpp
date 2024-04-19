// Link Parrish
// CSCI-1010-0002
// Assignment 4, Question 4
// this program takes a year and displays weather or not it is a leap year

#include <iostream>

using namespace std;

int main() {

    int year;

    cout << "enter a year: ";
    cin >> year;

    if (year % 4 != 0) {
        cout << "it is not a leap year" << endl;
    }

    else if (year % 100 != 0) {
        cout << "it is a leap year" << endl;
    }

    else if (year % 400 != 0) {
        cout << "it is not a leap year" << endl;
    }

    else {
        cout << "it is a leap year" << endl;
    }

    return 0;
}