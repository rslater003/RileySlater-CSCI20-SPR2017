//Riley Slater
//Lab 2.6
//March 9, 2017
//Program Accepts a Kelvin, Celsius, or Fahrenheit Value and then converts it to the other two and returns all different degree types. 
#include<iostream>
#include<string>
using namespace std;

class TemperatureConverter {    //Creates class called Temperature Converter
    public:
        void SetTempFromKelvin(double k);   //Declares Public type void Set Temperature from Kelvin
        double GetTempFromKelvin();         //Declares Public type double Get Temperature from Kelvin
        void SetTempFromCelsius(double celsius);    //Declares Public type void Set Temperature from Celsius
        void SetTempFromFahrenheit(double fahrenheit);  //Declares Public type void Set Temperature from Fahrenheit
        double GetTempAsCelsius();          //Declares Public type double Get Temperature As Celsius
        double GetTempAsFahrenheit();       //Declares Public type double Get Temperature As Fahrenheit
        void PrintTemperatures();           //Declares Public type void Print Temperature
        TemperatureConverter();             //Declares Default Constructor
        TemperatureConverter(double k);     //Declares Public Overloaded Constructor with parameter type double for a value for kelvin
    private:
        double kelvin_; //Declares Private variable for Kelvin
};
TemperatureConverter::TemperatureConverter() {  //Default Constructor
    kelvin_ = 0;
}
TemperatureConverter::TemperatureConverter(double k) {  //Overloaded Constructor takes kelvin value and stores it in kelvin_
    kelvin_ = k;
}
void TemperatureConverter::SetTempFromKelvin(double k) {    //Sets Temperature From Kelvin
    kelvin_ = k;
    return;
}
double TemperatureConverter::GetTempFromKelvin() {  //Gets Temperature from Kelvin
    return kelvin_;
}
void TemperatureConverter::SetTempFromCelsius(double celsius) { //Sets Temperature From Celsius
    kelvin_ = celsius + 273.15; 
    return;
}
void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit) {   //Sets Temperature From Fahrenheit
    kelvin_ =  (5 * (fahrenheit - 32)/9) + 273.15;
    return;
}
double TemperatureConverter::GetTempAsCelsius() {   //Gets Temperature As Celsius
    return kelvin_ - 273.15;
}
double TemperatureConverter::GetTempAsFahrenheit() {    //Gets Temperature As Fahrenheit
    return (((kelvin_ - 273.15)*9)/5 + 32);
}
void TemperatureConverter::PrintTemperatures() {    //PRINT FUNCTION TO OUTPUT VALUES OF TEMPERATURE
    cout << "Kelvin Temperature: " << kelvin_ << endl;
    cout << "Celsius Temperature: " << GetTempAsCelsius() << endl;
    cout << "Fahrenheit Temperature: " << GetTempAsFahrenheit() << endl;
    cout << endl << endl;
}

/* Created By: April Browne
 * Created On: 9/22/2016
 * This program will run the Temperature Converter Class
*/
 
int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}