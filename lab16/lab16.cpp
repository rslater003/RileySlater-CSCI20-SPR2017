//Riley Slater
//Lab 1.6
//February 16, 2017
//Created a struct with different characteristics of a monster, then sets 3 monsters to the characteristics with predefined values. Let's user input different characteristics for the last monster.
//Outputs the three monsters with predefined characteristics and the monster with the user selected characteristics.
#include <iostream>
#include <string>
using namespace std;

struct Monster { // Struct for Monster with different characteristics for creating a monster
  string name;
  string head;
  string eyes;
  string ears;
  string nose;
  string mouth;
};

int main() {
    Monster Monster1; //Declaring Object for Monster1 with predefined strings in each of the characteristics of the monster
    Monster1.name = "Bo";
    Monster1.head = "Wackus";
    Monster1.eyes = "Spiritem";
    Monster1.ears = "Vegitas";
    Monster1.nose = "Spiritem";
    Monster1.mouth = "Zombus";
    
    Monster Monster2; //Declaring Object for Monster2 with predefined strings in each of the characteristics of the monster
    Monster2.name = "Bob";
    Monster2.head = "Spiritem";
    Monster2.eyes = "Wackus";
    Monster2.ears = "Zombus";
    Monster2.nose = "Vegitas";
    Monster2.mouth = "Spiritem";
    
    Monster Monster3; //Declaring Object for Monster3 with predefined strings in each of the characteristics of the monster
    Monster3.name = "Bobby";
    Monster3.head = "Wackus";
    Monster3.eyes = "Vegitas";
    Monster3.ears = "Wackus";
    Monster3.nose = "Spiritem";
    Monster3.mouth = "Zombus";
    
    Monster Monster4;                                                       //Allows User to input different Struc characteristics for the fourth monster created
    cout << "What would you like you're Monster to be named: ";
    cin >> Monster4.name;
    cout << "What would you like you're Monster's head to be (Zombus, Spiritem, Vegitas, Wackus, None): ";
    cin >> Monster4.head;
    cout << "What would you like you're Monster's eyes to be (Zombus, Spiritem, Vegitas, Wackus, None): ";
    cin >> Monster4.eyes;
    cout << "What would you like you're Monster's ears to be (Zombus, Spiritem, Vegitas, Wackus, None): ";
    cin >> Monster4.ears;
    cout << "What would you like you're Monster's nose to be (Zombus, Spiritem, Vegitas, Wackus, None): ";
    cin >> Monster4.nose;
    cout << "What would you like you're Monster's mouth to be (Zombus, Spiritem, Vegitas, Wackus, None): ";
    cin >> Monster4.mouth;    
    
    // Outputs Monster 1-4 with tags in front of each struct characteristic
    
    cout << endl << "You're Monster " << endl << "Name: " << Monster4.name << endl << "Head: " << Monster4.head << endl << "Eyes: " << Monster4.eyes << endl << "Ears: " << Monster4.ears << endl << "Nose: " << Monster4.nose << endl << "Mouth: " << Monster4.mouth << endl << endl;
    cout << "Name: " << Monster1.name << endl << "Head: " << Monster1.head << endl << "Eyes: " << Monster1.eyes << endl << "Ears: " << Monster1.ears << endl << "Nose: " << Monster1.nose << endl << "Mouth: " << Monster1.mouth << endl << endl;
    cout << "Name: " << Monster2.name << endl << "Head: " << Monster2.head << endl << "Eyes: " << Monster2.eyes << endl << "Ears: " << Monster2.ears << endl << "Nose: " << Monster2.nose << endl << "Mouth: " << Monster1.mouth << endl << endl;
    cout << "Name: " << Monster3.name << endl << "Head: " << Monster3.head << endl << "Eyes: " << Monster3.eyes << endl << "Ears: " << Monster3.ears << endl << "Nose: " << Monster3.nose << endl << "Mouth: " << Monster3.mouth << endl << endl;

}