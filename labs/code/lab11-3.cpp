// Link Parrish
// CSCI-1010-0002
// Week 11 Lab, Question 3
// this program converts binary to decimal

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    int x, n, i = 0, d = 0;
    cout << "enter a binary number: ";
    cin >> x;

    while (x > 0) {
        n = x % 10;
        if (n == 1) {d += pow(2, i);}
        i++;
        x /= 10;
        
    }

    cout << "the decimal number is: " << d << endl;

    return 0;
}