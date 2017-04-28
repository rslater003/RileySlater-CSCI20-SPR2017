//Riley Slater
//April 27, 2017
//Lab 4.6
//This program takes a list of student's names and calculates a transcript for each student including their name, total semesters, semester GPA, semester units, total GPA, and total units.
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ios>
#include <iomanip>
using namespace std;

int main() {
    ifstream fin;   //Declares the ifstream object fin
    ofstream fout;  //Declares the ofstream object fout
        
    fin.open("input.txt");      //Declares input.txt as the input file
    fout.open("output.html");   //Declares output.html as the outputs file
    
    fout << "<html id='center'>" << endl;  //This line gives the html document a wrapper to contain all the elements
    
    int units1[10];
    string grade1[10];
    string firstName1;
    string lastName1;
    int semester1;          //DECLARATIONS OF ALL THE VARIABLES THAT ARE NEEDED FOR FIRST STUDENT'S TRANSCRIPT
    int totalUnits1;
    double gpa1;
    int semesterUnits1 = 0;
    double semesterGPA1 = 0;
    double totalGPA1 = 0;
    
    fin >> firstName1;      //Gets the first name from input.txt
    fin >> lastName1;       //Gets the last name from input.txt
    fin >> semester1;       //Gets the semester number from input.txt
    for (int i = 0; i < 4; i++) {       //For loop to assign values to units and grades for each index of the array
        fin >> units1[i];
        fin >> grade1[i];
    }
    fin >> totalUnits1;     //Gets the totalUnits of the student from input.txt
    fin >> gpa1;
    
    for (int i = 0; i < 4; i++) {   //For loop to calculate the total semester units
        semesterUnits1 = semesterUnits1 + units1[i];
    }
    
    for (int i = 0; i < 4; i++) {   //For loop to calculate the total GPA points of the semester
        if (grade1[i] == "A") {
            semesterGPA1 = semesterGPA1 + (4 * units1[i]);
        }
        else if (grade1[i] == "B") {
            semesterGPA1 = semesterGPA1 + (3 * units1[i]);
        }
        else if (grade1[i] == "C") {
            semesterGPA1 = semesterGPA1 + (2 * units1[i]);
        }
        else if (grade1[i] == "D") {
            semesterGPA1 = semesterGPA1 + (1 * units1[i]);   
        }
        else if (grade1[i] == "F") {
            semesterGPA1 = semesterGPA1 + (0 * units1[i]);
        }
    }
    
    semesterGPA1 = semesterGPA1/semesterUnits1;     //Finds the semester GPA
    totalGPA1 = totalUnits1 * gpa1;         //Adds to total GPA the GPA points from all previous semesters (in order to make this more accurate I multiplied the gpa by the total units)
    totalGPA1 = totalGPA1 + (semesterUnits1 * semesterGPA1);    //Adds in the total GPA points from all the semesters
    totalUnits1 = semesterUnits1 + totalUnits1;     //Gets the total units from all semesters
    totalGPA1 = totalGPA1/totalUnits1;      //Gets the total GPA by dividing it by the total units
    

    fout << "<div class = 'div'>" << endl;
    fout << "   <h1>" << firstName1 << " " << lastName1 << "</h1>" << endl;
    fout << "   <h2>Total Semesters: " << semester1 << "</h2>" << endl;
    fout << "   <h2>Total Units in Semester " << semester1 << ": " << semesterUnits1 << "</h2>" << endl;            //THIS IS THE HTML FILE THAT OUTPUTS ALL THE INFORMATION FOR STUDENT 1
    fout << "   <h2>Semester " << semester1 << " GPA: " << semesterGPA1 << "</h2>" << endl;
    fout << "   <h2>Total Units: " << totalUnits1 << "</h2>" << endl;
    fout << "   <h2>Total GPA: " << setprecision(3) << totalGPA1 << "</h2>" << endl;
    fout << "</div>" << endl;
    
    //*******************************************************************************************************************************************************
    //*NOTE* THE REST OF THE DOCUMENT IS JUST COPY AND PASTE THEN CHANGING THE NUMBERS FROM 1 TO 2, THEN FROM 2 TO 3. THE ENDING OF THIS HAS COMMENTS THOUGH.
    //*******************************************************************************************************************************************************
    
    int units2[10];
    string grade2[10];
    string firstName2;
    string lastName2;
    int semester2;
    int totalUnits2;
    double gpa2;
    int semesterUnits2 = 0;
    double semesterGPA2 = 0;
    double totalGPA2 = 0;
    
    fin >> firstName2;
    fin >> lastName2;
    fin >> semester2;
    for (int i = 0; i < 4; i++) {
        fin >> units2[i];
        fin >> grade2[i];
    }
    fin >> totalUnits2;
    fin >> gpa2;
    
    for (int i = 0; i < 4; i++) {
        semesterUnits2 = semesterUnits2 + units2[i];
    }
    
    for (int i = 0; i < 4; i++) {
        if (grade2[i] == "A") {
            semesterGPA2 = semesterGPA2 + (4 * units2[i]);
        }
        else if (grade2[i] == "B") {
            semesterGPA2 = semesterGPA2 + (3 * units2[i]);
        }
        else if (grade2[i] == "C") {
            semesterGPA2 = semesterGPA2 + (2 * units2[i]);
        }
        else if (grade2[i] == "D") {
            semesterGPA2 = semesterGPA2 + (1 * units2[i]);   
        }
        else if (grade2[i] == "F") {
            semesterGPA2 = semesterGPA2 + (0 * units2[i]);
        }
    }
    
    semesterGPA2 = semesterGPA2/semesterUnits2;
    totalGPA2 = totalUnits2 * gpa2;
    totalGPA2 = totalGPA2 + (semesterUnits2 * semesterGPA2);
    totalUnits2 = semesterUnits2 + totalUnits2;
    totalGPA2 = totalGPA2/totalUnits2;
    

    fout << "<div class = 'div'>" << endl;
    fout << "   <h1>" << firstName2 << " " << lastName2 << "</h1>" << endl;
    fout << "   <h2>Total Semesters: " << semester2 << "</h2>" << endl;
    fout << "   <h2>Total Units in Semester " << semester2 << ": " << semesterUnits2 << "</h2>" << endl;
    fout << "   <h2>Semester " << semester2 << " GPA: " << semesterGPA2 << "</h2>" << endl;
    fout << "   <h2>Total Units: " << totalUnits2 << "</h2>" << endl;
    fout << "   <h2>Total GPA: " << setprecision(3) << totalGPA2 << "</h2>" << endl;
    fout << "</div>" << endl;
    
        
    int units3[10];
    string grade3[10];
    string firstName3;
    string lastName3;
    int semester3;
    int totalUnits3;
    double gpa3;
    int semesterUnits3 = 0;
    double semesterGPA3 = 0;
    double totalGPA3 = 0;
    
    fin >> firstName3;
    fin >> lastName3;
    fin >> semester3;
    for (int i = 0; i < 5; i++) {
        fin >> units3[i];
        fin >> grade3[i];
    }
    fin >> totalUnits3;
    fin >> gpa3;
    
    for (int i = 0; i < 5; i++) {
        semesterUnits3 = semesterUnits3 + units3[i];
    }
    
    for (int i = 0; i < 5; i++) {
        if (grade3[i] == "A") {
            semesterGPA3 = semesterGPA3 + (4 * units3[i]);
        }
        else if (grade3[i] == "B") {
            semesterGPA3 = semesterGPA3 + (3 * units3[i]);
        }
        else if (grade3[i] == "C") {
            semesterGPA3 = semesterGPA3 + (2 * units3[i]);
        }
        else if (grade3[i] == "D") {
            semesterGPA3 = semesterGPA3 + (1 * units3[i]);   
        }
        else if (grade3[i] == "F") {
            semesterGPA3 = semesterGPA3 + (0 * units3[i]);
        }
    }
    
    semesterGPA3 = semesterGPA3/semesterUnits3;
    totalGPA3 = totalUnits3 * gpa3;
    totalGPA3 = totalGPA3 + (semesterUnits3 * semesterGPA3);
    totalUnits3 = semesterUnits3 + totalUnits3;
    totalGPA3 = totalGPA3/totalUnits3;
    

    fout << "<div class = 'div'>" << endl;
    fout << "   <h1>" << firstName3 << " " << lastName3 << "</h1>" << endl;
    fout << "   <h2>Total Semesters: " << semester3 << "</h2>" << endl;
    fout << "   <h2>Total Units in Semester " << semester3 << ": " << semesterUnits3 << "</h2>" << endl;
    fout << "   <h2>Semester " << semester3 << " GPA: " << semesterGPA3 << "</h2>" << endl;
    fout << "   <h2>Total Units: " << totalUnits3 << "</h2>" << endl;
    fout << "   <h2>Total GPA: " << setprecision(3) << totalGPA3 << "</h2>" << endl;
    fout << "</div>" << endl;
    
    //BELOW THIS COMMENT IS THE CASCADING STYLE SHEET THAT FORMATS THE DOCUMENT TO GIVE IT A NICE UI
    
    fout << "</html>" << endl << "<style>" << endl << "#center {" << endl << "   text-align:center;" << endl << "   background-image:url('background.jpg');" << endl << "   background-repeat:no-repeat;" << endl << "   background-size:cover;" << endl << "   color:black;" << endl << "}" << endl << ".div {" << endl << "   border: 10px solid black;" << endl << "}" << endl << "</style>" << endl;

    fin.close();        //Closes the input file that was opened
    fout.close();       //Closes the output file that was opened
}