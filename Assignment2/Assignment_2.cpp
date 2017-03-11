#include <iostream>
#include <string>
using namespace std;

class DistanceConverter {
    public:
    
    void setInches(double i);
    double getInches();
    void setYards(double y);
    double getYards();
    void setMeters(double m);
    double getMeters();
    void setFeet(double f);
    double getFeet();
    void setMiles(double m);
    double getMiles();
    void PrintFunction();
    DistanceConverter();
    DistanceConverter(double i);
    
    private:
    
    double inches_;
};

DistanceConverter::DistanceConverter() {
    inches_ = 0;
}
DistanceConverter::DistanceConverter(double i) {
    inches_ = i;
}
void DistanceConverter::setInches(double i) {
    inches_ = i;
    return;
}
double DistanceConverter::getInches() {
    return inches_;
}
void DistanceConverter::setYards(double y) {
    inches_ = y * 36;
    return;
}
double DistanceConverter::getYards() {
    return inches_ / 36;
}
void DistanceConverter::setMeters(double m) {
    inches_ = m * 39.3700787;
    return;
}
double DistanceConverter::getMeters() {
    return inches_ / 39.3700787;
}
void DistanceConverter::setFeet(double f) {
    inches_ = f * 12;
    return;
}
double DistanceConverter::getFeet() {
    return inches_/12;
}
void DistanceConverter::setMiles(double m) {
    inches_ = m * 63360;
    return;
}
double DistanceConverter::getMiles() {
    return inches_ / 63360;
}
void DistanceConverter::PrintFunction() {
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
    DistanceConverter measurement4;
    DistanceConverter measurement5;
    DistanceConverter measurement6;
    DistanceConverter measurement7(100);
    DistanceConverter measurement8;
    
    measurement1.setMiles(1);
    cout << measurement1.getFeet() << " feet" << endl << endl;
    cout << "All Units: ";
    measurement1.PrintFunction();
    
    measurement2.setMiles(1);
    cout << measurement1.getInches() << " inches" << endl << endl;
    cout << "All Units: ";
    measurement2.PrintFunction();
    
    measurement3.setMiles(1);
    cout << measurement3.getMeters() << " meters" << endl << endl;
    cout << "All Units: ";
    measurement3.PrintFunction();
    
    measurement4.setMiles(1);
    cout << measurement4.getYards() << " yards" << endl << endl;
    cout << "All Units: ";
    measurement4.PrintFunction();
    
    measurement5.setFeet(16);
    cout << measurement5.getMiles() << " miles" << endl << endl;
    cout << "All Units: ";
    measurement5.PrintFunction();
    
    measurement6.setYards(20);
    cout << measurement6.getFeet() << " feet" << endl << endl;
    cout << "All Units: ";
    measurement6.PrintFunction();
    
    measurement7.setInches(100);
    cout << measurement7.getMiles() << " miles" << endl << endl;
    cout << "All Units: ";
    measurement7.PrintFunction();
    
    measurement8.setMeters(1);
    cout << measurement8.getMiles() << " miles" << endl << endl;
    cout << "All Units: ";
    measurement8.PrintFunction();
    
    return 0;
}