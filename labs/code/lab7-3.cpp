// Link Parrish
// CSCI-1010-0002
// Week 7 Lab, Question 3
// this program takes a gender, weight, height, and age and tells you how many chocolate bars you can eat

#include <iostream>

using namespace std;

int main() {
    char gender;
    double weight, height, age, bars;

    cout << "Enter F for female and M for male: ";
    cin >> gender;
    
    cout << "Enter the person's weight, height, and age: ";
    cin >> weight >> height >> age;

    if (gender == 'F' || "f") 
        bars = (665 + (4.3 * weight) + (4.7 * height) - (4.7 * age)) / 230;
    
    else
        bars = (66 + (6.3 * weight) + (12.9 * height) - (6.8 * age)) / 230;

    cout << "Number of chocolate bars: " << bars << endl;
    return 0;
}