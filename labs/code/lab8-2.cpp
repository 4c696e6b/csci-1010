// Link Parrish
// CSCI-1010-0002
// Week 8 Lab, Question 2
// this program takes the a number and displays it written in english

#include <iostream>
#include <string>

using namespace std;

int main() {
    int num, d1, d2;
    string tens, ones;

    cout << "Enter a 2 digit number >= 20: ";
    cin >> num;

    d1 = num / 10;
    d2 = num % 10;

    switch (d1) {
        case 2:
            tens = "twenty";
            break;

        case 3:
            tens = "thirty";
            break;

        case 4:
            tens = "forty";
            break;

        case 5:
            tens = "fifty";
            break;

        case 6:
            tens = "sixty";
            break;

        case 7:
            tens = "seventy";
            break;

        case 8:
            tens = "eighty";
            break;

        case 9:
            tens = "ninety";
            break;

    }
 
        switch (d2) {
        case 2:
            ones = "-two";
            break;

        case 3:
            ones = "-three";
            break;

        case 4:
            ones = "-four";
            break;

        case 5:
            ones = "-five";
            break;

        case 6:
            ones = "-six";
            break;

        case 7:
            ones = "-seven";
            break;

        case 8:
            ones = "-eight";
            break;

        case 9:
            ones = "-nine";
            break;

        case 0:
            ones = "";
            break;

    }

    cout << tens + ones << endl;
    return 0;
}