// Link Parrish
// CSCI-1010-0002
// Week 8 Lab, Question 1
// this program takes a balance and displays the interest, total, and minimum payment

#include <iostream>

using namespace std;

int main() {
    double balance, total, interest, payment;

    cout << "Enter a balance: ";
    cin >> balance;

    if (balance < 1000) {
        interest = balance * 0.015;
    }

    else {
        interest = 15 + (balance - 1000) * 0.01;
    }

    total = balance + interest;

    if (total < 10) {
        payment = total;
    }

    else if (total * 0.1 < 10) {
        payment = 10;
    }

    else {
        payment = 0.1 * total;
    }

    cout << "The interest due is: $" << interest << endl;
    cout << "The total due is: $" << total << endl;
    cout << "The minimum payment due is: $" << payment << endl;

    return 0;
}