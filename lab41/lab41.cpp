//Riley Slater
//April 11, 2017
//Lab 4.1
//This program asks for 10 user inputted numbers to store in an array. It then finds outputs the array, finds the min of the first 5 values, finds the max of the last 5 values,
//then finds the sum of the 10 numbers, then finds the number of even numbers in the array, then finds the number of odd found in the array, then tells the user if 10 is in the
//array and tells the user what index 10 is at, then tells the user if the array is in ascending order.
#include <iostream>
#include <string>
using namespace std;

class ArrayTools {      //Declaration of class for Array Tools
    private:
        int myArray[];  //Private variable to store the array
    public:
        void Print();       //Print function
        ArrayTools(int arrayType[]);        //Overloaded Constructor
        int Find_min(int val1, int val2);   //Finds min function
        int Find_max(int val1, int val2);   //Finds max function
        int Find_sum();     //Finds sum function
        int Num_even();     //Counts even function
        int Num_odd();      //Counts odd function
        int Search(int searchVal);      //Searches for the number 10 function
        string Is_sorted(); //If Sorted function
};
ArrayTools::ArrayTools(int arrayType[]) {
    for (int i = 0; i < 10; i++) {      //Loops through each array value
        myArray[i] = arrayType[i];      //Assigns each value to the private class variable
    }
}
int ArrayTools::Find_min(int val1, int val2) {
    int min = myArray[val1];        //Sets min equal to the first index of the set of numbers it is looking through
    for (int i = val1; i < val2; i++) {     // for loop to loop through the set of numbers it is looking through
        if(myArray[i] < min) {      //If the value is greater then the min value
            min = myArray[i];       //min is equal to index i of the array
        }
    }
    return min;     //Returns min value
}
int ArrayTools::Find_max(int val1, int val2) {
    int max = myArray[val1];        //Sets max equal to the first index of the set of numbers it is looking through
    for (int i = val1; i < val2; i++) {     //for loop to loop through the set of numbers it is looking through
        if (myArray[i] > max) {     //If index i of array is greater than the max value
            max = myArray[i];       //max is equal to index i of array
        }
    }
    return max;     //Returns max value
}
int ArrayTools::Find_sum() {
    int sum = 0;    //Declares sum and sets it to 0
    for (int i = 0; i < 10; i++) {      //Loops through the array
        sum = sum + myArray[i];     //Adds index i of array to the sum + adds the sum to that
    }
    return sum;     //Returns sum
}
int ArrayTools::Num_even() {
    int totalEven = 0;      //Declares totalEven sets to 0
    for (int i = 0; i < 10; i++) {      //Loops through the entire array
        if (myArray[i] % 2 == 0) {      //If index i of array modulo 2 is equal too 0
            totalEven++;        //Adds 1 to the totalEven
        }
    }
    return totalEven;       //Returns totalEven
}
int ArrayTools::Num_odd() {
    int totalOdd = 0;       //Declares totalOdd sets to 0
    for (int i = 0; i < 10; i++) {      //Loops through the entire array
        if (myArray[i] % 2 != 0) {      //If index i of array modulo 2 is not equal to 0
            totalOdd++;         //Increments totalOdd
        }
    }
    return totalOdd;        //Returns totalOdd
}
int ArrayTools::Search(int searchVal) {
    for (int i = 0; i < 10; i++) {      //Loops through entire array
        if (myArray[i] == searchVal) {      //If index i of the array is equal to the value searching for
            return i;   //returns i (the index of the found value)
        }
    }
    return -1;      //If a value isn't found then it returns -1
}
string ArrayTools::Is_sorted() {
    for (int i = 0; i < 9; i++) {       //Loops through the entire array but the last one
        if (myArray[i] > myArray[i+1]) {        //If the current index i is greater then the next value after index i in the array
            return "No";        //Then the array is not sorted and outputs No
        }
    }
    return "Yes";       //The array is sorted and outputs Yes
}
void ArrayTools::Print() {
    for (int i = 0; i < 10; i++) {      //Loops through the entire array
        cout << myArray[i];     //Outputs the entire array
        if (i != 9) {       //If i is not equal to 9 (once it is equal to 10(the last value) then it won't output the comma and space after the array value)
            cout << ", ";
        }
    }
    cout << endl;   //Ends line after the print function
}

int main() {
    const int SIZE = 10;
    int myArray[SIZE];
    
    for (int i = 0; i < SIZE; i++) {        //For loop to get user input for the array
        cout << "Value " << i + 1 << ": ";
        cin >> myArray[i];
    }
    ArrayTools a(myArray);  //Declares object a (an array) of class ArrayTools
    
    a.Print();      //Runs the print function of object a
    cout << "Min: " << a.Find_min(0, 4) << endl;        //Runs Find_min function and then outputs it
    cout << "Max: " << a.Find_max(5, 10) << endl;       //Runs Find_max function and then outputs it
    cout << "Sum = " << a.Find_sum() << endl;           //Runs Find_sum function and then outputs it
    cout << "Num Even: " << a.Num_even() << endl;       //Runs Num_even function and then outputs it
    cout << "Num Odd: " << a.Num_odd() << endl;         //Runs Num_odd function and then outputs it
    cout << "10 Found at Index (-1 if 10 isn't found): " << a.Search(10) << endl;       //Searches for 10 and then outputs the index if found (if not found ouputs -1)
    cout << "Sorted? " << a.Is_sorted() << endl;        //Runs Is_sorted and then outputs Yes or No
    
    return 0;
}