// Link Parrish
// CSCI-1010-0002
// Week 11 Lab, Question 4
// this program takes a number and displays all even perfect squares smaller than it

#include <iostream>

using namespace std;

int main() {

    int x, s, r;
    cout << "enter a number: ";
    cin >> x;
    
    for (int i = 1;;i++) {
        s = i * i;
        if (s <= x) {if (s % 2 == 0) {cout << s << "  ";}}
        else break;
    }
    cout << endl;
   
    return 0;
}