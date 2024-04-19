// Link Parrish
// CSCI-1010-0002
// Assignment 7
// this program takes numbers and adds up the even ones

#include <iostream>

using namespace std;

int main() {

    const int size = 100;
    int x[size], j = 0, y, max;
    cout << "enter numbers ending with -1: ";

    while (true) {
        cin >> y;
        if (y == -1) break;
        else {
            x[j] = y;
            j++;
        }
    }

    cout << "array so far: " << endl;
    for (int i=0; i<j; i++) {
        cout << x[i] << " ";
        if (i == 0) max = x[i];
        else if (x[i] > max) max = x[i];
    }
    cout << endl;
    cout << "largest: " << max << endl;

    x[j] = 10;
    j++;
    x[j] = 15;
    j++;

    for (int i=1; i<j; i++) {
        for (int k=0; k<j-1; k++) {
            if (x[k] < x[k+1]) {
                int temp = x[k];
                x[k] = x[k+1];
                x[k+1] = temp;
            }
        }
    }

    cout << "sorted list: " << endl;
    for (int i=0; i<j; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    return 0;
}