// Link Parrish
// CSCI-1010-0002
// Week 11 Lab, Question 1
// this program finds the smallest of 10 numbers

#include <iostream>

using namespace std;

int main() {
    int x, i, smallest;

    for(i=0;i<10;i++) {
        cout << "enter a number: ";
        cin >> x;

        if (i==0) {smallest = x;}

        if (x < smallest) smallest = x;
    }

    cout << "the smallest number is: " << smallest << endl;
    
    return 0;
}