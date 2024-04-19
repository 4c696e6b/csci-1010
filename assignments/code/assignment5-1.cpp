// Link Parrish
// CSCI-1010-0002
// Assignment 5, Question 1
// this program takes numbers and adds up the even ones

#include <iostream>

using namespace std;

int main() {

    int x, sum = 0;
    cout << " enter numbers ending with 0: ";

    while (true) {
        cin >> x;
        if (x == 0) break;
        else if (x % 2 == 0) sum += x;
    }

    cout << "the sum of the even numbers is: " << sum << endl;

    return 0;
}