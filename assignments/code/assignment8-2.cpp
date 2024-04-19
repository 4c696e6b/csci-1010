// Link Parrish
// CSCI-1010-002
// Assignment 8, Question 2
// this program takes an int and puts it through a function

#include <iostream>
#include <math.h>

using namespace std;

int poly(int x);

int main() {

    int x;
    cout << "enter a x value: ";
    cin >> x;

    int y = poly(x);

    cout << "value of y: " << y << endl;

    return 0;
}

int poly(int x) {
    int y = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
    return y;
}