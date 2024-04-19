// Link Parrish
// CSCI-1010-0002
// Week 9 Lab, Question 2
// this program allows 2 players to play rock paper sissors

#include <iostream>

using namespace std;

int main() {
    char p1, p2;

    cout << "Player 1's Choice ";
    cin >> p1;

    cout << "Player 2's Choice ";
    cin >> p2;

    switch (p1) {
        
        case ('r'):
        case ('R'):
            switch (p2){
                
                case ('r'):
                case ('R'):
                    cout << "tie!" << endl;
                    cout << "both player's chose rock" << endl;
                    break;

                case ('p'):
                case ('P'):
                    cout << "Player 2 won!" << endl;
                    cout << "player 2 chose paper which beats player 1's rock" << endl;
                    break;

                case ('s'):
                case ('S'):
                    cout << "Player 1 won!" << endl;
                    cout << "player 1 chose rock which beats player 2's sissors" << endl;
                    break;
            }
            break;

        case ('p'):
        case ('P'):
            switch (p2){
                
                case ('r'):
                case ('R'):
                    cout << "Player 1 won!" << endl;
                    cout << "player 1 chose paper which beats player 2's rock" << endl;
                    break;

                case ('p'):
                case ('P'):
                    cout << "tie!" << endl;
                    cout << "both player's chose paper" << endl;
                    break;

                case ('s'):
                case ('S'):
                    cout << "Player 2 won!" << endl;
                    cout << "player 2 chose sissors which beats player 1's paper" << endl;
                    break;
            }
            break;

        case ('s'):
        case ('S'):
            switch (p2){
                
                case ('r'):
                case ('R'):
                    cout << "Player 2 won!" << endl;
                    cout << "player 2 chose rock which beats player 1's sissors" << endl;
                    break;

                case ('p'):
                case ('P'):
                    cout << "Player 1 won!" << endl;
                    cout << "player 1 chose sissors which beats player 2's paper" << endl;
                    break;

                case ('s'):
                case ('S'):
                    cout << "tie!" << endl;
                    cout << "both player's chose sissors" << endl;
                    break;
            }

    }

    return 0;
}