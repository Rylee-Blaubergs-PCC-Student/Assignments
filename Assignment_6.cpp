// ------------- FILE HEADER -------------
// Author ✅: Rylee Blaubergs
// Assignment ✅: 
// Date ✅: 
// Citations: zyBooks


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅:
// Challenge ✅: 
// Labs ✅: 


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 0
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅: 
// C. CALCULATIONS ✅: 
// D. LOGIC and ALGORITHMS ✅:



// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

// Welcome message
cout << "Welcome to my Coffee/Tea Vending Machine!" << endl << endl;


// Declare input values
int coins = 0, amountDrinks = 0;
string option = '';


// Declare output values
double amountCoins = 0.0;
double totalBalance = 0;
double totalCost = 0;

//set precision 0.00
cout << fixed << setprecision(2);

do {
cout << "Enter coins - 5, 10, or 25 only: ";
cin >> coins;
   if (coins == 5 || coins == 10 || coins == 25) {
      amountCoins += coins;
   } else {
     cout << "Invalid entry! Please try again!" << endl;
        cin.clear();
        cin.ignore(100, '\n');
        cin >> coins;
   }
} while (coins != 0);

totalBalance = amountCoins // 100;
cout << "Your balance is $" << totalBalance << endl << endl;


   return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: 

Program Description: 

Design:
A. INPUT


B. OUTPUT


C. CALCULATIONS


D. LOGIC and ALGORITHMS


SAMPLE RUNS:





*/
