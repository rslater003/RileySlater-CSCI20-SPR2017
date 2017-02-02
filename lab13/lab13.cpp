
#include <iostream>
 
using namespace std;
int main() {
    int currentPopulation = 324472945;
    int years = 0;
    int secondsPerYear = 31536000;
    int birthRate = 8;
    int deathRate = 11;
    int immigrantRate = 29;
    int birthsPerYear = secondsPerYear / birthRate;
    int deathsPerYear = secondsPerYear / deathRate;
    int immigrantsPerYear = secondsPerYear / immigrantRate;
    cout << "How many years into the population would you like to see? ";
    cin >> years;
    cout << "The Population would be " << currentPopulation + (years * birthsPerYear) - (years * deathsPerYear) + (years * immigrantsPerYear) << " people!" << endl;
}

