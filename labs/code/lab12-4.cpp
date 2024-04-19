// Link Parrish
// CSCI-1010-0002
// Week 12 Lab, Question 4
// this program displays the first 20 harmonic numbers

#include <iostream>

using namespace std;

int main() {

    int i;
    double h[20];
    h[-1] = 0;

    for (i=0; i<20; i++) {
        h[i] = h[i-1] + 1.0 / (i + 1);
        cout << h[i] << " ";
    }

    cout << endl;

    return 0;
}