// ------------- FILE HEADER -------------
// Author ✅: Rylee Blaubergs
// Assignment ✅: 5
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

// Constants
const int SLICES_PER_PIZZA = 8;
const double TAX = 1.07;            // 7%
const double DELIVERY_FEE = 1.20;   // 20%



int main() {

// input values
int numPeople = 0;
double averageNumSlices = 0.0;
double costOfPizza = 0.0;
string done = "y"; 

// output values
int numPizzas = 0;
double costOfPizza = 0.0;
double tax = 0.0;
double deliveryCost = 0.0;
double totalCost = 0.0;



// print welcome message
cout << "Welcome to my Pizza Party Statistics program!" << endl;
cout << endl;

// set doubles to the second decimal place
cout << fixed << setprecision(2);

// set do while loop
do {
cout << "Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: ";
cin >> numPeople;
cin >> averageNumSlices;
cin >> costOfPizza;





cout << endl;
cout << "Do you want to enter more (y/n): ";
cin >> done;
} while (done != "n");

//print goodbye message
cout << endl;
cout << "Thank you for using my program!" << endl;


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
