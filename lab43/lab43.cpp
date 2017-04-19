#include <iostream>
#include <string>
using namespace std;

int inventory[30] = {8,4,7,8,5,7,9,6,8,8,6,6,5,6,8,5,6,9,9,3,6,7,3,2,8,9,10,15,6,7};
int ARRAY_SIZE = 20;
int TOTAL_WANTED = 0;
class ShoppingTools { 
    private:
        int objectID_;
        int price_;
        int currentInventory_;
        int amountBought_;
    public:
        ShoppingTools();
        void setObjectID(int ID);
        void setPrice(int price);
        void setAmountBought(int amountBought);
        void setCurrentInventory(int itemID);
        int getPrice();
        int getAmountBought();
};
ShoppingTools::ShoppingTools() {
    int totalCost_ = 0;
}
void ShoppingTools::setObjectID(int ID) {
    objectID_ = ID;
}
void ShoppingTools::setPrice(int price) {
    price_ = price;
}
void ShoppingTools::setAmountBought(int amountBought) {
    amountBought_ = amountBought;
}
void ShoppingTools::setCurrentInventory(int itemID) {
    currentInventory_ = inventory[itemID - 1];
    currentInventory_ = currentInventory_ - TOTAL_WANTED;
    while (currentInventory_ < 0) {
        currentInventory_ = currentInventory_ + TOTAL_WANTED;
        cout << "We're Sorry But We Don't Have That Many, We Have: " << currentInventory_ << endl;
        cout << "Please select a Valid Amount: ";
        cin >> TOTAL_WANTED;
        currentInventory_ = currentInventory_ - TOTAL_WANTED;
    }
}
int ShoppingTools::getPrice() {
    return price_;
}
int ShoppingTools::getAmountBought() {
    return amountBought_;
}

