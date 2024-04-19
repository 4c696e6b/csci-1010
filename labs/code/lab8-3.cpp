// Link Parrish
// CSCI-1010-0002
// Week 8 Lab, Question 3
// this program takes 4 ints and displays the largest and smallest one

#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, g1, g2, l1, l2, min, max;

    cout << "Enter 4 ints: ";
    cin >> a >> b >> c >> d;

    if (a > b) {
        g1 = a;
        l2 = b;
    }

    else {
        g1 = b;
        l1 = a;
    }

    if (c > d) {
        g2 = c;
        l2 = d;
    }

    else {
        g2 = d;
        g2 = c;
    }

    if (g1 > g2) max = g1;
    else max = g2;

    if (l1 > l2) min = l2;
    else min = l1;

    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
    return 0;
}