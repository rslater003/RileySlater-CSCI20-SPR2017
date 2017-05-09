//Riley Slater
//Assignment 4
//May 4, 2017
//This program takes a file and writes a concordance of all the words that are not stop words (and, to, from...). 
//It outputs the amount of times the word occured and the first index of occurance. If the word contains a special character
//(',', '"', '?'...) it omits it. It also converts the file into all lowercase letters so that a uppercase letter won't affect
//amount of words found.
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <ios>
#include <iomanip>
#include <locale>
using namespace std;

class Concordance {     //CLASS CONCORDANCE
    private:
        string word_;       //PRIVATE VARIABLE TO HOLD THE WORD
    public:
        int amountOccured = 0;      //PUBLIC VARIABLE TO HOLD THE AMOUNT OF OCCURANCES OF THE WORD
        int indexOfOccurance = 0;   //PUBLIC VARIABLE TO HOLD THE FIRST INDEX OF OCCURANCE
        void setWord(string word);      //MUTATOR
        void setAmountOccured();        //MUTATOR
        void setIndexFirstOccurance(int index);     //MUTATOR
        string getWord();   //ACCESSOR
        int getAmountOccured();     //ACCESSOR
        int getIndexFirstOccurance();   //ACCESSOR
};

void Concordance::setWord(string word) {
    word_ = word;
}
void Concordance::setAmountOccured() {
    amountOccured = amountOccured + 1;
}
void Concordance::setIndexFirstOccurance(int index) {
    indexOfOccurance = index;
}
string Concordance::getWord() {
    return word_;
}
int Concordance::getAmountOccured() {
    return amountOccured;
}
int Concordance::getIndexFirstOccurance() {
    return indexOfOccurance;
}

