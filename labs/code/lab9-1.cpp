// Link Parrish
// CSCI-1010-0002
// Week 9 Lab, Question 1
// this program takes a weight and displays the number of power of 2 weights you need to make up that value

#include <iostream>

using namespace std;

int main() {

    double weight = 0, w16 = 0, w8 = 0, w4 = 0, w2 = 0, w1 = 0;

    cout << "enter a weight: ";
    cin >> weight;

    while (weight > 0) {
        if (weight >= 16) {
            weight -= 16;
            w16++;
        }

        else if (weight >= 8) {
            weight -= 8;
            w8++;
        }

        else if (weight >= 4) {
            weight -= 4;
            w4++;
        }

        else if (weight >= 2) {
            weight -= 2;
            w2++;
        }

        else if (weight >= 1) {
            weight -= 1;
            w1++;
        }

    }    

    cout << w16 << " 16-ounce weights" << endl;
    cout << w8 << " 8-ounce weights" << endl;
    cout << w4 << " 4-ounce weights" << endl;
    cout << w2 << " 2-ounce weights" << endl;
    cout << w1 << " 1-ounce weights" << endl;
    
    return 0;
}