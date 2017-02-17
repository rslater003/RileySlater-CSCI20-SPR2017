//Riley Slater
//Assignment 1.0
//February 16, 2017
//Creates a struct with the characteristics of a Wage Slip: name, hoursPerWeek, payPerHour. Then uses two inputs for user to give hoursPerWeek and payPerHour.
//Then uses 2 equations to calculate the user's gross pay and net pay. Then outputs the Wage Slip with name, hoursPerWeek, payPerHour, grossPay, and netPay.
#include <iostream>
#include <string>
using namespace std;

struct WageSlip {    //struct with all the attributes of a wage slip: name, hoursPerWeek, payPerHour
    string name;
    int hoursPerWeek;
    int payPerHour;
};

int main() {
    double taxes = .83;         // type Double so .83 doesn't round down to 0
    int healthInsurance = 130; 
    double grossPay;
    double netPay;
    WageSlip Weekly;
    
    cout << "What is your name (First): ";                  //Normal input and outputs to ask user for name, hoursPerWeek, and payPerHour
    cin >> Weekly.name;
    cout << "How many hours do you work per week: ";
    cin >> Weekly.hoursPerWeek;
    cout << "How much do you make per hour: ";
    cin >> Weekly.payPerHour;
    
    grossPay = Weekly.payPerHour * Weekly.hoursPerWeek;     //In order to calculate gross pay we multiply payPerHour by hoursPerWeek
    netPay = (grossPay - healthInsurance) * taxes;          //In order to calculate net pay we need to subtract healthInsurance from grossPay and then multipy by taxes
    
    cout << endl << "Wage Slip" << endl;                    //Outputs the complete Wage Slip
    cout << "Name: " << Weekly.name << endl;
    cout << "Hours: " << Weekly.hoursPerWeek << endl;
    cout << "Rate: $" << Weekly.payPerHour << endl;
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Net Pay: $" << netPay << endl;
}