// ------------- FILE HEADER -------------
// Author ✅: Rylee Blaubergs
// Assignment ✅: 5
// Date ✅: 11/22/2025
// Citations: zyBooks


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 5
// Participation ✅:
// Challenge ✅: 
// Labs ✅: 100%


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

// calculate the rest
costOfPizzas = numPizzas * pizzaCost;
tax = costOfPizzas * TAX;
deliveryCost = (costOfPizzas + tax) * DELIVERY_FEE;

// calculate total amount for current entry
totalCost = costOfPizzas + tax + deliveryCost;

// echo calculations
cout << setw(18) << left << "Number of Pizzas:" <<      setw(8) << right << numPizzas << endl;
cout << setw(18) << left << "Cost of pizzas:" << "$" << setw(7) << right << costOfPizzas << endl;
cout << setw(18) << left << "Tax:" <<            "$" << setw(7) << right << tax << endl;
cout << setw(18) << left << "Delivery:" <<       "$" << setw(7) << right << deliveryCost << endl;
cout << setw(18) << left << "Total cost:" <<     "$" << setw(7) << right << totalCost << endl;

// update final totals
totalNumPizza += numPizzas;
if (numPeople > maxNumPeople) {
 maxNumPeople = numPeople;   
}
if (totalCost > maxCostPizza) {
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
cout <<  "Number of Entries: " << entries << endl;
cout <<  "Total number of pizzas: "  << totalNumPizza << endl;
cout <<  "Average number of pizzas: " << averageNumPizza << endl;
cout <<  "Maximum number of people: " << maxNumPeople << endl;
cout <<  "Maximum cost of pizzas: $" << maxCostPizza << endl;


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
number of people as an int
average number of slices as a double
cost of pizza as a double

B. OUTPUT
Inside do while loop:
number of pizzas to order
cost of pizza on current entry
tax amount
delivery fee
total aomunt for current entry

After do while loop finishes
Total number of entries
total number of pizzas to be ordered
average number of pizza
max number of people
max cost of pizza

C. CALCULATIONS
// calculate the number of slices total
slices = numPeople * averageNumSlices;

// turn total slices into number of pizzas
fractionalPizza = slices / SLICES_PER_PIZZA;

// round amount of pizzas up
numPizzas = ceil(fractionalPizza);

// calculate the rest
costOfPizzas = numPizzas * pizzaCost;
tax = costOfPizzas * TAX;
deliveryCost = (costOfPizzas + tax) * DELIVERY_FEE;

// calculate total amount for current entry
totalCost = costOfPizzas + tax + deliveryCost;

D. LOGIC and ALGORITHMS

DECLARE INT'S:
numPeople
numPizzas
entries
totalNumPizza
maxNumPeople

DECLARE DOUBLE'S
averageNumSlices
pizzaCost 
costOfPizzas 
tax 
deliveryCost 
totalCost 
slices 
fractionalPizza
maxCostPizza 
averageNumPizza 

DECLARE CONSTANT'S
SLICES_PER_PIZZA as a const int
TAX as a const double
DELIVERY_FEE as a const double

DECLARE done as string

PRINT Welcome message
SET floating number or doubles to be printed at the second decimal place 0.00
START DO WHILE:
 PROMPT user for the numPeople, averageNumSlices, and pizzaCost
 CALCULATE number of pizzas for current entry
 CALCULATE costOfPizzas
 CALCULATE tax
 CALCULATE deliveryCost
 CALCULATE totalCost for current entry
 DISPLAY all calculations
 CHECK for new max number of people and max cost of pizza
 PROMPT user if they want to keep adding entries
 WHILE (done != "n")
AFTER do while

CALCULATE average number of pizza

PRINT totals:
entries
totalNumPizza
averageNumPizza
maxNumPeople
maxCostPizza
DISPLAY goodbye message

SAMPLE RUNS:
Welcome to my Pizza Party Statistics program!

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 10 2.6 10.50

Number of Pizzas:        4
Cost of pizzas:   $  42.00
Tax:              $   2.94
Delivery:         $   8.99
Total cost:       $  53.93

Do you want to enter more (y/n): y
Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 9 2.5 10.95

Number of Pizzas:        3
Cost of pizzas:   $  32.85
Tax:              $   2.30
Delivery:         $   7.03
Total cost:       $  42.18

Do you want to enter more (y/n): y
Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 14 3.2 14.95

Number of Pizzas:        6
Cost of pizzas:   $  89.70
Tax:              $   6.28
Delivery:         $  19.20
Total cost:       $ 115.17

Do you want to enter more (y/n): n
Number of Entries: 3
Total number of pizzas: 13
Average number of pizzas: 4.00
Maximum number of people: 14
Maximum cost of pizzas: 115.17

Thank you for using my program!

*/
