// Link Parrish
// CSCI-1010-0002
// Week 10 Lab, Question 2
// this program calculates the gcd

#include <iostream>

using namespace std;

int main() {

   int x, y, r;
   cout << "enter 2 numbers: ";
   cin >> x >> y;

   while (true) {
       if (x == 0) break;

        r = y % x;
        y = x;
        x = r;
   }
   cout << "gcd: " << y << endl;
    return 0;
}