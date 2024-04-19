// Link Parrish
// CSCI-1010-0002
// Week 13 Lab, Question 1
// this program takes an array and reverses the order of it

#include <iostream>

using namespace std;

int main() {
    int a[10] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55};
    int j = 9;

    for (int i = 0; i < 5; i++) {
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }

    cout << "the reversed array is:" << endl;

    for (int i = 0; i < 10; i++) {cout << a[i] << " ";}

    cout << endl;
    
    return 0;
}