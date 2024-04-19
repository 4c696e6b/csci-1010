// Link Parrish
// CSCI-1010-0002
// Assignment 4, Question 5
// this program takes a letter grade and prints a response based on the grade

#include <iostream>

using namespace std;

int main() {

    char grade;

    cout << "enter a letter grade: ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent" << endl;
            break;

        case 'B':
            cout << "Good" << endl;
            break;

        case 'C':
            cout << "Average" << endl;
            break;

        case 'D':
            cout << "Poor" << endl;
            break;

        case 'F':
            cout << "Failing" << endl;   
    }

    return 0;
}