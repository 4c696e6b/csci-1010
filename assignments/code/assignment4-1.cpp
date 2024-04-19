// Link Parrish
// CSCI-1010-0002
// Assignment 4, Question 1
// this program takes a letter and says if it is a vowel or not

#include <iostream>

using namespace std;

int main() {

    char letter;

    cout << "enter a lowercase letter: ";
    cin >> letter;

    if (letter == 'a' || letter == 'e' || letter == 'i'|| letter == 'o' || letter == 'u') {
        cout << letter << " is a vowel" << endl;
    }

    else {
        cout << letter << " is not a vowel" << endl;
    }

    return 0;
}