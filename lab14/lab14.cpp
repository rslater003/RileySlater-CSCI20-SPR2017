#include <iostream>
 
using namespace std;
int main() {
    int amountOfChange = 0;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int includeHalfDollars;
    int prioritize;
    cout << "Which Type of Coin would you like to exclude (0 for Half-Dollars. 1 for Quarters and Half Dollars. 2 for Dimes, Quarters, and Half Dollars. 3 for Nickels, Dimes, Quarters, and Half Dollars. 4 for Just Pennies.) ";
    cin >> prioritize;
    cout << "How much change do you have? (As a Whole Number) ";
    cin >> amountOfChange;
    int totalAmount = amountOfChange;
    if (prioritize == 0) {                                      //If User Prioritizes Half Dollars
        cout << amountOfChange/50 << " Half-Dollars" << endl;
        amountOfChange = amountOfChange % 50;
        cout << amountOfChange/25 << " Quarters" << endl;
        amountOfChange = amountOfChange % 25;
        cout << amountOfChange/10 << " Dimes" << endl;
        amountOfChange = amountOfChange % 10;
        cout << amountOfChange/5 << " Nickels" << endl;
        amountOfChange = amountOfChange % 5;
        cout << amountOfChange/1 << " Pennies" << endl; 
    }                                                                       
    if (prioritize == 1) {                                      //If User Prioritizes Quarters
        cout << amountOfChange/25 << " Quarters" << endl;
        amountOfChange = amountOfChange % 25; 
        cout << amountOfChange/10 << " Dimes" << endl; 
        amountOfChange = amountOfChange % 10;  
        cout << amountOfChange/5 << " Nickels" << endl; 
        amountOfChange = amountOfChange % 5;
        cout << amountOfChange/1 << " Pennies" << endl;
    }  
    if (prioritize == 2) {                                      //If User Prioritizes Dimes
        cout << amountOfChange/10 << " Dimes" << endl;
        amountOfChange = amountOfChange % 10;
        cout << amountOfChange/5 << " Nickels" << endl;
        amountOfChange = amountOfChange % 5;
        cout << amountOfChange/1 << " Pennies" << endl;
    }
    if (prioritize == 3) {                                      //If User Prioritizes Nickels
        cout << amountOfChange/5 << " Nickels" << endl;
        amountOfChange = amountOfChange % 5;
        cout << amountOfChange/1 << " Pennies" << endl;
    }
    if (prioritize == 4) {                                      //If User Prioritizes Pennies
        cout << amountOfChange/1 << " Pennies" <<endl;
    }
    totalAmount = (totalAmount * .891);
    cout << "Total Earned: $" << static_cast<double>(totalAmount) << endl;
    
}                                                               //ends int main() {