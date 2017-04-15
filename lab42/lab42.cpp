//Riley Slater
//CSCI 20
//April 14, 2017
//This program is a shop that allows the user to purchase up to 20 bike items, it tells the user if the store has ran out of stock, it also has base costs for each item and calculates
//the cost after each item. When the user is done they tell the comput and it outputs the final cost as well as the shopping cart.
#include <iostream>
#include <string>
using namespace std;

int NEW_VALUE_OF_BOUGHT = -1;       //Used in case the user inputs more than the the inventory has, if the inventory has too much the function can't set the variable used in the main because the scope isn't right, so the global variable can set it right if this variable is not -1

//PRODUCT COSTS GLOBALLY SET SO THE FUNCTION CAN USE THEM WITHOUT NEEDING PARAMETERS INPUTS
const int ROAD_BIKE_COST = 100;
const int MOUNTAIN_BIKE_COST = 80;
const int CROSS_BIKE_COST = 90;
const int CRUISER_BIKE_COST = 70;
const int POWERED_BIKE_COST = 110;
const int BIKE_PUMP_COST = 15; 
const int BIKE_TIRE_COST = 11;
const int BIKE_HELMET_COST = 10;
const int SPORT_WATCH_COST = 20;
const int BIKE_BELL_COST = 3;


int InventorySubtraction(int productAmount, int amountBought, string typeOfProduct) {   //FUNCTION TO SUBTRACT THE PRODUCT BOUGHT FROM USER FROM THE INVENTORY THE STORE HAS, TAKES IN PARAMETERS OF THE PRODUCT INVENTORY, AMOUNT BOUGHT, AND THE TYPE OF PRODUCT
    int productLeft = 0;
    productLeft = productAmount - amountBought;
    while (productLeft < 0) {
        productLeft = productAmount + amountBought;
        cout << "You can't purchase that many " << typeOfProduct << ", there are " << productAmount << " left, please enter a new amount: ";
        cin >> amountBought;
        NEW_VALUE_OF_BOUGHT = amountBought;
        productLeft = productAmount - amountBought;
    }
    cout << endl << endl << productLeft;
    return productLeft;
}

int AddToCost(int amountBought, string typeOfProduct) {     //FUNCTION THAT ADDS COST FOR EACH ITEM THE USER BUYS, TAKES INPUT FROM THE FUNCTION CALL OF THE AMOUNT BOUGHT AND WHAT PRODUCT IT WAS
    int cost = 0;
    if (NEW_VALUE_OF_BOUGHT != -1) {
        amountBought = NEW_VALUE_OF_BOUGHT;
    }
    if (typeOfProduct == "Road Bike") {
        cost = ROAD_BIKE_COST * amountBought;
    }
    else if (typeOfProduct == "Mountain Bike") {
        cost = MOUNTAIN_BIKE_COST * amountBought;
    }
    else if (typeOfProduct == "Cross Bike") {
        cost = CROSS_BIKE_COST * amountBought;
    }
    else if (typeOfProduct == "Cruiser Bike") {
        cost = CRUISER_BIKE_COST * amountBought;
    }
    else if (typeOfProduct == "Powered Bike") {
        cost = POWERED_BIKE_COST * amountBought;
    }
    else if (typeOfProduct == "Bike Pump") {
        cost = BIKE_PUMP_COST * amountBought;
    }
    else if (typeOfProduct == "Bike Tire") {
        cost = BIKE_TIRE_COST * amountBought;
    }
    else if (typeOfProduct == "Bike Helmet") {
        cost = BIKE_HELMET_COST * amountBought;
    }
    else if (typeOfProduct == "Sport Watch") {
        cost = SPORT_WATCH_COST * amountBought;
    }
    else if (typeOfProduct == "Bike Bell") {
        cost = BIKE_BELL_COST * amountBought;
    }
    return cost;
}

