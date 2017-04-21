//Riley Slater
//April 20, 2017
//Lab 4.4
//This program takes a first name and a last name then converts them into usernames for the user.
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    char firstName[10];
    char lastName[20];
    char userName1[30];             //DECLARATIONS OF STRING ARRAYS
    char userName2[30];
    char userName3[30];
    
    cout << "Welcome to UserName Finder 101!" << endl << "Please Type Your First Name(No More Then 10 Characters): ";   //INTRODUCTION TO PROGRAM
    cin >> firstName;           //ASKS FOR FIRST NAME
    
    while (strlen(firstName) > 10) {            //THIS LOOP CHECKS TO MAKE SURE THE USER PICKS A NAME BETWEEN 1 AND 10
        cout << "First Name is Too Long!" << endl;
        cin >> firstName;
    }
    
    cout << "Please Type Your Last Name (No More Then 20 Characters): ";        //ASKS FOR LAST NAME
    cin >> lastName;  
    
    while (strlen(lastName) > 20) {                 //THIS LOOP CHECKS TO MAKE SURE THE USER PICKS A NAME BETWEEN 1 AND 20
        cout << "Last Name is Too Long!" << endl << "Please Try Again: ";
        cin >> lastName;
    }
    
    while (strncmp(firstName, lastName, 10) == 0) {         //THIS LOOP CHECKS TO MAKE SURE THE FIRST NAME AND LAST NAME ARE NOT THE SAME
        cout << "You can't have the same first name and last name." << endl;
        cout << "First Name: ";
        cin >> firstName;
        cout << "Last Name: ";
        cin >> lastName;
    }
    
    strncpy(userName1, firstName, 1);       //THIS TAKES THE FIRST CHARACTER OF FIRST NAME AND ASSIGNS IT TO  USERNAME1
    userName1[1] = '\0';   //MANUALLY ASSIGNS THE NULL OPERATOR, DUE TO RANDOM CHARACTERS BEING ASSIGNED AT THE END I FOUND THIS WOULD FIX IT
    strcat(userName1, lastName);        //CONCATENATES THE TWO STRINGS
    char c;
    for (int i = 0; userName1[i]; i++) {        //THIS LOOP TURNS THE ENTIRE STRING TO LOWERCASE
        c = userName1[i];
        userName1[i] = tolower(c);
    }
    cout << "First UserName: " << userName1 << endl;        //COUT FOR THE FIRST USERNAME
    
    strncpy(userName2, firstName, 2);           //TAKES THE FIRST TWO CHARACTERS OF FIRSTNAME AND THEN ASSIGNS THEM TO USERNAME2
    userName2[2] = '\0';   //MANUALLY ASSIGNS THE NULL OPERATOR, DUE TO RANDOM CHARACTERS BEING ASSIGNED AT THE END I FOUND THIS WOULD FIX IT
    strcat(userName2, lastName);            //CONCATENATES THE TWO STRINGS
    
    for (int i = 0; userName2[i]; i++) {        //THIS LOOP TURNS THE ENTIRE STRING TO LOWERCASE
        c = userName2[i];
        userName2[i] = tolower(c);
    }
    cout << "Second UserName: " << userName2 << endl;       //COUT FOR THE SECOND USERNAME
    
    strcat(firstName, lastName);        //CONCATENATES THE FIRST NAME AND LAST NAME
    
    for (int i = 0; firstName[i]; i++) {        //THIS LOOP TURNS THE ENTIRE STRING TO LOWERCASE
        c = firstName[i];
        firstName[i] = tolower(c);
    }
    cout << "Third UserName: " << firstName << endl;        //COUT FOR THE THIRD USERNAME
}