#include <iostream>
#include <string>
using namespace std;

class ComputerControlledOpponent {      //CLASS FOR COMPUTER PICKING
    private: 
        string computerPick_;       //Private Variable that stores the computer's pick
    public:
        void setComputerPick(int randNum);  //Mutator
        string getComputerPick();           //Accessor
};

void ComputerControlledOpponent::setComputerPick(int randNum) {     //Mutator
    switch (randNum) {      //Based on the random number inputted it will pick on of the switch cases
        case 0: computerPick_ = "Rock";
            break;
        case 1: computerPick_ = "Paper";
            break;
        case 2: computerPick_ = "Scissors";
            break;
        case 3: computerPick_ = "Lizard";
            break;
        case 4: computerPick_ = "Spock";
            break;
    }
    return;
}

string ComputerControlledOpponent::getComputerPick() {      //Acessor
    string computerPick = computerPick_;    //Sets computerPick equal to class private variable
    return computerPick;                    //Returns the pick
}

int main() {
    int roundsAmount;                   //Rounds Amount
    ComputerControlledOpponent pick;    //Object pick
    string userPick;                    //User Pick
    int userScore = 0;                  //User Score
    int computerScore = 0;              //Computer Score
    string previousGuess = "";          //Previous Guess
    cout << "How many rounds would you like to play (3, 5, or 7) : ";   //How many rounds
    cin >> roundsAmount;                //cin for amount of rounds
    
    while (roundsAmount != 3 && roundsAmount != 5 && roundsAmount != 7) {   //Checks to make sure rounds is either 3, 5, or 7
        cout << "Please Enter either 3, 5, or 7 rounds: ";
        cin >> roundsAmount;
    }
    
    for (int i = 0; i < roundsAmount; i++) {        //Loop for amount of rounds
        cout << endl << "Round " << i + 1 << endl;  //Outputs Round #
        cout << endl << "Pick Rock, Paper, Scissors, Lizard, or Spock: ";       //Asks user to input a type
        cin >> userPick;
        while (userPick != "Rock" && userPick != "Paper" && userPick != "Scissors" && userPick != "Lizard" && userPick != "Spock" && userPick != "rock" && userPick != "paper" && userPick != "scissors" && userPick != "lizard" && userPick != "spock" ) {
            cout << "Please Type a Valid Pick: ";
            cin >> userPick;                                //WHILE LOOP TO MAKE SURE THE PICK IS PROPER AND NOT MISPELLED
        }
        srand(time(0));     //Seeds random numbers based on time    
        pick.setComputerPick(rand() % 5);       //setComputerPick of object pick for a random number either 0, 1, 2, 3, or 4
        string computerPick = pick.getComputerPick();       //sets computerPick equal to getComputerPick of object pick
        
        while (previousGuess == computerPick) {     //COMPUTER AI FOR TESTING TO MAKE SURE THE COMPUTER DOESN'T HAVE THE SAME GUESS TWICE IN A ROW
            pick.setComputerPick(rand() % 5);               //RESETS COMPUTER PICK
            computerPick = pick.getComputerPick();
        }
        
        previousGuess = computerPick;       //Sets previous guess to computer pick for AI next time through
        
        if (userPick == computerPick) {                                                             //ALL THE POSSIBLE OUTCOMES
            cout << endl << "You and the Computer picked the same." << endl;                        //*************************
            cout << "Your Score is: " << userScore << endl;                                         //*************************
            cout << "Computer Score is: " << computerScore << endl;                                 //*************************
        }                                                                                           //*************************
        else if ((userPick == "scissor" || userPick == "Scissor") && (computerPick == "Paper")) {   //*************************
            cout << "You Won This Round!" << endl;                                                  //*************************
            userScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "paper" || userPick == "Paper") && (computerPick == "Scissor")) {
            cout << "Computer Won This Round!" << endl;
            computerScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if((userPick == "paper" || userPick == "Paper") && computerPick == "Rock") {
            cout << "You Won This Round!" << endl;
            userScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "rock" || userPick == "Rock") && computerPick == "Paper") {
            cout << "Computer Won This Round!" << endl;
            computerScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "rock" || userPick == "Rock") && computerPick == "Lizard") {
            cout << "You Won This Round!" << endl;
            userScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "lizard" || userPick == "Lizard") && computerPick == "Rock") {
            cout << "Computer Won This Round!" << endl;
            computerScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "lizard" || userPick == "Lizard") && computerPick == "Spock") {
            cout << "You Won This Round!" << endl;
            userScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "spock" || userPick == "Spock") && computerPick == "Lizard") {
            cout << "Computer Won This Round!" << endl;
            computerScore++;
            cout << "You Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "spock" || userPick == "Spock") && computerPick == "Scissors") {
            cout << "You Won This Round!" << endl;
            userScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "scissors" || userPick == "Scissors") && computerPick == "Spock") {
            cout << "Computer Won This Round!" << endl;
            computerScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "scissors" || userPick == "Scissors") && computerPick == "Lizard") {
            cout << "You Won This Round!" << endl;
            userScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "lizard" || userPick == "Lizard") && computerPick == "Scissors") {
            cout << "Computer Won This Round!" << endl;
            computerScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "lizard" || userPick == "Lizard") && computerPick == "Paper") {
            cout << "You Won This Round!" << endl;
            userScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "paper" || userPick == "Paper") && computerPick == "Lizard") {
            cout << "Computer Won This Round!" << endl;
            computerScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "paper" || userPick == "Paper") && computerPick == "Spock") {
            cout << "You Won This Round!" << endl;
            userScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "spock" || userPick == "Spock") && computerPick == "Paper") {
            cout << "Computer Won This Round!" << endl;
            computerScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "spock" || userPick == "Spock") && computerPick == "Rock") {
            cout << "You Won This Round!" << endl;
            userScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "rock" || userPick == "Rock") && computerPick == "Spock") {
            cout << "Computer Won This Round!" << endl;
            computerScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "rock" || userPick == "Rock") && computerPick == "Scissors") {
            cout << "You Won This Round!" << endl;
            userScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
        else if ((userPick == "scissors" || userPick == "Scissors") && computerPick == "Rock") {
            cout << "Computer Won This Round!" << endl;
            computerScore++;
            cout << "Your Score is: " << userScore << endl;
            cout << "Computer Score is: " << computerScore << endl;
        }
    }
    cout << endl << endl << endl;
    if (userScore > computerScore) {                    //If userScore is greater then computerScore then user wins
        cout << "Congratulations You Won!" << endl;
    }
    else if (computerScore > userScore) {           //If computerScore is greater then computerScofre then computer wins
        cout << "Computer Won This Time!" << endl;
    }
    else if (computerScore == userScore) {          //If computerScore and userScore are the same then they tied
        cout << "You and Computer Tied!" << endl;
    }
}