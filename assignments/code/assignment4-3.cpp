// Link Parrish
// CSCI-1010-0002
// Assignment 4, Question 3
// this program takes income as an input and displays tax

#include <iostream>

using namespace std;

int main() {

    double income, tax;

    cout << "enter a taxable income: ";
    cin >> income;

    if (income <= 750) {
        tax = income * 0.01;
    }

    else if (income <= 2250) {
        tax = 7.5 + (income - 750) * 0.02;
    }

    else if (income <= 3750) {
        tax = 37.5 + (income - 2250) * 0.03;
    }

    else if (income <= 5250) {
        tax = 82.5 + (income - 3750) * 0.04;
    }

     else {
        tax = 142.5 + (income - 5250) * 0.05;
    }

    cout << "the tax due is: $" << tax << endl;

    return 0;
}