// Link Parrish
// CSCI-1010-0002
// Week 7 Lab, Question 1
// this program takes 3 angles and tells you if they form a triangle

#include <iostream>

using namespace std;

int main() {
    double a1, a2, a3, sum;

    cout << "Enter 3 angles: ";
    cin >> a1 >> a2 >> a3;

    sum = a1 + a2 + a3;

    if (sum == 180) {
        cout << "The triangle is valid" << endl;
    }

    else {
        cout << "The triangle is not valid" << endl;
    }

    return 0;
}