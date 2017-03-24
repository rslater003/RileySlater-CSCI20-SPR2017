//Riley Slater
//CSCI 20
//March 23, 2017
//This program calculates all information about a phone company and outputs the correct bill based on the input of what types of phones, how many phones, corporate discount
//family discount, how much data needed, if user just wants data.
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int dp = 0; //Dumb Phone Cost
    int sp = 5; //Smart Phone Cost
    int t = 10; //Tablet Cost
    int adp1 = 0; //Amount Dumb Phone
    int asp1 = 0; //Amount Smart Phone
    int at1 = 0; //Amount Tablet
    int adp2 = 0; //Amount Dumb Phone 2
    int asp2 = 0; //Amount Smart Phone 2
    int at2 = 0; //Amount Tablet 2
    int adp3 = 0; //Amount Dumb Phone 3
    int asp3 = 0; //Amount Smart Phone 3
    int at3 = 0; //Amount Tablet 3
    int months; //Month user wants to calculate til
    int dataAmount; //Data Amount
    int top1; //Type of Phone 1
    int top2; //Type of Phone 2
    int top3; //Type of Phone 3
    int totalLines = 0; //How many lines used later
    double totalBill = 0; //Bill Total used later
    int justData = 0; //Use for input for input if user wants just data
    int corporateDiscount = 0; //Corporate Discount input if user has it
    
    cout << "Which type of phone would you like Dumb Phone (1), Smart Phone (2), or Tablet (3): ";
    cin >> top1;
    
    switch(top1) {  //Switch statement for input on how many phones/tablets the user wants Repeated 3 times
        case 1: 
        cout << "How Many Dumb Phones: ";
      
        cin >> adp1;
        
        break;
        
        case 2:
        cout << "How Many Smart Phones: ";
      
        cin >> asp1;
        
        break;
        
        case 3:
        cout << "How Many Tablets: ";
       
        cin >> at1;
        
        break;
    }    
    
        
    cout << "Would you like to add another Type? No (1), Dumb Phone (2), Smart Phone (3), or Tablet (4): ";
    cin >> top2;
    
    
    if (top2 == top1 + 1) {     //Makes sure the user doesn't order 2 types of the same phone on accident
        cout << "You can't have more then one type of phone!";
    }
    else {

        switch(top2) {
            case 1:
            
            break;
            
            case 2: 
            cout << "How Many Dumb Phones: ";
            
            cin >> adp2;
            
            break;
            
            case 3:
            cout << "How Many Smart Phones: ";
           
            cin >> asp2;
            
            break;
            
            case 4:
            cout << "How Many Tablets: ";
           
            cin >> at2;
            
            break;
            
        }
 
    if (top2 == 1) {}  
    
    else {

    
        if (top3 == top1 + 1 || top3 == top2) {
            cout << "You can't have more then one type of phone!";
        }
        else {
            cout << "Would you like to add another Type? No (1), Dumb Phone (2), Smart Phone (3), or Tablet (4): ";
            cin >> top3;
                
            switch(top3) {
                case 1:
                
                break;
                
                case 2: 
                cout << "How Many Dumb Phones: ";
              
                cin >> adp3;
                
                break;
                
                case 3:
                cout << "How Many Smart Phones: ";
             
                cin >> asp3;
                
                break;
                
                case 4:
                cout << "How Many Tablets: ";
              
                cin >> at3;
                
                break;
            }
        }
    }
}
    
    totalLines = adp1 + adp2 + adp3 + asp1 + asp2 + asp3 + at1 + at2 + at3; //Adds up total lines the user wants for later use
    
    cout << "How Many GB of data would you like: ";
    cin >> dataAmount;
    cout << "Do you have Corporate Discount? (yes = 1, no = 2)";        //INPUT FROM USER FOR DETAILS ON ORDER
    cin >> corporateDiscount;
    cout << "Would you like just data? (yes = 1, no = 2)";
    cin >> justData;
    if (dataAmount < 0) {
        cout << "You can't have less then 0 GB of data!" << endl;
    }
    else if (justData == 1) {       //IF THE USER JUST WANTS DATA
         int x = 0;
        int y = 0;
        int z = 0;
        int a = 0;
        int b = 0;
        int c = 0;
        if (asp1 > 0) {
            x = (asp1 + 5);
        }
        if (asp2 > 0) {
            y = (asp2 + 5);
        }
        if (asp3 > 0) {
            z = (asp3 + 5);
        }
        
        if (at1 > 0) {
            a = (at1 + 10);
        }
        if (at2 > 0) {
            b = (at2 + 10);
        }
        if (at3 > 0) {
            c = (at3 + 10);
        }
        totalBill = totalBill + a + b + c + x + y + z;
        
        if (dataAmount > 1) {
            totalBill = totalBill + 5;
        }
        if (dataAmount < 6) {
            totalBill = totalBill + ((dataAmount - 1) * .75);
        }
        else if (dataAmount < 16) {
            totalBill = totalBill + ((5-1) * .75);
            totalBill = totalBill + ((dataAmount - 6) * 1.5);                           //ANALYZES COST FOR OVERAGES
        }
        else if (dataAmount > 10) {                     
            totalBill = totalBill + ((5-1) * .75);
            totalBill = totalBill + ((15-6) * 1.5);
            totalBill = totalBill + ((dataAmount - 15) * 3);
        }
        if (corporateDiscount == 1) {       //GIVES CORPORATE DISCOUNT
            totalBill = totalBill * .9;
        }
        cout << "Your Bill is: $" << totalBill << endl;
    }
    else if (dataAmount == 0) {                                                 //IF THE USER WANTS 0 DATA
        if (totalLines == 0 || totalLines == 1 || totalLines == 2) {
            totalBill = (adp1 * 30 + 0) + (adp2 * 30 + 0) + (adp3 * 30 + 0);
            int x = 0;
            int y = 0;
            int z = 0;
            int a = 0;
            int b = 0;
            int c = 0;
            if (asp1 > 0) {
                x = (asp1 * 30 + 5);
            }
            if (asp2 > 0) {
                y = (asp2 * 30 + 5);
            }
            if (asp3 > 0) {
                z = (asp3 * 30 + 5);
            }
            
            if (at1 > 0) {
                a = (at1 * 30 + 10);
            }
            if (at2 > 0) {
                b = (at2 * 30 + 10);
            }
            if (at3 > 0) {
                c = (at3 * 30 + 10);
            }
            totalBill = totalBill + a + b + c + x + y + z;
            if (corporateDiscount == 1) {
                totalBill = totalBill * .9;
            }
            cout << "Your Bill is: $" << totalBill << endl;
        }
        else if (totalLines > 2) {      //IF USER GETS THE FAMILY DISCOUNT
            int a = 0;
            int b = 0;
            int c = 0;
            int d = 0;
            int e = 0;
            int f = 0;
            int g = 0;
            int h = 0;
            int i = 0;
            if (adp1 > 0) {
                a = (adp1 * 30)/adp1;
            }
            else {
                a = 1000;
            }
            if (adp2 > 0) {
                b = (adp2 * 30)/adp2;
            }
            else {
                b = 1000;
            }
            if (adp3 > 0) {
                c = (adp3 * 30)/adp3;
            }
            else {
                c = 1000;
            }
            if (asp1 > 0) {
                d = (asp1 * 30 + 5)/asp1;
            }
            else {
                d = 1000;
            }
            if (asp2 > 0) {
                e = (asp2 * 30 + 5)/asp2;
            }
            else {
                e = 1000;
            }
            if (asp3 > 0) {
                f = (asp3 * 30 + 5)/asp3;
            }
            else {
                f = 1000;
            }
            if (at1 > 0) {
                g = (at1 * 30 + 10)/at1;
            }
            else {
                g = 1000;
            }
            if (at2 > 0) {
                h = (at2 * 30 + 10)/at2;
            }
            else {
                h = 1000;
            }
            if (at3 > 0) {
                i = (at3 * 30 + 10)/at3;
            }
            else {
                i = 1000;
            }
            
            int lowest1 = fmin(a,b);
            lowest1 = fmin(lowest1,c);
            lowest1 = fmin(lowest1,d);
            lowest1 = fmin(lowest1,e);                      //FINDS THE LOWEST BILL FOR USE ON FAMILY DISCOUNT
            lowest1 = fmin(lowest1,f);
            lowest1 = fmin(lowest1,g);
            lowest1 = fmin(lowest1,h);
            lowest1 = fmin(lowest1,i);
            
            int lowest2 = fmin(a,b);
            lowest2 = fmin(lowest2,c);
            lowest2 = fmin(lowest2,d);
            lowest2 = fmin(lowest2,e);
            lowest2 = fmin(lowest2,f);
            lowest2 = fmin(lowest2,g);                      //FINDS SECOND LOWEST BILL FOR USE ON FAMILY DISCOUNT
            lowest2 = fmin(lowest2,h);
            lowest2 = fmin(lowest2,i);
            totalBill = totalBill + lowest1 + lowest2;
            totalLines = totalLines - 2;
            totalBill = totalBill + (totalLines * 3);
            
            if (corporateDiscount == 1) {
                totalBill = totalBill * .9;
            }
            cout << "Your Bill is: $" << totalBill << endl;
        }
    }
    
    else if (dataAmount > 0) {                                                  //IF DATA IS GREATER THEN 0
        if (totalLines == 0 || totalLines == 1 || totalLines == 2) {
            totalBill = (adp1 * 75 + 0) + (adp2 * 75 + 0) + (adp3 * 75 + 0);
            int x = 0;
            int y = 0;
            int z = 0;
            int a = 0;
            int b = 0;
            int c = 0;
            if (asp1 > 0) {
                x = (asp1 * 75 + 5);
            }
            if (asp2 > 0) {
                y = (asp2 * 75 + 5);
            }
            if (asp3 > 0) {
                z = (asp3 * 75 + 5);
            }
            
            if (at1 > 0) {
                a = (at1 * 75 + 10);
            }
            if (at2 > 0) {
                b = (at2 * 75 + 10);
            }
            if (at3 > 0) {
                c = (at3 * 75 + 10);
            }
            
            totalBill = totalBill + a + b + c + x + y + z;
            if (corporateDiscount == 1) {
                totalBill = totalBill * .9;
            }
            cout << "Your Bill is: $" << totalBill << endl;
        }
        else if (totalLines > 2) {                  //FAMILY DISCOUNT
            int a = 0;
            int b = 0;
            int c = 0;
            int d = 0;
            int e = 0;
            int f = 0;
            int g = 0;
            int h = 0;
            int i = 0;
            if (adp1 > 0) {
                a = (adp1 * 75)/adp1;
            }
            else {
                a = 1000;
            }
            if (adp2 > 0) {
                b = (adp2 * 75)/adp2;
            }
            else {
                b = 1000;
            }
            if (adp3 > 0) {
                c = (adp3 * 75)/adp3;
            }
            else {
                c = 1000;
            }
            if (asp1 > 0) {
                d = (asp1 * 75 + 5)/asp1;
            }
            else {
                d = 1000;
            }
            if (asp2 > 0) {
                e = (asp2 * 75 + 5)/asp2;
            }
            else {
                e = 1000;
            }
            if (asp3 > 0) {
                f = (asp3 * 75 + 5)/asp3;
            }
            else {
                f = 1000;
            }
            if (at1 > 0) {
                g = (at1 * 75 + 10)/at1;
            }
            else {
                g = 1000;
            }
            if (at2 > 0) {
                h = (at2 * 75 + 10)/at2;
            }
            else {
                h = 1000;
            }
            if (at3 > 0) {
                i = (at3 * 75 + 10)/at3;
            }
            else {
                i = 1000;
            }
            
            int lowest1 = fmin(a,b);
            lowest1 = fmin(lowest1,c);
            lowest1 = fmin(lowest1,d);
            lowest1 = fmin(lowest1,e);
            lowest1 = fmin(lowest1,f);
            lowest1 = fmin(lowest1,g);
            lowest1 = fmin(lowest1,h);
            lowest1 = fmin(lowest1,i);
            
            int lowest2 = fmin(a,b);
            lowest2 = fmin(lowest2,c);
            lowest2 = fmin(lowest2,d);
            lowest2 = fmin(lowest2,e);
            lowest2 = fmin(lowest2,f);
            lowest2 = fmin(lowest2,g);
            lowest2 = fmin(lowest2,h);
            lowest2 = fmin(lowest2,i);
            totalBill = totalBill + lowest1 + lowest2;
            totalLines = totalLines - 2;
            totalBill = totalBill + (totalLines * 3);
            
            double dataCharge = 0;
            if (dataAmount > 10) {
                dataCharge = (dataAmount - 10) * 1.5;
            }
            totalBill = totalBill + dataCharge;
            if (corporateDiscount == 1) {
                totalBill = totalBill * .9;
            }
            cout << "Your Bill is: $" << totalBill << endl;
        }
    }
}