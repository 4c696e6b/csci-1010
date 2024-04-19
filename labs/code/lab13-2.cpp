// Link Parrish
// CSCI-1010-0002
// Week 13 Lab, Question 2
// this program displays does multiple operations on an array

#include <iostream>

using namespace std;

int main() {

    int a[100];

    cout << "enter 8 numbers: ";
    for (int i = 0; i < 8; i++) {
        cin >> a[i];
    }

    cout << "entered array: " << endl;
    for (int i = 0; i < 8; i++) {
        cout << a[i] << " ";
    } 
    cout << endl;

    int temp;
    for (int i = 7; i >= 0; i--) {
        a[i+1] = a[i];
        if (i == 0) {
            a[0] = 18;
        }
    }

    cout << "array with 18: " << endl;
    for (int i = 0; i < 9; i++) {
        cout << a[i] << " ";
    } 
    cout << endl;

    for (int i=1; i<9; i++) {
        for (int k=0; k<9-1; k++) {
            if (a[k] < a[k+1]) {
                int temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }

    cout << "sorted array: " << endl;
    for (int i = 0; i < 9; i++) {
        cout << a[i] << " ";
    } 
    cout << endl;

    return 0;
}