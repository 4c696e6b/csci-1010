// Link Parrish
// CSCI-1010-0002
// Week 6 Lab, Question 3
// this program takes points x and y, and calculates the distance to the origin

#include <iostream>
#include<math.h>

using namespace std;

int main() {
    double x, y, distance;

    cout << "Enter an x and y: ";
    cin >> x;
    cin >> y;

    distance = sqrt(pow(x, 2) + pow(y, 2));
    cout << "The distance of point (" << x << ", " << y << ") to the origin is: " << distance << endl;
    
    return 0;
}