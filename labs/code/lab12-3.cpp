// Link Parrish
// CSCI-1010-0002
// Week 12 Lab, Question 3
// this program finds the mean of 10 numbers and says how many of those numbers are bigger and smaller than the mean

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    int x[10], i, mean = 0, under = 0, over = 0;

    cout << "enter 10 numbers: ";

    for (i=0; i<10; i++) {
        cin >> x[i];
        mean += x[i];
    }

    mean /= 10;

    for (i=0; i<10; i++) {
        if (x[i] < mean) under++;
        else if (x[i] > mean) over++;
    }

    cout << "mean: " << mean << endl;
    cout << "number of values greater than the mean: " << over << endl;
    cout << "number of values less than the mean: " << under << endl;    

    return 0;
}