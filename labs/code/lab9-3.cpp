// Link Parrish
// CSCI-1010-0002
// Week 8 Lab, Question 3
// this program takes 3 ints and displays the smallest one

#include <iostream>

using namespace std;

int main() {
    int a, b, c, min;

    cout << "Enter 3 ints: ";
    cin >> a >> b >> c;

    if (a <= b) {
        if (a <= c) min = a;
        else if (c <= b) min = c;
    }

    else if (b <= a) {
        if (b <= c) min = b;
    }
    
    cout << "min: " << min << endl;

    return 0;
}