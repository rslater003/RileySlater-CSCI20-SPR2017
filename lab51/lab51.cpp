//Riley Slater
//Lab 5.1
//May 4, 2017
//This program takes a word of 10 or less words and then reverses the order of the words. It then checks if the word is a palindrome.
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 10;        //CHANGED 0 TO 10, THE NAME LENGTH SAYS IN THE COUT THAT IT MUST BE 10 LETTERS OR LESS
    char * name = new char[nameLength];         //CHANGED WHAT WAS IN THE BRACKETS TO NAMELENGTH SO BECAUSE IT COULDN'T BE BLANK

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;

    char * head  = name;        //Declares a pointer called head and points to name
    char * tail = name;         //Declares a pointer called tail and points to name
    nameLength = strlen(name);  //Sets nameLength equal to the length of name;
    
    
    while (strlen(name) > 10) {     //CHANGED THIS TO A WHILE LOOP SO THAT THE PROGRAM WOULDN'T RUN WITH A WORD THAT IS TOO LONG
        cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
        cin >> name;
    }
    
    cout << "Your word is " << name << endl;

    if (nameLength<=10)  //if the name length is less than 10 (CHANGED TO A <= BECASUE IT SAYS THAT THE NAME MUST BE 10 OR LESS)
    {
         while (*head != '\0') //Runs until the null character at the end of the char array is reached
         {
                cout << *head;  //Couts the pointer head
                head++; //Adds one to head
         }
     }

     cout << endl;

     tail = &name[strlen(name) - 1];    //Sets tail equal to the address of name with the length of name minus one elements

     if (nameLength <= 10)   //If nameLength is less than 10 (CHANGED TO A <= BECAUSE IT SAYS THAT THE NAME MUST BE 10 OR LESS)
     {
          while (tail >= name)  //CHANGED TO A >= SIGN SO THAT IT WOULD ITERATE ONE EXTRA TIME SO THE WHOLE WORD WOULD OUTPUT
          {
                 cout << *tail;
                 tail--;
          }
     }
     cout << endl;

     head = name;   //head is set equal to name
     tail = &name[strlen(name) - 1];    //sets tail equal to the address of name with the array elements equal to the length of name minus 1

     head++;        //Adds 1 to head
     tail--;        //Subtracts 1 from tail

     if (*head == *tail)        //If the pointer head and the pointer tail are equal then it outputs that it is a palindrome
     {
         cout << "It is an palindrome!" << endl;
     }
     else       //Else it outputs that it is not a palindrome
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}