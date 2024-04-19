#include <iostream>

using namespace std;

int main() {

    double miles, km;

    cout << "Enter an number of miles: ";
    cin >> miles;

    km = miles * 1.6;
    cout <<  miles << " miles is equivalent to " << km << " kilometers " << endl;

    return 0;
}
