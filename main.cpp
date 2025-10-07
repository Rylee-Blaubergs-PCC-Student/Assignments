// ------------- FILE HEADER -------------
// Author ✅: Rylee Blaubergs
// Assignment ✅: 2
// Date ✅: 10/7/2025
// Citations: zyBooks, Assignment example (for how to use setprecision)


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 2
// Participation ✅: 50%
// Challenge ✅: 49%
// Labs ✅: 0%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 0
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: number of oreos to calculate to calories and servings 
// B. OUTPUT ✅: the number of servings and calories of oreos inputted (both as doubles)
// C. CALCULATIONS ✅: 5 oreos per serving and 160 calories per serving
// D. LOGIC and ALGORITHMS ✅:



// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
using namespace std;

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {

   const int SERVING = 5; 
   const int CALORIESPERSERVING = 160;
   double numServings;
   double calories;
   int numOreos;
   
   cout << "Welcome to the Oreo Calculator!" << endl;
   cout << endl;
   cout << "Enter the amount of Oreos eaten: ";
   cin >> numOreos; 
   cout << endl;
   
   numServings = static_cast<double>(numOreos) / SERVING;
   calories = numServings * CALORIESPERSERVING;

  // sets decimal displayed to the first value (a tenth) 0.0, 1.5, 2.2, etc...
   cout << fixed << setprecision(1);
   
   cout << numOreos << " Oreos equals " << numServings << " servings!" << endl;
   cout << "You consumed " << calories << " calories." << endl;
   cout << endl;
   cout << "Keep eating Oreos!";
   
   return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: Oreo Calculator

Program Description: Calculates amount of oreos inputted into the amount of servings and calories of oreos inputted

Design:
A. INPUT
number of oreos as an INT

B. OUTPUT
number of servings as an Double
number of caloriesPerServing as an Double

C. CALCULATIONS
take number of oreos and divide by servings
take number of servings and multiply by caloriesPerServing

D. LOGIC and ALGORITHMS
DECLARE oreos as an INT
DECLARE numServings as a double
DECLARE calories as a double
DECLARE servings as a constant INT
DECLARE calories as a constant INT

DISPLAY welcome message
PROMPT amount of oreos to be calculated
INPUT number of oreos
SET numServings = static_cast<double>(numOreos) / SERVING;
SET calories = numServings * CALORIESPERSERVING;

DISPLAY oreos " Oreos equals " numServings " servings!"
DISPLAY "You consumed " calories " calories."

DISPLAY goodbye message

SAMPLE RUNS:

Welcome to the Oreo Calculator!

Enter the amount of Oreos eaten: 12

12 Oreos equals 2.4 servings!
You consumed 384.0 calories.

Keep eating Oreos! 
********************************************************
Welcome to the Oreo Calculator!

Enter the amount of Oreos eaten: 3

3 Oreos equals 0.6 servings!
You consumed 96.0 calories.

Keep eating Oreos!

*/
