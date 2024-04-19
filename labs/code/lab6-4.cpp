// Link Parrish
// CSCI-1010-0002
// Week 6 Lab, Question 3
// this program takes the date and gives you the day of the week

#include <iostream>

using namespace std;

int main() {
    int year, month, day, weekDay;
    int y, x, m;

    cout << "Enter the year: ";
    cin >> year;
    
    cout << "Enter the month as a number: ";
    cin >> month;

    cout << "Enter the date: ";
    cin >> day;

    y = year - (14 - month) / 12;
    x = y + y / 4 - y / 100 + y / 400;
    m = month + 12 * ((14 - month) / 12) - 2;
    weekDay = (day + x + (31 * m) / 12) % 7;

    cout << "Day of week: " << weekDay << endl;
    return 0;
}