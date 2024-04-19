// Link Parrish
// CSCI-1010-0002
// Week 7 Lab, Question 2
// this program takes the a number up to 4 digits and tells you how many digits there are

#include <iostream>

using namespace std;

int main() {
    int num, digit;

    cout << "Enter a number with no more than 4 digits: ";
    cin >> num;

    if (num >= 0 and num < 10) digit = 1;

    else if (num < 100) digit = 2;

    else if (num < 1000) digit = 3;

    else digit = 4; 
    
    cout << "There are " << digit << " digits" << endl;
    return 0;
}