int main() {
    Concordance arrayObjects[10000];
    string fileName;
    string tempWords[10000] = {" "};
    string line;
    string previousWords;
    int length = 0;
    int isFalse;
    char tempWord[30];
    char c;
    int words;
    
    ifstream fin;   //Declares the ifstream object fin
    ofstream fout;  //Declares the ofstream object fout
    
    cout << "Please enter a filename that you want a Concordance of (Don't forget the file extension): ";
    cin >> fileName;
    
    string StopWords;
    fin.open("english.stop.txt");       //OPENS THE STOP WORDS FILE
    while(!fin.eof()) {     //WHILE IT IS NOT THE END OF THE FIN FILE
      getline(fin, line);       //GETS THE LINE OF TEXT
      StopWords.append(line);       //APPENDS IT TO A STRING CALLED StopWords
    }
    fin.close();        //CLOSES THE STOP WORDS FILE
    
    fin.open("lowerCaseFile.txt");   //OPENS THE LOWERCASE FILE TXT DOCUMENT TO HOLD THE UPDATED LOWERCASE FILE
    
    string Indexing;
    string line1;
    while(!fin.eof()) {     //WHIEL IT IS NOT THE END OF THE FIN FILE
      getline(fin, line1);      //GETS THE LINE OF TEXT
      Indexing.append(line1);       //APPENDS THE LINE OF TEXT TO A STRING CALLED Indexing
    }
    fin.close();        //CLOSES THE FIN FILE
    fin.open(fileName);     //OPENS THE FILE THAT THE USER WANTS A CONCORDANCE OF
    fout.open("lowerCaseFile.txt");     //OPENS THE OUTPUTS FILE
    for (int g = 0; !fin.eof(); g++) {      //WHILE NOT THE END OF THE FILE, INCREMENTS G
        fin >> tempWord;                    //GETS THE FIRST WORD AND SETS IT TO tempWord
        for (int x = 0; x < 20; x++) {      //WHILE X IS LESS THEN 20, INCREMENTS X
            c = tempWord[x];        //SETS CHAR C TO tempWord[x]
            tempWord[x] = tolower(c);       //SETS tempWord[x] EQUAL TO THE LOWERCASE VERSION OF C
            //THIS LINE BELOWE CHECKS IF THE CHAR CONTAINED IN tempWord[x] IS A SPECIAL CHARACTER
            if (tempWord[x] == '"' || tempWord[x] == ')' || tempWord[x] == '(' || tempWord[x] == ',' || tempWord[x] == '.' || tempWord[x] == ':' || tempWord[x] == ';' || tempWord[x] == '?' || tempWord[x] == '!') {
                tempWord[x] = ' ';  //IF IT IS A SPECIAL CHARACTER THEN IT SETS IT TO A EMPTY CHAR
            }
        }
        fout << tempWord << " ";        //OUTPUTS TO THE lowerCaseFile.txt THE tempWord
        words++;    //INCREMENTS WORDS (HOLDS THE AMOUNT OF WORDS IN THE FILE FOR LATER USAGE)
    }
    
    fout.close();       //CLOSES THE OUTPUT FILE
    fin.close();        //CLOSES THE INPUT FILE
    
    fin.open("lowerCaseFile.txt");      //OPENS THE FILE lowerCaseFile.txt AS THE INPUT
    fout.open("output.txt");            //OPENS THE FILE output.txt AS THE OUTPUT
    
    int i = 0;      //LARGENS THE SCOPE OF I
    for (int i = 0; !fin.eof(); i++) {      //WHILE IT IS NOT THE END OF THE FIN FILE, IT INCREMENTS I AFTER EACH ITERATION
        fin >> tempWords[i];        //GETS THE WORD FROM THE FIN FILE
        isFalse = 0;        //RESETS isFalse EQUAL TO 0
        if (StopWords.find(tempWords[i]) == string::npos) {     //IF IT DOESN'T FIND tempWords[i] IN THE LIST OF STOP WORDS
            if (i == 0) {       //IF IT IS THE FIRST ITERATION OF THE LOOP THEN IT AUTOMATICALLY PUTS THE WORD AND SETS THE INDEX
                arrayObjects[i].setWord(tempWords[i]);      //SETS THE WORD TO tempWords[i]
                int index = Indexing.find(tempWords[i]);    //SETS INDEX EQUAL TO FINDING THE FIRST OCCURANCE OF THE WORD IN THE INDEXING STRING
                arrayObjects[i].setIndexFirstOccurance(index + 1);      //SETS THE INDEX OF THE FIRST OCCURANCE
            }
            for (int j = i - 1; j >= 0; j--) {      //WHILE J IS GREATER THEN OR EQUAL TO 0, j--
                if (tempWords[i] == tempWords[j]) {     //IF THE WORDS ARE SIMILAR
                    arrayObjects[j].setAmountOccured();     //SETS THE AMOUNT OCCURED TO THE POSITION THE WORD WAS ALREADY FOUND IN
                    isFalse = 1;        //isFalse is set to 1 (1 is the indication for the word to have been found previously)
                    break;      //BREAKS OUT OF THE FOR LOOP
                }
            }
            if (isFalse != 1) {     //IF isFalse is not equal to 1
                arrayObjects[i].setWord(tempWords[i]);  //SETS THE WORD
                arrayObjects[i].setAmountOccured();     //SETS THE AMOUNT OCCURED
                int index = Indexing.find(tempWords[i]);        //SETS INDEX EQUAL TO THE INDEX OF THE WORD IT WAS FIRST FOUND
                arrayObjects[i].setIndexFirstOccurance(index + 1);      //SETS THE INDEX OF THE FIRST OCCURANCE
            }
            else {
                i--;        //IF isFalse WAS 1 THEN IT SUBTRACTS 1 FROM I TO CLEAR THE EMPTY SPACE CREATED IN THE LOOP
                words--;    //SUBTRACTS 1 FROM WORDS FOR LATER USE
            }
        }
        else {      //IF THE WORD WAS A STOP WORD 
            i--;    //SUBTRACTS 1 FROM I TO CLEAR THE EMPTY SPACE CREATED IN THE LOOP
            words--;        //SUBTRACTS 1 FROM WORDS FOR LATER USE
        }
    }
    
    //***************************************************************************************************
    //BELOW IS THE OUTPUT FOR THE WORDS, IT IS PRETTY SELF EXPLANATORY, THE IF STATEMENT WITH SPACES WAS 
    //FOR FORMATTING SO THAT THE LENGTH OF THE WORD WOULDN'T INFLUENCE THE FORMAT OF THE OUTPUT.
    //***************************************************************************************************
    
    cout << " _____________________________________________________________________________" << endl;
    cout << "|Word                     |Amount                   |First Index of Occurance |" << endl;
    cout << "|-------------------------|-------------------------|-------------------------|" << endl;
    
    fout << " _____________________________________________________________________________" << endl;
    fout << "|Word                     |Amount                   |First Index of Occurance |" << endl;
    fout << "|-------------------------|-------------------------|-------------------------|" << endl;
    for (int k = 0; k <= words; k++) {
        cout <<"|" << arrayObjects[k].getWord();
        if (arrayObjects[k].getWord().length() == 1) {
            cout << "                        ";
        }
        else if (arrayObjects[k].getWord().length() == 2) {
            cout << "                       ";
        }
        else if (arrayObjects[k].getWord().length() == 3) {
            cout << "                      ";
        }
        else if (arrayObjects[k].getWord().length() == 4) {
            cout << "                     ";
        }
        else if (arrayObjects[k].getWord().length() == 5) {
            cout << "                    ";
        }
        else if (arrayObjects[k].getWord().length() == 6) {
            cout << "                   ";
        }
        else if (arrayObjects[k].getWord().length() == 7) {
            cout << "                  ";
        }
        else if (arrayObjects[k].getWord().length() == 8) {
            cout << "                 ";
        }
        else if (arrayObjects[k].getWord().length() == 9) {
            cout << "                ";
        }
        else if (arrayObjects[k].getWord().length() == 10) {
            cout << "               ";
        }
        else if (arrayObjects[k].getWord().length() == 11) {
            cout << "              ";
        }
        else if (arrayObjects[k].getWord().length() == 12) {
            cout << "             ";
        }
        else if (arrayObjects[k].getWord().length() == 13) {
            cout << "            ";
        }
        else if (arrayObjects[k].getWord().length() == 14) {
            cout << "           ";
        }
        else if (arrayObjects[k].getWord().length() == 15) {
            cout << "          ";
        }
        else if (arrayObjects[k].getWord().length() == 16) {
            cout << "         ";
        }
        else if (arrayObjects[k].getWord().length() == 17) {
            cout << "        ";
        }
        else if (arrayObjects[k].getWord().length() == 18) {
            cout << "       ";
        }
        else if (arrayObjects[k].getWord().length() == 19) {
            cout << "      ";
        }
        else if (arrayObjects[k].getWord().length() == 20) {
            cout << "     ";
        }
        
        cout <<"|" << arrayObjects[k].getAmountOccured();
        if (arrayObjects[k].getAmountOccured() < 10) {
            cout << "                        ";
        }
        else if (arrayObjects[k].getAmountOccured() < 100) {
            cout << "                       ";
        }
        else if (arrayObjects[k].getAmountOccured() < 1000) {
            cout << "                      ";
        }
        else if (arrayObjects[k].getAmountOccured() < 10000) {
            cout << "                     ";
        }
        else if (arrayObjects[k].getAmountOccured() < 100000) {
            cout << "                    ";
        }
        
        cout <<"|" << arrayObjects[k].getIndexFirstOccurance();
        if (arrayObjects[k].getIndexFirstOccurance() < 10) {
            cout << "                        |";
        }
        else if (arrayObjects[k].getIndexFirstOccurance() < 100) {
            cout << "                       |";
        }
        else if (arrayObjects[k].getIndexFirstOccurance() < 1000) {
            cout << "                      |";
        }
        else if (arrayObjects[k].getIndexFirstOccurance() < 10000) {
            cout << "                     |";
        }
        else if (arrayObjects[k].getIndexFirstOccurance() < 100000) {
            cout << "                    |";
        }
        cout << endl;
        
        
        fout <<"|" << arrayObjects[k].getWord();
        if (arrayObjects[k].getWord().length() == 1) {
            fout << "                        ";
        }
        else if (arrayObjects[k].getWord().length() == 2) {
            fout << "                       ";
        }
        else if (arrayObjects[k].getWord().length() == 3) {
            fout << "                      ";
        }
        else if (arrayObjects[k].getWord().length() == 4) {
            fout << "                     ";
        }
        else if (arrayObjects[k].getWord().length() == 5) {
            fout << "                    ";
        }
        else if (arrayObjects[k].getWord().length() == 6) {
            fout << "                   ";
        }
        else if (arrayObjects[k].getWord().length() == 7) {
            fout << "                  ";
        }
        else if (arrayObjects[k].getWord().length() == 8) {
            fout << "                 ";
        }
        else if (arrayObjects[k].getWord().length() == 9) {
            fout << "                ";
        }
        else if (arrayObjects[k].getWord().length() == 10) {
            fout << "               ";
        }
        else if (arrayObjects[k].getWord().length() == 11) {
            fout << "              ";
        }
        else if (arrayObjects[k].getWord().length() == 12) {
            fout << "             ";
        }
        else if (arrayObjects[k].getWord().length() == 13) {
            fout << "            ";
        }
        else if (arrayObjects[k].getWord().length() == 14) {
            fout << "           ";
        }
        else if (arrayObjects[k].getWord().length() == 15) {
            fout << "          ";
        }
        else if (arrayObjects[k].getWord().length() == 16) {
            fout << "         ";
        }
        else if (arrayObjects[k].getWord().length() == 17) {
            fout << "        ";
        }
        else if (arrayObjects[k].getWord().length() == 18) {
            fout << "       ";
        }
        else if (arrayObjects[k].getWord().length() == 19) {
            fout << "      ";
        }
        else if (arrayObjects[k].getWord().length() == 20) {
            fout << "     ";
        }
        
        fout <<"|" << arrayObjects[k].getAmountOccured();
        if (arrayObjects[k].getAmountOccured() < 10) {
            fout << "                        ";
        }
        else if (arrayObjects[k].getAmountOccured() < 100) {
            fout << "                       ";
        }
        else if (arrayObjects[k].getAmountOccured() < 1000) {
            fout << "                      ";
        }
        else if (arrayObjects[k].getAmountOccured() < 10000) {
            fout << "                     ";
        }
        else if (arrayObjects[k].getAmountOccured() < 100000) {
            fout << "                    ";
        }
        
        fout <<"|" << arrayObjects[k].getIndexFirstOccurance();
        if (arrayObjects[k].getIndexFirstOccurance() < 10) {
            fout << "                        |";
        }
        else if (arrayObjects[k].getIndexFirstOccurance() < 100) {
            fout << "                       |";
        }
        else if (arrayObjects[k].getIndexFirstOccurance() < 1000) {
            fout << "                      |";
        }
        else if (arrayObjects[k].getIndexFirstOccurance() < 10000) {
            fout << "                     |";
        }
        else if (arrayObjects[k].getIndexFirstOccurance() < 100000) {
            fout << "                    |";
        }
        fout << endl;
    }
    fout << " ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯" << endl;
    cout << " ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯" << endl;
    fin.close();        //CLOSES THE FIN FILE
    fout.close();       //CLOSES THE FOUT FILE
}