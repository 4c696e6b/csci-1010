#include <iostream>

using namespace std;

int main() {

    int num1, num2, num2a, num2b;

    cout << "Enter a 2-digit number: ";
    cin >> num1;

    num2a = num1 / 10;
    num2b = num1 % 10 * 10;
    num2 = num2a + num2b;

    cout << "The reversed number is: " << num2 << endl;

    return 0;
}
