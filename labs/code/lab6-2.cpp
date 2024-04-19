// Link Parrish
// CSCI-1010-0002
// Week 6 Lab, Question 2
// this program takes an amount of money and splits it into the smallest amount of bills

#include <iostream>

using namespace std;

int main() {
    int dollars, twentys, tens, fives, ones;

    cout << "Enter the number of dollars: ";
    cin >> dollars;

    twentys = dollars / 20;
    dollars = dollars % 20;

    tens = dollars / 10;
    dollars = dollars % 10;

    fives = dollars / 5;
    ones = dollars % 5;

    cout << "20s: " << twentys << endl;
    cout << "10s: " << tens << endl;
    cout << "5s: " << fives << endl;
    cout << "1s: " << ones << endl;
    return 0;
}