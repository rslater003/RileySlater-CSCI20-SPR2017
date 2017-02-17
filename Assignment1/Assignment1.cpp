//Riley Slater
//Assignment 1.0
//February 16, 2017
//Creates a struct with the characteristics of a Wage Slip: name, hoursPerWeek, payPerHour. Then uses two inputs for user to give hoursPerWeek and payPerHour.
//Then uses 2 equations to calculate the user's gross pay and net pay. Then outputs the Wage Slip with name, hoursPerWeek, payPerHour, grossPay, and netPay.
#include <iostream>
#include <string>
using namespace std;

struct WageSlip {
    string name;
    int hoursPerWeek;
    int payPerHour;
};

int main() {
    double taxes = .83;
    int healthInsurance = 130;
    double grossPay;
    double netPay;
    WageSlip Weekly;
    
    cout << "What is your name (First): ";
    cin >> Weekly.name;
    cout << "How many hours do you work per week: ";
    cin >> Weekly.hoursPerWeek;
    cout << "How much do you make per hour: ";
    cin >> Weekly.payPerHour;
    
    grossPay = Weekly.payPerHour * Weekly.hoursPerWeek;
    netPay = (grossPay - healthInsurance) * taxes;
    
    cout << endl << "Wage Slip" << endl;
    cout << "Name: " << Weekly.name << endl;
    cout << "Hours: " << Weekly.hoursPerWeek << endl;
    cout << "Rate: $" << Weekly.payPerHour << endl;
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Net Pay: $" << netPay << endl;
}