// Link Parrish
// CSCI-1010-0002
// Week 6 Lab, Question 1
// this program calculates the effective temperature from the temperature and windspeed

#include <iostream>
#include<math.h>

using namespace std;

int main() {
    double temp, velocity, effectiveTemp;

    cout << "Enter the temperature: ";
    cin >> temp;

    cout << "Enter the wind velocity: ";
    cin >> velocity;

    effectiveTemp = 35.74 + 0.6215 * temp + (0.4275 * temp - 35.75) * pow(velocity, 0.16);
    cout << "The effective temperature is: " << effectiveTemp << endl;
    return 0;
}