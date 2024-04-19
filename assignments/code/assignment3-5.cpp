#include <iostream>

using namespace std;

int main() {

    int input, seconds, minutes, hours;

    cout << "enter an amount of time in seconds: ";
    cin >> input;

    seconds = input % 60;

    minutes = input / 60;
    hours = minutes / 60;

    minutes = minutes % 60;

    cout << "the time is: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;

    return 0;
}