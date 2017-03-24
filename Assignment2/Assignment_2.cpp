#include <iostream>
#include <string>
using namespace std;

class DistanceConverter {   //Creates Class DistanceConverter
    public:
    
    void setInches(double i);   //Public Set Inches
    double getInches();         //Public Get Inches
    void setYards(double y);    //Public Set Yards
    double getYards();          //Public Get Yards
    void setMeters(double m);   //Public Set Meters
    double getMeters();         //Public Get Meters         //ALL OF THESE ARE DECLARATIONS
    void setFeet(double f);     //Public Set Feet
    double getFeet();           //Public Get Feet
    void setMiles(double m);    //Public Set Miles
    double getMiles();          //Public Get Miles
    void PrintFunction();       //Print Function
    DistanceConverter();        //Default Constructor
    DistanceConverter(double i);    //Overloaded Constructor
    
    private:
    
    double inches_; //Private Variable of type double: inches_
};

DistanceConverter::DistanceConverter() {    //Default Constructor Definition
    inches_ = 0;
}
DistanceConverter::DistanceConverter(double i) {    //Overloaded Constructor with parameters for double i Definition
    inches_ = i;
}
void DistanceConverter::setInches(double i) {   //Set Inches
    inches_ = i;
    return;
}
double DistanceConverter::getInches() { //Get Inches
    return inches_;
}
void DistanceConverter::setYards(double y) {    //Set Yards
    inches_ = y * 36;
    return;
}
double DistanceConverter::getYards() {  //Get Yards
    return inches_ / 36;
}
void DistanceConverter::setMeters(double m) {   //Set Meters
    inches_ = m * 39.3700787;
    return;
}
double DistanceConverter::getMeters() { //Get Meters
    return inches_ / 39.3700787;
}
void DistanceConverter::setFeet(double f) { //Set Feet
    inches_ = f * 12;
    return;
}
double DistanceConverter::getFeet() {   //Get Feet
    return inches_/12;
}
void DistanceConverter::setMiles(double m) {    //Set Miles
    inches_ = m * 63360;
    return;
}
double DistanceConverter::getMiles() {  //Get Miles
    return inches_ / 63360;
}
void DistanceConverter::PrintFunction() {   //Print Function to output all distance types
    cout << endl;
    cout << "Inches: " << inches_ << endl;
    cout << "Feet: " << getFeet() << endl;
    cout << "Yards: " << getYards() << endl;
    cout << "Meters: " << getMeters() << endl;
    cout << "Miles: " << getMiles() << endl;
    cout << endl;
}

int main() {
    DistanceConverter measurement1;
    DistanceConverter measurement2;
    DistanceConverter measurement3;
    DistanceConverter measurement4;                 //DECLARATIONS OF OBJECTS OF DISTANCE CONVERTER CLASS TYPE
    DistanceConverter measurement5;
    DistanceConverter measurement6;
    DistanceConverter measurement7(100);
    DistanceConverter measurement8;
    DistanceConverter measurement9;
    
    measurement1.setMiles(1);                                           //Sets Miles to 1
    cout << measurement1.getFeet() << " feet" << endl << endl;          //Gets Feet Measurement
    cout << "All Units: ";                                              
    measurement1.PrintFunction();                                       //Prints rest of Distance Types
    
    measurement2.setMiles(1);                                           //Sets Miles to 1
    cout << measurement1.getInches() << " inches" << endl << endl;      //Gets Inches Measurement
    cout << "All Units: ";
    measurement2.PrintFunction();                                       //Prints rest of Distance Types
    
    measurement3.setMiles(1);                                           //Sets Miles to 1
    cout << measurement3.getMeters() << " meters" << endl << endl;      //Gets Meters Measurement
    cout << "All Units: ";
    measurement3.PrintFunction();                                       //Prints rest of Distance Types
    
    measurement4.setMiles(1);                                           //Sets Miles to 1
    cout << measurement4.getYards() << " yards" << endl << endl;        //Gets Yards Measurement
    cout << "All Units: ";
    measurement4.PrintFunction();                                       //Prints rest of Distance Types
    
    measurement5.setFeet(16);                                           //Sets Feet to 16
    cout << measurement5.getMiles() << " miles" << endl << endl;        //Gets Miles Measurement
    cout << "All Units: ";
    measurement5.PrintFunction();                                       //Prints rest of Distance Types
    
    measurement6.setYards(20);                                          //Sets Yards to 20
    cout << measurement6.getFeet() << " feet" << endl << endl;          //Gets Feet Measurement
    cout << "All Units: ";
    measurement6.PrintFunction();                                       //Prints rest of Distance Types
    
    measurement7.setInches(100);                                        //Sets Inches to 100
    cout << measurement7.getMiles() << " miles" << endl << endl;        //Gets Miles Measurement
    cout << "All Units: ";
    measurement7.PrintFunction();                                       //Prints rest of Distance Types
    
    measurement8.setMeters(1);                                          //Sets Meters to 1
    cout << measurement8.getMiles() << " miles" << endl << endl;        //Gets Miles Measurement
    cout << "All Units: "; 
    measurement8.PrintFunction();                                       //Prints rest of Distance Types
    
    measurement9.setFeet(247);
    cout << measurement9.getMeters() << " inches" << endl << endl;
    cout << "All Units: ";
    measurement9.PrintFunction();
    
    return 0;
}