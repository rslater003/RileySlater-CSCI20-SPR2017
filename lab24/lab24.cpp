#include <iostream>
#include <cmath>
using namespace std;

int swapFunction(int& value1, int& value2) { //Start of the swap function for swapping two values
	int x,y;    //Creates two new ints
	x = value1;   //Assigns value1 to x
	y = value2;   //Assigns value2 to y
	value1 = y;   //Assigns y to value1
	value2 = x;   //Assigns x to value2
};

int RandomNumGenerator(int lowValue, int highValue) {  //Start of the random number generator
    srand(time(0)); //Seeds the random number based on time
    int randomNumber = (rand() % (highValue - lowValue + 1)) + lowValue;    //Creates a random number between the values the user has chosen
    return randomNumber; //Returns Random Number to int randomNumber
};

double PoundsToKilos(double pounds) {
    double kilo = pounds * 0.45359237; //Equation to convert Pounds to Kilograms
    return kilo; //Returns Kilo to double kilo 
}
double KilosToPounds(double kilo) {
    double pounds = kilo/0.45359237; //Equation to convert Kilograms to Pounds
    return pounds; //Returns Pounds to double pounds
}

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
    int randomNumber = RandomNumGenerator(lowValue, highValue);    //Calls Random Number Generator with arguments lowValue and highValue
    double kilo = PoundsToKilos(randomNumber); //Calls Function PoundsToKilos with argument randomNumber then assigns it to type double: kilo
    double pound = KilosToPounds(kilo); //Calls Function KilosToPounds with argument kilo then assigns it to type double: pound
    cout << endl << "Your Final Numbers are:" << endl; //Header for Final Numbers Output
    cout << "Random Number: " << randomNumber << endl; //Outputs Random Number
    cout << "Pounds First Value: " << randomNumber << endl; //Outputs Pounds First Value
    cout << "Kilograms: " << kilo << endl; //Outputs Kilograms
    cout << "Pounds Final Value: " << pound << endl; //Outputs Pounds Final Value
    if (randomNumber == pound) { //If statement to determine if randomNumber is equal to pound
        cout << randomNumber << " Pounds is equal to " << pound << " Pounds." << endl; //If the If Statement is true then it Outputs: First Pound Value "Pounds is equal to" Final Pound Value "Pounds"
    }
    else { //Else statement for If
        cout << "Error: The First Pounds Value is not Equivalent to the Final Pounds Value" << endl; //Outputs this line if the Else statement is true
    }
};