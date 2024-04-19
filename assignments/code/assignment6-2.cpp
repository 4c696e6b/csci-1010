// Link Parrish
// CSCI-1010-0002
// Assignment 6, Question 2
// this program takes 10 numbers and counts how many are greater than 60

#include <iostream>

using namespace std;

int main() {
    int x, y = 0, i;
        
        for (i=0; i<10; i++) {
            cout << "enter a number: ";
            cin >> x;

            if (x > 60) y++;
        }
    
    cout << "there are " << y << " numbers greater than 60" << endl;

    return 0;
}