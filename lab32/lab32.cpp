//Riley Slater
//Lab 3.2
//March 28, 2017
//This program takes the users name, gross wage, marital status, and withheld taxes. It then calculates deductions and which tax bracket the user is in. It writes a final
//output to give the user the adjusted gross wage, calculated tax, and the final value owed after taking out the withheld taxes.
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    double grossWage = 0;  
    int maritalStatus;
    double afterPersonalExemption;
    double taxesOwed;
    string name;
    double amountWithheld;
    
    cout << "Please enter your name: ";
    getline(cin,name);  //Gets the full line of name
    cout << "Please enter your Gross Wage: ";
    cin >> grossWage;   //Gets Gross Wage
    cout << "Please enter your marital status (Single = 1, Married = 2): ";
    cin >> maritalStatus;   //Gets Marital Status
    cout << "Please enter the amount of taxes withheld: ";
    cin >> amountWithheld;  //Gets Amount Withheld
    cout << endl << endl << endl;
    
    switch (maritalStatus) {    //Switch statement to determing how much deductions can be taken out based on marital status.
        case 1:
        afterPersonalExemption = grossWage - 3900;
        break;
        case 2:
        afterPersonalExemption = grossWage - 7800;
        break;
        default: 
        cout << "Please enter either 1 or 2!" << endl;
        break;
    }
    
    if (afterPersonalExemption >= 1) {          //If Personal Exemption is greater than or equal to 1
        if (maritalStatus == 1) {               //If marital status is equal to 1 (single)
            if (afterPersonalExemption <= 8925) {   //First Tax Bracket
                taxesOwed = afterPersonalExemption * .9;    //First Tax Bracket Equations
            }
            else if (afterPersonalExemption <= 36250) {     //Second Tax Bracket
                taxesOwed = 892.5 + ((afterPersonalExemption - 8925) * .85);    //Second Tax Bracket Equation
            }
            else if (afterPersonalExemption <= 87850) {     //Third Tax Bracket
                taxesOwed = 4991.25 + ((afterPersonalExemption - 36250) * .75); //Third Tax Bracket Equation
            }
            else if (afterPersonalExemption > 87850) {      //Fourth Tax Bracket
                taxesOwed = 17891.25 + ((afterPersonalExemption - 87850) * .72);    //Fourth Tax Bracket Equation
            }
        }
        else if (maritalStatus == 2) {      //If marital status is equal to 2 (married)
            if (afterPersonalExemption <= 17850) {      //First Tax Bracket
                taxesOwed = afterPersonalExemption * .9;    //First Tax Bracket equation
            }
            else if (afterPersonalExemption <= 72500) {     //Second Tax Bracket
                taxesOwed = 1785 + ((afterPersonalExemption - 17850) * .85);    //Second Tax Bracket Equation
            }
            else if (afterPersonalExemption > 72500) {      //Third Tax Bracket
                taxesOwed = 9982.5 + ((afterPersonalExemption - 72500) * .72);  //Third Tax Bracket Equation
            }
        }
    }
    else {
        cout << "You don't owe any taxes" << endl;      //If value less than or equal to 0 then user owes no taxes
    }
    cout << "Name: " << name << endl;
    cout << "Adjusted Gross Income: $" << afterPersonalExemption << endl;                      //ALL OUTPUT
    cout << "Calculated Taxes Owed: $" << taxesOwed << endl;
    if (taxesOwed > amountWithheld) {   //If taxes Owed is greater than amount withheld
        cout << "After Taking out Wittholds " << name << " owes: $" << taxesOwed - amountWithheld <<  endl;     //Output taxes owed after deducting amount withheld
    }
    else if (taxesOwed <amountWithheld) {       //If taxes owed is less than amount withheld
        cout << "After taking out the Withholds " << name << " gets: $" << amountWithheld - taxesOwed << endl;  //Output refund after deducting amount withheld
    }
    else if (taxesOwed == amountWithheld) {     //If taxes owed and amount withheld are equivalent
        cout << "After taking out the Withholds " << name << " owes Nothing." << endl;  //Output user owes nothing because withhelds account for all taxes owed.
    }
}