int main() {
    string itemInput = "";
    int itemID = 0;
    ShoppingTools shoppingCart[ARRAY_SIZE];
    int price[30] = {1,1,1,1,1,1,4,4,4,4,4,4,3,3,3,3,3,3,4,4,4,4,4,4,10,10,10,10,10,10};
    
    cout << "Welcome to Grocery Mart" << endl;
    cout << "Here is a list of all our items" << endl;
    cout << " ________________________________________________________________________________ " << endl;
    cout << "|~~Fruits $1~~|" << "~~Breads $4~~|" << "~~~Drinks $3~~|" << "~~Cheeses $4~~|" << "~~~Frozen Pizza $10~~~|" << endl;
    cout << "|-------------|" << "-------------|" << "--------------|" << "--------------|" << "----------------------|" << endl;
    cout << "|~DragonFruit~|" << "~Whole Grain~|" << "~~~~Sprite~~~~|" << "~~PepperJack~~|" << "~~~~~Cheese Pizza~~~~~|" << endl;
    cout << "|~~~Bananas~~~|" << "~~~~Wheat~~~~|" << "~~~Lemonade~~~|" << "~~~American~~~|" << "~~~~~~Tomato Pie~~~~~~|" << endl;
    cout << "|~~~Oranges~~~|" << "~~Sourdough~~|" << "~~~~Coffee~~~~|" << "~~~~~Feta~~~~~|" << "~~~~Hawaiian Pizza~~~~|" << endl;
    cout << "|~~~Peaches~~~|" << "~~~~White~~~~|" << "~~~Iced Tea~~~|" << "~~Mozzarella~~|" << "~~~~~Veggie Pizza~~~~~|" << endl;
    cout << "|~~Pineapple~~|" << "~~~~Bagel~~~~|" << "~~~RootBeer~~~|" << "~~~~Cotija~~~~|" << "~~~~Grandma Slices~~~~|" << endl;
    cout << "|~~~Mangoes~~~|" << "~~Baguettes~~|" << "~Mountain Dew~|" << "~~~~~Goat~~~~~|" << "~~~~~~Pizza Cone~~~~~~|" << endl;
    cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ " << endl;
    
    int i = 0;
    for (i = 0; true; i++) {
        TOTAL_WANTED = 0;
        cout << endl << "Type checkout if you would like to go to your Checkout!" << endl;
        if (i == 0) {
            cout << "What would you like to buy (Make Sure The Item is Entered As Shown Above or this will continue to pop up): ";
        }
        getline(cin, itemInput);
        
        while (itemInput != "checkout" && itemInput != "Checkout" && itemInput != "DragonFruit" && itemInput != "Bananas" && itemInput != "Oranges" && itemInput != "Peaches" && itemInput != "Pineapple" && itemInput != "Mangoes" && itemInput != "Whole Grain" && itemInput != "Wheat" && itemInput != "Sourdough" && itemInput != "Bagel" && itemInput != "White" && itemInput != "Baguette" && itemInput != "Sprite" && itemInput != "Lemonade" && itemInput != "Coffee" && itemInput != "Iced Tea" && itemInput != "RootBeer" && itemInput != "Mountain Dew" && itemInput != "PepperJack" && itemInput != "American" && itemInput != "Feta" && itemInput != "Mozzarella" && itemInput != "Cotija" && itemInput != "Goat" && itemInput != "Cheese Pizza" && itemInput != "Tomato Pie" && itemInput != "Hawaiian Pizza" && itemInput != "Veggie Pizza" && itemInput != "Grandma Slices" && itemInput != "Pizza Cone") {
            cout << "What would you like to buy (Make Sure The Item is Entered As Shown Above or this will continue to pop up): ";
            getline(cin, itemInput);
        }
        if (itemInput == "checkout" || itemInput == "Checkout") {
            break;
        }
        cout << "How Many Would You Like: ";
        cin >> TOTAL_WANTED;
        if (itemInput == "DragonFruit") {
            itemID = 1;
        }
        else if (itemInput == "Bananas") {
            itemID = 2;
        }
        else if (itemInput == "Oranges") {
            itemID = 3;
        }
        else if (itemInput == "Peaches") {
            itemID = 4;
        }
        else if (itemInput == "Pineapple") {
            itemID = 5;
        }
        else if (itemInput == "Mangoes") {
            itemID = 6;
        }
        else if (itemInput == "Whole Grain") {
            itemID = 7;
        }
        else if (itemInput == "Wheat") {
            itemID = 8;
        }
        else if (itemInput == "Sourdough") {
            itemID = 9;
        }
        else if (itemInput == "White") {
            itemID = 10;
        }
        else if (itemInput == "Bagel") {
            itemID = 11;
        }
        else if (itemInput == "Baguettes") {
            itemID = 12;
        }
        else if (itemInput == "Sprite") {
            itemID = 13;
        }
        else if (itemInput == "Lemonade") {
            itemID = 14;
        }
        else if (itemInput == "Coffee") {
            itemID = 15;
        }
        else if (itemInput == "Iced Tea") {
            itemID = 16;
        }
        else if (itemInput == "RootBeer") {
            itemID = 17;
        }
        else if (itemInput == "Mountain Dew") {
            itemID = 18;
        }
        else if (itemInput == "PepperJack") {
            itemID = 19;
        }
        else if (itemInput == "American") {
            itemID = 20;
        }
        else if (itemInput == "Feta") {
            itemID = 21;
        }
        else if (itemInput == "Mozzarella") {
            itemID = 22;
        }
        else if (itemInput == "Cotija") {
            itemID = 23;
        }
        else if (itemInput == "Goat") {
            itemID = 24;
        }
        else if (itemInput == "Cheese Pizza") {
            itemID = 25;
        }
        else if (itemInput == "Tomato Pie") {
            itemID = 26;
        }
        else if (itemInput == "Hawaiian Pizza") {
            itemID = 27;
        }
        else if (itemInput == "Veggie Pizza") {
            itemID = 28;
        }
        else if (itemInput == "Grandma Slices") {
            itemID = 29;
        }
        else if (itemInput == "Pizza Cone") {
            itemID = 30;
        }
        shoppingCart[i].setObjectID(itemID);
        shoppingCart[i].setAmountBought(TOTAL_WANTED);
        if (itemID == 1) {
            shoppingCart[i].setPrice(price[0]);
            shoppingCart[i].setCurrentInventory(inventory[0]);
        }
        else if (itemID == 2) {
            shoppingCart[i].setPrice(price[1]);
            shoppingCart[i].setCurrentInventory(inventory[1]);
        }
        else if (itemID == 3) {
            shoppingCart[i].setPrice(price[2]);
            shoppingCart[i].setCurrentInventory(inventory[2]);
        }
        else if (itemID == 4) {
            shoppingCart[i].setPrice(price[3]);
            shoppingCart[i].setCurrentInventory(inventory[3]);
        }
        else if (itemID == 5) {
            shoppingCart[i].setPrice(price[4]);
            shoppingCart[i].setCurrentInventory(inventory[4]);
        }
        else if (itemID == 6) {
            shoppingCart[i].setPrice(price[5]);
            shoppingCart[i].setCurrentInventory(inventory[5]);
        }
        else if (itemID == 7) {
            shoppingCart[i].setPrice(price[6]);
            shoppingCart[i].setCurrentInventory(inventory[6]);
        }
        else if (itemID == 8) {
            shoppingCart[i].setPrice(price[7]);
            shoppingCart[i].setCurrentInventory(inventory[7]);
        }
        else if (itemID == 9) {
            shoppingCart[i].setPrice(price[8]);
            shoppingCart[i].setCurrentInventory(inventory[8]);
        }
        else if (itemID == 10) {
            shoppingCart[i].setPrice(price[9]);
            shoppingCart[i].setCurrentInventory(inventory[9]);
        }
        else if (itemID == 11) {
            shoppingCart[i].setPrice(price[10]);
            shoppingCart[i].setCurrentInventory(inventory[10]);
        }
        else if (itemID == 12) {
            shoppingCart[i].setPrice(price[11]);
            shoppingCart[i].setCurrentInventory(inventory[11]);
        }
        else if (itemID == 13) {
            shoppingCart[i].setPrice(price[12]);
            shoppingCart[i].setCurrentInventory(inventory[12]);
        }
        else if (itemID == 14) {
            shoppingCart[i].setPrice(price[13]);
            shoppingCart[i].setCurrentInventory(inventory[13]);
        }
        else if (itemID == 15) {
            shoppingCart[i].setPrice(price[14]);
            shoppingCart[i].setCurrentInventory(inventory[14]);
        }
        else if (itemID == 16) {
            shoppingCart[i].setPrice(price[15]);
            shoppingCart[i].setCurrentInventory(inventory[15]);
        }
        else if (itemID == 17) {
            shoppingCart[i].setPrice(price[16]);
            shoppingCart[i].setCurrentInventory(inventory[16]);
        }
        else if (itemID == 18) {
            shoppingCart[i].setPrice(price[17]);
            shoppingCart[i].setCurrentInventory(inventory[17]);
        }
        else if (itemID == 19) {
            shoppingCart[i].setPrice(price[18]);
            shoppingCart[i].setCurrentInventory(inventory[18]);
        }
        else if (itemID == 20) {
            shoppingCart[i].setPrice(price[19]);
            shoppingCart[i].setCurrentInventory(inventory[19]);
        }
        else if (itemID == 21) {
            shoppingCart[i].setPrice(price[20]);
            shoppingCart[i].setCurrentInventory(inventory[20]);
        }
        else if (itemID == 22) {
            shoppingCart[i].setPrice(price[21]);
            shoppingCart[i].setCurrentInventory(inventory[21]);
        }
        else if (itemID == 23) {
            shoppingCart[i].setPrice(price[22]);
            shoppingCart[i].setCurrentInventory(inventory[22]);
        }
        else if (itemID == 24) {
            shoppingCart[i].setPrice(price[23]);
            shoppingCart[i].setCurrentInventory(inventory[23]);
        }
        else if (itemID == 25) {
            shoppingCart[i].setPrice(price[24]);
            shoppingCart[i].setCurrentInventory(inventory[24]);
        }
        else if (itemID == 26) {
            shoppingCart[i].setPrice(price[25]);
            shoppingCart[i].setCurrentInventory(inventory[25]);
        }
        else if (itemID == 27) {
            shoppingCart[i].setPrice(price[26]);
            shoppingCart[i].setCurrentInventory(inventory[26]);
        }
        else if (itemID == 28) {
            shoppingCart[i].setPrice(price[27]);
            shoppingCart[i].setCurrentInventory(inventory[27]);
        }
        else if (itemID == 29) {
            shoppingCart[i].setPrice(price[28]);
            shoppingCart[i].setCurrentInventory(inventory[28]);
        }
        else if (itemID == 30) {
            shoppingCart[i].setPrice(price[29]);
            shoppingCart[i].setCurrentInventory(inventory[29]);
        }
    }
    int cost = 0;
    int totalCost = 0;
    int amount = 0;
    for (int j = 0; j < i; j++) {
        cost = shoppingCart[j].getPrice();
        amount = shoppingCart[j].getAmountBought();
        totalCost = totalCost + (cost * amount);
    }
    cout << endl << endl << "Your Total is: " << totalCost << endl;
}