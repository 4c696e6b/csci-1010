// Link Parrish
// CSCI-1010-0002
// Assignment 6, Question 3
// this program takes finds the 4 digit number that meet certain requirements

#include <iostream>

using namespace std;

int main() {

    int i, i1, i2, i3, i4, sum;
    
    for (i=1000; i<10000; i++) {

        i1 = (i / 1000) % 10;
        i2 = (i / 100) % 10;
        i3 = (i / 10) % 10;
        i4 = i % 10;
        sum = i1 + i2 + i3 + i4;

        if (i3 * 3 == i1) {
            if (i % 2 == 1) {
                if (sum == 27) {
                    cout << i << endl;
                }
            }
        }
    }

    return 0;
}