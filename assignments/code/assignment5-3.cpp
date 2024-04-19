// Link Parrish
// CSCI-1010-0002
// Assignment 5, Question 3
// this program takes income as an input and displays tax

#include <iostream>

using namespace std;

int main() {

    double x = 1, i = 3;
    bool op = true;

    while (i < 100) {
        if (op) {
            x = x - 1/i;
            op = false;
        }

        else {
            x = x + 1/i; 
            op = true;
        }

        i += 2;
    }

    x = x * 4;
    cout << x << endl;

    return 0;
}