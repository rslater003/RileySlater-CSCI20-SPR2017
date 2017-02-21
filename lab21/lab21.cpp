//Riley Slater
//Lab 2.1
//February 21, 2017
//Uses two equations to calculate the wind chill in two different methods of calculation, then it outputs 4 values: 
//(oldStyleWindChill, newStyleWindChill, windVelocity, and windStyleDifference). These values are in a table style.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double tempF; //Declares variable type double for Temperature
    double windVelocity;  //Declares variable type double for Wind Velocity
    double oldStyleWindChill; //Declares variable type double for Old Style Wind Chill
    double newStyleWindChill; //Declares variable type double for New Style Wind Chill
    double windStyleDifference; //Declares variable type double for Wind Style Difference
    cout << "What is the Temperature? "; 
    cin >> tempF; //Asks user to input Temperature
    cout << "What is the Wind Speed? ";
    cin >> windVelocity; //Asks user to input Wind Velocity
    oldStyleWindChill = .081 * (3.71 * sqrt( windVelocity ) + 5.81 - .25 * windVelocity) * ( tempF - 91.4 ) + 91.4; //Equation to calculate the Old Style Wind Chill
    newStyleWindChill = 35.74 + .6215 * tempF -  35.75 * pow( windVelocity, .16 ) +  .4275 * tempF * pow( windVelocity, .16 ); //Equation to calculate the New Style Wind Chill
    windStyleDifference = abs(oldStyleWindChill - newStyleWindChill); //Calculates the difference between the two styles of wind chill calculation then takes the absolute value so we don't get a negative differnce
    cout << endl;
    cout << "The Old Style Wind Chill    The New Style Wind Chill    Wind Speed    The Difference " << endl; // This is the Table Header
    cout << "         " << oldStyleWindChill << "                      " << newStyleWindChill << "                " << windVelocity << "             " << windStyleDifference << endl; //These are the Table Cells
};
