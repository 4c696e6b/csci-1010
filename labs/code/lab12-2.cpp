// Link Parrish
// CSCI-1010-0002
// Week 12 Lab, Question 2
// this program displays the first 40 fibonacci numbers

#include <iostream>

using namespace std;

int main() {

    int seq[40], i, x = 0, y = 1;

    for (i=0; i < 40; i++) {
        if (i == 0) seq[i] = 0;
        else if (i == 1) seq[i] = 1;
        else {
            seq[i] = seq[x] + seq[y];
            x++;
            y++;
        }
    }

    for (i=0; i<40; i++) {
        cout << seq[i] << " ";
    }
    cout << endl;

    return 0;
}