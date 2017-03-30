#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int i = 0;
    int userNum = 0;
    int guessAttempts = 10;
    int randNum;
    randNum = (rand() % 50) + 1;
    
    cout << "Please pick a number between 1 and 50: ";
    cin >> userNum;

    for (guessAttempts; guessAttempts > 0; guessAttempts--) {
        if (userNum != randNum) {
            cout << endl << "Guess Attempts Left: " << guessAttempts << endl;
            if (userNum > randNum) {
                cout << "Your Number is Too High. Please Pick Another Number: " << endl;
                cin >> userNum;
                while (userNum < 0 || userNum > 50) {
                    cout << userNum << " is not between 1 and 50. Please enter a valid number: ";
                    cin >> userNum;
                }
            }
            else if (userNum < randNum) {
                cout << "Your Number is Too Low. Please Pick Another Number: " << endl;
                cin >> userNum;
                while (userNum < 0 || userNum > 50) {
                    cout << userNum << " is not between 1 and 50. Please enter a valid number: ";
                    cin >> userNum;
                }
            }
        }
    }
    if (userNum == randNum) {
        cout << endl << "You Guessed the Number!" << endl;
    }
    else if (guessAttempts < 1) {
        cout << endl << "You Ran out of Attempts!" << endl;
    }
}
