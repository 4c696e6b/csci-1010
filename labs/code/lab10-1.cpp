// Link Parrish
// CSCI-1010-0002
// Week 10 Lab, Question 1
// this program is a calculator that calculates powers and roots

#include <iostream>
#include <math.h>

using namespace std;

int main() {

    
    char op = 0;
    double x, y;

    while (true) {
        cout << "scientific calculator\n";
        cout << "1. square\n2. square root\n3. exit\n";
        cin >> op;

        if (op == '3') break;
        cout << "enter a number: ";
        cin >> x;

        switch (op) {
            case '1':
                y = x * x;
                cout << x << "^2 is: " << y << endl;
                break;
            
            case '2':
                y = sqrt(x);
                cout << "sqrt of " << x << " is: " << y << endl;
                break;
        }
        
    } 
    return 0;
}