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
#include <cmath>
using namespace std;

// Constants
const int SLICES_PER_PIZZA = 8;
const double TAX = 0.07;            // 7%
const double DELIVERY_FEE = 0.20;   // 20%



int main() {

// input values
int numPeople = 0;
double averageNumSlices = 0.0;
double pizzaCost = 0.0;
string done = "y"; 

// output values
int numPizzas = 0;
double costOfPizzas = 0.0;
double tax = 0.0;
double deliveryCost = 0.0;
double totalCost = 0.0;

// other values
double slices = 0.0;
double fractionalPizza = 0.0;

// final outputs
int entries = 0;
int totalNumPizza = 0;
int maxNumPeople = 0;
double maxCostPizza = 0.0;
double averageNumPizza = 0.0;


// print welcome message
cout << "Welcome to my Pizza Party Statistics program!" << endl;
cout << endl;

// set doubles to the second decimal place
cout << fixed << setprecision(2);

// set do while loop
do {
// add to total entries
entries++;

// prompt user input
cout << "Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: ";
cin >> numPeople;
cin >> averageNumSlices;
cin >> pizzaCost;
cout << endl;

// calculate the number of slices total
slices = numPeople * averageNumSlices;

// turn total slices into number of pizzas
fractionalPizza = slices / SLICES_PER_PIZZA;

// round amount of pizzas up
numPizzas = ceil(fractionalPizza);


costOfPizzas = numPizzas * pizzaCost;
tax = costOfPizzas * TAX;
deliveryCost = costOfPizzas * DELIVERY_FEE;

// echo calculations
cout << numPizzas << endl;
cout << costOfPizzas << endl;
cout << tax << endl;
cout << deliveryCost << endl;
cout << totalCost << endl;

// update final totals
totalNumPizza += numPizzas;
if (maxNumPeople < numPeople) {
 maxNumPeople = numPeople;   
}
if (maxCostPizza < totalCost) {
 maxCostPizza = totalCost;   
}

// ask user if they want to continue adding entries
cout << endl;
cout << "Do you want to enter more (y/n): ";
cin >> done;
} while (done != "n");

// calculate average number of pizza
averageNumPizza = totalNumPizza / entries;

// print totals
cout << "Number of entries: " << entries << endl;


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
