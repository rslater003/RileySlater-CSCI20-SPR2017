//Riley Slater
//Lab 3.4
//Debug the program (Interest Rate Calculator)
//Step 1: I ran the program and looked for syntax errors: no syntax errors found.
//Step 2: I completed the input prompts to find any logical errors: no input for year 3. (Reason: Two k++ are in the loop, make it a while loop, solved)
//Step 3: Got calculator and checked output for accuracy and the output is accurate for 3 years at $500 per year(worked). Check accuracy for 3 years $1000 per year (worked).
//So the problem was a logical error in the program, in the for loop it increments the value of k (years) by 1 alreay, but in the output for the payment in that year it incremented k by 1 again
//this resulted in the program skipping a year and not allowing input for it. I solved this by making the for loop into a while loop so that the program could increment k inside the program.
//Example: (Payment for year 1:) then it goes on to (Payment for year 3:).

/************************************************
FINANCIAL SIMULATION
You have a bank account whose annual interest
rate depends on the amount of money you have
in your account at the beginning of each year. 
Your annual rate starts at 3%, and grows by an
additional half a percent for each thousand
dollars in your account up to, but not exceeding
8%. Interest in this account is compounded monthly
at the annual rate.  Each year you also make a
deposit (before the bank figures out what your
rate is, fortunately).  Write a program that
simulates these financial interactions.  It
should first ask the user how many years he
wants to simulate, and at the beginning of each
year it should ask the user how much he wants to
deposit.
***************************************************/

#include <iostream>
using namespace std;
 
int main()
{
  //Get number of years
  int Y;
  cout << "How many years would you like to simulate: ";
  cin >> Y;
 
  /*************************************************/
  /******** S I M U L A T E   Y   Y E A R S ********/
  /*************************************************/
  double B = 0;
  int k = 0;
  while(k < Y) {       //CHANGED TO WHILE LOOP
 
    //Get payment amount & adjust balance
    double P;
    cout << "Payment for year " << ++k << " : ";
    cin >> P;
    B = B + P;
 
    //Compute annual rate R
    int T = B / 1000; //Get number of 1000's
    double R = 3 + 0.5 * T;//Compute rate
    if (R > 8.0) { //Correct for 8% cap
      R = 8.0;
    }
    
    //Compute new balance with interest for the year
    double r = R/100;
    for(int i = 0; i < 12; i++) {
      B = B*(1 + r/12);
    }
  }
 
  //Print final balance
  cout << "Final balance is " << B << " dollars" << endl;
  return 0;
}