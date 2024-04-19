#include <iostream>

using namespace std;

int main() {

    double x, v, t, g, total;

    cout << "enter a x: ";
    cin >> x;

    cout << "enter a v: ";
    cin >> v;

    cout << "enter a t: ";
    cin >> t;

    g = 9.80665;

    total = x + v * t - (g * t * t) / 2;

    cout << "the total is:" << total << endl;

    return 0;
}