int main() {
    int arraySize = 20;     //ARRAY SIZE OF PARALLEL ARRAYS
    //PRODUCT AMOUNT IN INVENTORY
    int roadBikeInventory = 10;
    int mountainBikeInventory = 8;
    int crossBikeInventory = 9;
    int cruiserBikeInventory = 4;
    int poweredBikeInventory = 3;
    int bikePumpInventory = 15;
    int bikeTireInventory = 16;
    int bikeHelmetInventory = 8;
    int sportWatchInventory = 5;
    int bikeBellInventory = 2;
    //INPUT
    string userProductEntered[arraySize];           //PARALLEL ARRAYS
    int userAmountPurchase[arraySize];              //***************
    int shoppingTotal = 0;
    int totalCost = 0;
    
    cout << "~~~~~~~~~~~ Welcome to Bikers Paradise ~~~~~~~~~~~" << endl;
    cout << "~~~~~~~ Here is a list of all of our items ~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~ Road Bikes: $100 ~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~ Mountain Bikes: $80 ~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~ Cross Bikes: $90 ~~~~~~~~~~~~~~~~" << endl;           ///THE SHOP ITSELF
    cout << "~~~~~~~~~~~~~~~ Cruiser Bikes: $70 ~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~ Powered Bikes: $110 ~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~ Bike Pumps: $15 ~~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~ Bike Tires: $11 ~~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~ Bike Helmets: $10 ~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~ Sport Watches: $20 ~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~ Bike Bells: $3 ~~~~~~~~~~~~~~~~~~" << endl;
    int i = 0;      //BELOW IS THE LOOP THAT RUNS THROUGH UNTIL THE USER DECIDES TO STOP BUYING ITEMS FORM THE SHOP
    for (i = 0; userProductEntered[i - 1] != "done" || userProductEntered[i - 1] != "Done" || userProductEntered[i - 1] != "quit" || userProductEntered[i - 1] != "Quit" || userProductEntered[i - 1] != "finished" || userProductEntered[i - 1] != "Finished"; i++) {
        NEW_VALUE_OF_BOUGHT = -1;
        if (i == 0) {
            cout << endl << "Please enter a name of a product (type done, quit, or finished to end) (Type it as shown above with plurality or without, with case sensitivity or without): ";
        }
        getline(cin, userProductEntered[i]);
                //WHILE LOOP THAT TEST TO MAKE SURE THE USER INPUTTED A VALID STRING INTO THE INPUT
        while (userProductEntered[i] != "done" && userProductEntered[i] != "Done" && userProductEntered[i] != "quit" && userProductEntered[i] != "Quit" && userProductEntered[i] != "finished" && userProductEntered[i] != "Finished" && userProductEntered[i] != "Road Bike" && userProductEntered[i] != "Road Bikes" && userProductEntered[i] != "road bike" && userProductEntered[i] != "road bikes" && userProductEntered[i] != "Mountain Bike" && userProductEntered[i] != "Mountain Bikes" && userProductEntered[i] != "mountain bike" && userProductEntered[i] != "mountain bikes" && userProductEntered[i] != "Cross Bike" && userProductEntered[i] != "Cross Bikes" && userProductEntered[i] != "cross bike" && userProductEntered[i] != "cross bikes" && userProductEntered[i] != "Cruiser Bike" && userProductEntered[i] != "Cruiser Bikes" && userProductEntered[i] != "cruiser bike" && userProductEntered[i] != "cruiser bikes" && userProductEntered[i] != "Powered Bike" && userProductEntered[i] != "Powered Bikes" && userProductEntered[i] != "powered bike" && userProductEntered[i] != "powered bikes" && userProductEntered[i] != "Bike Pump" && userProductEntered[i] != "Bike Pumps" && userProductEntered[i] != "bike pump" && userProductEntered[i] != "bike pumps" && userProductEntered[i] != "Bike Tire" && userProductEntered[i] != "Bike Tires" && userProductEntered[i] != "bike tire" && userProductEntered[i] != "bike tires" && userProductEntered[i] != "Bike Helmet" && userProductEntered[i] != "Bike Helmets" && userProductEntered[i] != "bike helmet" && userProductEntered[i] != "bike helmets" && userProductEntered[i] != "Sport Watch" && userProductEntered[i] != "Sport Watches" && userProductEntered[i] != "sport watch" && userProductEntered[i] != "sport watches" && userProductEntered[i] != "Bike Bell" && userProductEntered[i] != "Bike Bells" && userProductEntered[i] != "bike bell" && userProductEntered[i] != "bike bells") {
            cout << endl << "Please enter a name of a product (type done, quit, or finished to end) (Type it as shown above with plurality or without, with case sensitivity or without): ";
            getline(cin, userProductEntered[i]);
        }
                //TEST IF THE USER WANTED TO END THE PROGRAM
        if (userProductEntered[i] == "done" || userProductEntered[i] == "Done" || userProductEntered[i] == "quit" || userProductEntered[i] == "Quit" || userProductEntered[i] == "finished" || userProductEntered[i] == "Finished") {
            cout << endl << "~~~~~~~~~~~~~~~~~~ Shopping Cart ~~~~~~~~~~~~~~~~~" << endl;
            for (int j = 0; j <= i - 1; j++) {                                                                                  //THIS LOOP OUTPUTS THE FINAL COST AND THE SHOPPING CART
                cout << "Item " << j + 1 << ": " << userProductEntered[j] << ", " << userAmountPurchase[j] << endl;
            }
            cout << "Final Cost: $" << totalCost;
            break;
        }
        
        cout << "How many would you like to buy: ";
        cin >> userAmountPurchase[i];
        
                    //THESE IF, ELSE IF, ELSE IF... ARE FOR CALLING THE FUNCTIONS THAT ADD THE COST TO THE TOTAL AND SUBTRACT THE INVENTORY FROM THE STORE (TEST FOR POSIITVE INVENTORY AS WELL)
        if (userProductEntered[i] == "Road Bike" || userProductEntered[i] == "Road Bikes" || userProductEntered[i] == "road bike" || userProductEntered[i] == "road bikes") {
            roadBikeInventory = InventorySubtraction(roadBikeInventory, userAmountPurchase[i], "Road Bikes");
            totalCost = totalCost + AddToCost(userAmountPurchase[i], "Road Bike");
        }
        else if (userProductEntered[i] == "Mountain Bike" || userProductEntered[i] == "Mountain Bikes" || userProductEntered[i] == "mountain bike" || userProductEntered[i] == "mountain bikes") {
            mountainBikeInventory = InventorySubtraction(mountainBikeInventory, userAmountPurchase[i], "Mountain Bikes");
            totalCost = totalCost + AddToCost(userAmountPurchase[i], "Mountain Bike");
        }
        else if (userProductEntered[i] == "Cross Bike" || userProductEntered[i] == "Cross Bikes" || userProductEntered[i] == "cross bike" || userProductEntered[i] == "cross bikes") {
            crossBikeInventory = InventorySubtraction(crossBikeInventory, userAmountPurchase[i], "Cross Bikes");
            totalCost = totalCost + AddToCost(userAmountPurchase[i], "Cross Bike");
        }
        else if (userProductEntered[i] == "Cruiser Bike" || userProductEntered[i] == "Cruiser Bikes" || userProductEntered[i] == "cruiser bike" || userProductEntered[i] == "cruiser bikes") {
            cruiserBikeInventory = InventorySubtraction(cruiserBikeInventory, userAmountPurchase[i], "Cruiser Bikes");
            totalCost = totalCost + AddToCost(userAmountPurchase[i], "Cruiser Bike");
        }
        else if (userProductEntered[i] == "Powered Bike" || userProductEntered[i] == "Powered Bikes" || userProductEntered[i] == "powered bike" || userProductEntered[i] == "powered bikes") {
            poweredBikeInventory = InventorySubtraction(poweredBikeInventory, userAmountPurchase[i], "Powered Bikes");
            totalCost = totalCost + AddToCost(userAmountPurchase[i], "Powered Bike");
        }
        else if (userProductEntered[i] == "Bike Pump" || userProductEntered[i] == "Bikes Pumps" || userProductEntered[i] == "bike pump" || userProductEntered[i] == "bike pumps") {
            bikePumpInventory = InventorySubtraction(bikePumpInventory, userAmountPurchase[i], "Bike Pumps");
            totalCost = totalCost + AddToCost(userAmountPurchase[i], "Bike Pump");
        }
        else if (userProductEntered[i] == "Bike Tire" || userProductEntered[i] == "Bike Tires" || userProductEntered[i] == "bike tire" || userProductEntered[i] == "bike tires") {
            bikeTireInventory = InventorySubtraction(bikeTireInventory, userAmountPurchase[i], "Bike Tires");
            totalCost = totalCost + AddToCost(userAmountPurchase[i], "Bike Tire");
        }
        else if (userProductEntered[i] == "Bike Helmet" || userProductEntered[i] == "Bike Helmets" || userProductEntered[i] == "bike helmet" || userProductEntered[i] == "bike helmets") {
            bikeHelmetInventory = InventorySubtraction(bikeHelmetInventory, userAmountPurchase[i], "Bike Helmets");
            totalCost = totalCost + AddToCost(userAmountPurchase[i], "Bike Helmet");
        }
        else if (userProductEntered[i] == "Sport Watch" || userProductEntered[i] == "Sport Watches" || userProductEntered[i] == "sport watch" || userProductEntered[i] == "sport watches") {
            sportWatchInventory = InventorySubtraction(sportWatchInventory, userAmountPurchase[i], "Sport Watches");
            totalCost = totalCost + AddToCost(userAmountPurchase[i], "Sport Watch");
        }
        else if (userProductEntered[i] == "Bike Bell" || userProductEntered[i] == "Bike Bells" || userProductEntered[i] == "bike bell" || userProductEntered[i] == "bike bells") {
            bikeBellInventory = InventorySubtraction(bikeBellInventory, userAmountPurchase[i], "Bike Bells");
            totalCost = totalCost + AddToCost(userAmountPurchase[i], "Bike Bell");
        }
        if (NEW_VALUE_OF_BOUGHT != -1) {
            userAmountPurchase[i] = NEW_VALUE_OF_BOUGHT;
        }
        
        //OUTPUTS THE SHOPPING CART AS WELL AS THE TOTAL AFTER EACH LOOP THROUGH
        cout << endl << "~~~~~~~~~~~~~~~~~~ Shopping Cart ~~~~~~~~~~~~~~~~~" << endl;
        for (int j = 0; j <= i; j++) {
                cout << "Item " << j + 1 << ": " << userProductEntered[j] << ", " << userAmountPurchase[j] << endl;
        }
        cout << "Cost So Far: $" << totalCost << endl;
    }
}