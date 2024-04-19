#include <iostream>

using namespace std;

int main() {

    double raidus, height, volume;

    cout << "Enter the radius of the cylinder: ";
    cin >> raidus;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    volume = 3.14 * raidus * raidus * height;
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}