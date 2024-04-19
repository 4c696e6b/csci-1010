// Link Parrish
// CSCI-1010-0002
// Week 11 Lab, Question 2
// this program takes a number and outputs the number of digits

#include <iostream>

using namespace std;

int main() {

   int x, i = 0;
   cout << "enter a number: ";
   cin >> x;

   while (x != 0) {
       i++;
       x /= 10;
   }
   cout << "number of digits: " << i << endl;
    return 0;
}