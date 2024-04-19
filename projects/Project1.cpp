// Link Parrish
// CSCI-1010-0002
// Project 1
// this program loops through a checkout menu and displays the total

#include <iostream>

using namespace std;

int main() {

    double total = 0;
    int quanity;
    char order;
    bool flag;
    
    while (true) {

        flag = true;

        cout << "\nwelcome to my restaurant!\n";
        cout << "\nMenu:\n";
        cout << "\t 1. Burger\t\t $4.99\n";
        cout << "\t 2. Chicken Sandwich\t $3.99\n";
        cout << "\t 3. Fountain Drink\t $0.99 \n\n";

        while (flag) {

            cout << "What would you like to order? (enter a number or c for checkout): ";
            cin >> order;

            switch (order) {
                case ('1'):
                    cout << "how many burgers would you like: ";
                    cin >> quanity;
                    total += 4.99 * quanity;
                    break;

                case ('2'):
                    cout << "how many chicken sandwiches would you like: ";
                    cin >> quanity;
                    total += 3.99 * quanity;
                    break;

                case ('3'):
                    cout << "how many fountain drinks would you like: ";
                    cin >> quanity;
                    total += 0.99 * quanity;
                    break;

                case ('c'):
                case ('C'):
                    cout << "\nyour total is: $" << total << endl;
                    cout << "thank you, please come again!\n\n";
                    total = 0;
                    flag = false;
                    break;

                default:
                cout << "invalid option\n";
            }
        }
    }
    return 0;
}