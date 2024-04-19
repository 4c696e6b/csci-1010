// Link Parrish
// CSCI-1010-0002
// Assignment 6, Question 4
// this program takes income as an input and displays tax

#include <iostream>

using namespace std;

int main() {

    int x, i, max, min, sum = 0, mean;
    for (i=1; i<=10; i++) {

        cout << "enter grade " << i << ": ";
        cin >> x;

        if (i == 1) {
            max = x;
            min = x;
        }

        if (x > max) max = x;
        if (x < min) min = x;

        sum += x;

    }

    mean = sum / 10;

    cout << "the highest grade is: " << max << " the lowest grade is: " << min << " the mean of the grades is: " << mean << endl;


    return 0;
}