//Riley Slater
//Lab 2.2
//February 23, 2017
//Program has a function called randomFunction that outputs a seeded (based on time) number greater then or equal to 1, less than or equal to 100. Program then outputs that number.
#include <iostream> //Includes Libraries.
#include <cstdlib> //Includes Libraries.
#include <ctime> //Includes Libraries.
using namespace std;

void randomFunction() { //Creates a void function so that it isn't called automatically.
    srand(time(0)); //Seeds the random number to time so that it is always different.
    cout << "Your Random Number is: " << ((rand() % 100) + 1); //Outputs a line saying "Your Random Number is: " then outputs a random number between 1 and 100.
}

int main() {
    randomFunction();   //Calls randomFunction() to generate the random number and output it.
}