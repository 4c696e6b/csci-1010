// Link Parrish
// CSCI-1010-0002
// Week 12 Lab, Question 1
// this program takes 10 numbers and reverses the order of them

#include <iostream>

using namespace std;

int main() {
    int i;
    int nums[10];

    cout << "enter 10 numbers: ";

    for(i=0; i<10; i++) {
        cin >> nums[i];
    }

    cout << "the reversed order is: ";

    for (i=9; i>=0; i--) {
        cout << nums[i] << " ";
    }

    cout << endl;
    
    return 0;
}