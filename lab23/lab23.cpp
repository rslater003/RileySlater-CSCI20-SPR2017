//Riley Slater
//February 28, 2017
//Lab 2.3: This program asks the user to give two numbers that they want a random number to be generated in between. It takes those numbers swaps the values stored in them and then
//finds the minimum value and high value of the two numbers, it then inputs those numbers for the high number and low number in the random number generator. The program outputs the number.
#include <iostream>
#include <cmath>
using namespace std;

int swapFunction(int& value1, int& value2) { //Start of the swap function for swapping two values
	int x,y;    //Creates two new ints
	x=value1;   //Assigns value1 to x
	y=value2;   //Assigns value2 to y
	value1=y;   //Assigns y to value1
	value2=x;   //Assigns x to value2
};

void RandomNumGenerator(int lowValue, int highValue) {  //Start of the random number generator
    srand(time(0)); //Seeds the random number based on time
    int randomNumber = (rand() % (highValue - lowValue + 1)) + lowValue;    //Creates a random number between the values the user has chosen
    cout << "Your Random Number is: " << randomNumber;   //Outputs the random number
};

int main() {
    int value1; //Declares value1
    int value2; //Declares value2
    cout << "Choose the First Value: "; //Asks user for input of value1
    cin >> value1;
    cout << "Choose Second Value: ";    //Asks user for input of value2
    cin >> value2;
    swapFunction(value1, value2);   //Calls Swap Function with arguments value1 and value2
    int lowValue = fmin(value1, value2);    //Finds lowest value after the swap function
    int highValue = fmax(value1, value2);   //Finds highest value after the swap function
    RandomNumGenerator(lowValue, highValue);    //Calls Random Number Generator with arguments lowValue and highValue
};