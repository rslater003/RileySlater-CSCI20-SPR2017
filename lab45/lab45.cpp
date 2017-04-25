//Riley Slater
//April 25, 2017
//Lab 4.5 - String
//This program takes a first name (less than 10 characters) and a last name (less than 20 characters), it converts those to three usernames for 
//the user (first one first 2 letter of first name + last name, second one first name + last name, third one first letter of first name + last name)
#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName;
    string lastName;
    string userName1;  
    string userName2;
    string userName3;
    
    cout << "Please enter your First Name (Max of 10 letters): ";           //COUT + CIN FOR INPUT FOR FIRST NAME
    cin >> firstName;
    while (firstName.length() > 10) {               //THIS LOOP CHECKS TO MAKE SURE THE FIRST NAME IS LESS THAN 10 CHARACTERS IN LENGTH
        cout << "First Name is more than 10 letters. Please enter a name 10 letters or less: ";
        cin >> firstName;
    }
    cout << "Please enter your Last Name (Max of 20 letters): ";            //COUT + CIN FOR INPUT FOR LAST NAME
    cin >> lastName;
    while (lastName.length() > 20) {                //THIS LOOP CHECKS TO MAKE SURE THE LAST NAME IS LESs THAN 20 CHARACTERS IN LENGTH
        cout << "Last Name is more than 20 letters. Please enter a name 20 letters or less: ";
        cin >> lastName;
    }
    
    char c;     //DECLARATION OF A CHARACTER THAT WILL HOLD A VALUE OF A LOWERCASE LETTER
    
    userName1 = firstName;      //SETS FIRST NAME TO THE FIRST USER NAME
    userName1.resize(2);        //TAKES THE FIRST TWO CHARACTERS OF THE FIRST USERNAME/FIRST NAME
    userName1.append(lastName); //APPENDS THE LAST NAME
    
    for (int i = 0; userName1[i]; i++) {        //THIS LOOP TURNS THE ENTIRE STRING TO LOWERCASE
        c = userName1[i];
        userName1[i] = tolower(c);
    }
    
    userName2 = firstName;      //SETS FIRST NAME TO THE SECOND USER NAME
    userName2.append(lastName);     //APPENDS THE LAST NAME
    
    for (int i = 0; userName2[i]; i++) {        //THIS LOOP TURNS THE ENTIRE STRING TO LOWERCASE
        c = userName2[i];
        userName2[i] = tolower(c);
    }
    
    userName3 = firstName;      //SETS FIRST NAME TO THE THIRD USER NAME
    userName3.resize(1);        //TAKES THE FIRST CHARACTER OF THE THIRD USERNAME/FIRST NAME
    userName3.append(lastName); //APPENDS THE LAST NAME
    
    for (int i = 0; userName3[i]; i++) {        //THIS LOOP TURNS THE ENTIRE STRING TO LOWERCASE
        c = userName3[i];
        userName3[i] = tolower(c);
    }
    
    cout << "First username: " << userName1 << endl;
    cout << "Second username: " << userName2 << endl;      //COUTS ALL THE USERNAMES
    cout << "Third username: " << userName3 << endl;
}