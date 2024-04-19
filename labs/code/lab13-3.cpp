// Link Parrish
// CSCI-1010-0002
// Week 13 Lab, Question 3
// this program finds the non duplicate from an array of duplicates

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    const int l = 7;
    int a[l] = {7, 3, 3, 9, 7, 9, 1};
    int goal;

    for (int i = 0; i < l; i++) {
        int c = 0;

        for (int j = 0; j < l; j++) {
            if (a[i] == a[j]) c++;
        } 

        if (c == 1) {
            goal = a[i];
            break;
        }
    }

    cout << goal << endl;

    return 0;
}