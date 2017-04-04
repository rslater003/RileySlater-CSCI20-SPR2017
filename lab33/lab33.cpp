//Riley Slater
//Lab 3.3
//March 29, 2017
//This program plays a game with the user, the computer picks a number and the user picks a number. If the
//number is higher or lower then the computer lets the user know and they pick again. This step repeats until
//the user guesses the number. User has 10 guesses to guess the computer's number.
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int userNum;    //Declares variable User Number
    int guessAttempts; //Declares variable Guess Attempts
    int randNum;    //Declares variable random number
    randNum = (rand() % 50) + 1;    //Defines randNum to a random number between 1 and 50
    
    cout << "Please pick a number between 1 and 50: "; 
    cin >> userNum;

    for (guessAttempts = 10; guessAttempts > 0; guessAttempts--) {  // For loop, starts user with 10 attempts, as long as guess attempts are greater then 0, and it subtracts 1 each time the loop cycles
        if (userNum != randNum) {   //If userNum is not equal to randNum
            cout << endl << "Guess Attempts Left: " << guessAttempts << endl;   //Outputs Guess Attempts left
            if (userNum > randNum) {    //If userNum  is greater then randNum
                cout << "Your Number is Too High. Please Pick Another Number: " << endl;    //Outputs the number is too high and asks user to pick another number
                cin >> userNum;
                while (userNum < 0 || userNum > 50) {   //Tests to make sure the user picked a number between 1 and 50
                    cout << userNum << " is not between 1 and 50. Please enter a valid number: ";   //Outputs number is not between 1 and 50 and asks user to pick another number
                    cin >> userNum;
                }
            }
            else if (userNum < randNum) {   //If userNum is less than randNum
                cout << "Your Number is Too Low. Please Pick Another Number: " << endl; //Outputs the number is too low and asks user to pick again
                cin >> userNum;
                while (userNum < 0 || userNum > 50) {   //Tests to make sure the user picked a number between 1 and 50
                    cout << userNum << " is not between 1 and 50. Please enter a valid number: ";   //Tells user the number isnt between 1 and 50, then asks user to pick another number
                    cin >> userNum;
                }
            }
        }
    }
    if (userNum == randNum) {   //If userNum is equal to randNum
        cout << endl << "You Guessed the Number!" << endl;  //Tells user they picked the number
    }
    else if (guessAttempts < 1) {   //If the user has ran out of guess attempts
        cout << endl << "You Ran out of Attempts!" << endl; //Outputs that the user ran out of attempts
    }
}