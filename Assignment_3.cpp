// ------------- FILE HEADER -------------
// Author ✅: Rylee Blaubergs
// Assignment ✅: 3
// Date ✅: 10/13/25
// Citations: zyBooks, example code, and sample code


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 3
// Participation ✅: 23%
// Challenge ✅: 31%
// Labs ✅: 30% (also I completed chapter 2's labs)


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 0
// Links (Optional): 



// ------------- CODE -------------
#include <iostream>
#include <iomanip>
using namespace std;

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {

const double VCOST = 57.90;
const double ACOST = 14.95;
const double SCOST = 7.40;
const double YCOST = 5.55;
const double BCOST = 4.00;

int numAdults = 0;
int numSeniors = 0;
int numYouths = 0;
int numBicycles = 0;
int totalPeople = 0;
int groups = 0;
double totalCost = 0.0;
double freeTicketEligibility = 0.0;

char yesOrNo = ' ';

cout << "Welcome to the Washington State Ferries Fare Calculator!" << endl;
cout << endl;
cout << "Fare Description                                           Ticket $" << endl <<
        "--------------------------------------                     --------" << endl <<
        "Vehicle Under 14' (less than 168\") & Driver                 $57.90" << endl <<
        "Adult (age 19 - 64)                                         $14.95" << endl <<
        "Senior (age 65 & over) / Disability                         $7.40" << endl <<
        "Youth (age 6 - 18)                                          $5.55" << endl <<
        "Bicycle Surcharge (included with Vehicle)                   $4.00" << endl << endl;
        
cout << "Are you riding a vehicle on the Ferry (Y/N): ";
cin >> yesOrNo;

if (yesOrNo != 'y' && yesOrNo != 'n' && yesOrNo != 'Y' && yesOrNo != 'N')
{   
   cout << "Error!! Invalid answer!! Please try again later!!!";
}
else
{
if (yesOrNo == 'y' || yesOrNo == 'Y')
{   
   cout << "How many adults? ";
   cin >> numAdults;
   if (numAdults < 0) // Check for invalid number
   {
      cout << "Error!! Invalid answer!! Please try again later!!!";
         return 0; // end program
   }       
   cout << "How many seniors? ";
   cin >> numSeniors;
   if (numSeniors < 0) // Check for invalid number
   {
      cout << "Error!! Invalid answer!! Please try again later!!!";
         return 0; // end program
   }     
   cout << "How many youths? ";
   cin >> numYouths;
   if (numYouths < 0) // Check for invalid number
   {
      cout << "Error!! Invalid answer!! Please try again later!!!";
         return 0; // end program
   }

// check if there is too many people
totalPeople = numAdults + numSeniors + numYouths;
if (totalPeople > 20) 
{
    // calculate amount of groups to split into
    groups = totalPeople / 10;
    
    // display error message and end program
    cout << endl;
    cout << "Uh oh!! Too many people in your group. Split into " << groups << " groups and try again!";
    return 0;
}

// start total cost calculations
totalCost = VCOST;
totalCost = totalCost + (numAdults * ACOST);
totalCost = totalCost + (numSeniors * SCOST);
totalCost = totalCost + (numYouths * YCOST);

// display total cost
cout << fixed << setprecision(2);
cout << endl; // formatting display
cout << "Your total charge is $" << totalCost << endl;

// do free ticket eligibility calculation
freeTicketEligibility = 100.0 - totalCost;

// check if user is eligble for a free ticket
if (freeTicketEligibility <= 0)
{
   cout << endl; 
   cout << "You are able to get a free ticket for your next trip!" << endl;
   // display end message and end program
   cout << endl; 
   cout << "Thank you for using Washington State Ferries Fare Calculator!";
return 0;
}
else 
{
cout << endl; 
cout << "If you spend $" << freeTicketEligibility << " more, you are eligible for a free adult ticket for the next trip." << endl;
// display end message and end program
cout << endl << "Thank you for using Washington State Ferries Fare Calculator!";
return 0;
}

} // end of if statement on line 43      
else if (yesOrNo == 'n' || yesOrNo == 'N')
{
   cout << "How many adults? ";
   cin >> numAdults;
   if (numAdults < 0) // Check for invalid number
   {
      cout << "Error!! Invalid answer!! Please try again later!!!";
        return 0; // end program
   }
   cout << "How many seniors? ";
   cin >> numSeniors;
   if (numSeniors < 0) // Check for invalid number
   {
      cout << "Error!! Invalid answer!! Please try again later!!!";
        return 0; // end program
   } 
   cout << "How many youths? ";
   cin >> numYouths;
   if (numYouths < 0) // Check for invalid number
   {
      cout << "Error!! Invalid answer!! Please try again later!!!";
         return 0; // end program
   }   
   cout << "How many bikes? ";
   cin >> numBicycles;
   if (numBicycles < 0) 
   {
      cout << "Error!! Invalid answer!! Please try again later!!!";
      return 0; // end program 
   }

// check if there is too many people
totalPeople = numAdults + numSeniors + numYouths;
if (totalPeople > 20) 
{
    // calculate amount of groups to split into
    groups = totalPeople / 10;
    
    // display error message and end program
    cout << endl;
    cout << "Uh oh!! Too many people in your group. Split into " << groups << " groups and try again!";
    return 0;
}

// start total cost calculations
totalCost = numAdults * ACOST;
totalCost = totalCost + (numSeniors * SCOST);
totalCost = totalCost + (numYouths * YCOST);
totalCost = totalCost + (numBicycles * BCOST);

// display total cost
cout << fixed << setprecision(2);
cout << "Your total charge is $" << totalCost << endl;

// check if user is eligble for a free ticket
if (freeTicketEligibility <= 0)
{
   cout << endl; 
   cout << "You are able to get a free ticket for your next trip!" << endl;
   // display end message and end program
   cout << endl; 
   cout << "Thank you for using Washington State Ferries Fare Calculator!";
return 0;
}
else 
{
cout << endl; 
cout << "If you spend $" << freeTicketEligibility << " more, you are eligible for a free adult ticket for the next trip." << endl;
// display end message and end program
cout << endl << "Thank you for using Washington State Ferries Fare Calculator!";
return 0;
}


} // end of else if statement on line 116
} // end of else statement on line 43
} // end of main function

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: Washington State Ferries Fare Calculator

Program Description: calculates your ticket cost for the ferrie

Design:
A. INPUT
a y or n for whether you have a vehicle or not
amount of adults you have
amount of seniors you have
amount of youth you have
amount of bikes you have (only for when you say n)

B. OUTPUT
total cost for everyone in your group and if you are eligble for a free ticket for the next time

C. CALCULATIONS
if you choos y or Y
totalCost = VCOST;
totalCost = totalCost + (numAdults * ACOST);
totalCost = totalCost + (numSeniors * SCOST);
totalCost = totalCost + (numYouths * YCOST);

if you choose n or N
totalCost = numAdults * ACOST;
totalCost = totalCost + (numSeniors * SCOST);
totalCost = totalCost + (numYouths * YCOST);
totalCost = totalCost + (numBicycles * BCOST);

things that don't change
freeTicketEligibility = 100.0 - totalCost;
groups = totalPeople / 10; (only if there is over 20 people listed from user input)

D. LOGIC and ALGORITHMS
DECLARE VCOST as const double
DECLARE ACOST as const double
DECLARE SCOST as const double
DECLARE YCOST as const double
DECLARE BCOST as const double

DECLARE numAdults as an int
DECLARE numSeniors as an int
DECLARE numYouths as an int
DECLARE numBicylces as an int
DECLARE totalPeople as an int
DECLARE groups as an int
DECLARE totalCost as a double
DECLARE freeTicketEligibility as a double

DECLARE yesOrNo as a char

PRINT welcome message and fare cost description
PROMPT user if they are bringing a vehicle on the ferry
INPUT y or n or Y or N 
IF yesOrNo is anything but y, n, Y, N
DISPLAY error message
ELSE 
IF yesOrNo is y or Y
PROMPT user input for the amount of adults
   IF number inputted is less than 0
   DISPLAY error message
PROMPT user input for the amount of seniors
   IF number inputted is less than 0
   DISPLAY error message
PROMPT user input for the amount of youths
   IF number inputted is less than 0
   DISPLAY error message

CALCULATE total people
IF total people is greater than 20
   SET groups = total people / 10
   DISPLAY error message and let user know to split total people by groups

CALUCULATE total cost
SET totalCost = VCOST;
SET totalCost = totalCost + (numAdults * ACOST);
SET totalCost = totalCost + (numSeniors * SCOST);
SET totalCost = totalCost + (numYouths * YCOST);
DISPLAY total cost

SET freeTicketEligibility = 100 - totalCost
IF freeTicketEligibility <= 0
   DISPLAY message telling user they can get a free ticket for their next trip
ELSE
DISPLAY how much more the user would have to spend to get a free ticket for thier next trip

DISPLAY goodbye message

ELSE IF yesOrNo == 'n' or yesOrNo == 'N'

PROMPT user input for the amount of adults
   IF number inputted is less than 0
   DISPLAY error message
PROMPT user input for the amount of seniors
   IF number inputted is less than 0
   DISPLAY error message
PROMPT user input for the amount of youths
   IF number inputted is less than 0
   DISPLAY error message
PROMPT user input for the amount of bikes
   IF number inputted is less than 0
   DISPLAY error message

CALCULATE total people
IF total people is greater than 20
   SET groups = total people / 10
   DISPLAY error message and let user know to split total people by groups

CALCULATE total cost and free ticket eligibility
SET totalCost = numAdults * ACOST;
SET totalCost = totalCost + (numSeniors * SCOST);
SET totalCost = totalCost + (numYouths * YCOST);
SET totalCost = totalCost + (numBicycles * BCOST);

SET freeTicketEligibility = 100 - totalCost
IF freeTicketEligibility <= 0
   DISPLAY message telling user they can get a free ticket for their next trip
ELSE
DISPLAY how much more the user would have to spend to get a free ticket for thier next trip

DISPLAY goodbye message




SAMPLE RUNS:
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): y

How many adults? 2
How many seniors? 1
How many youths? 0

Your total charge is $95.20

If you spend $4.80 more, you are eligible for a free adult ticket for the next trip.

Thank you for using Washington State Ferries Fare Calculator!

**********************************************************************************

Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): a

Error!! Invalid answer!! Please try again later!!!

Thank you for using Washington State Ferries Fare Calculator!

**********************************************************************************

Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n

How many adults? 2
How many seniors? 1
How many youths? 1
How many bikes? 2

Your total charge is $50.85

If you spend $49.15 more, you are eligible for a free adult ticket for the next trip.

Thank you for using Washington State Ferries Fare Calculator!

**********************************************************************************

Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n
How many adults? -7

Error!! Invalid answer!! Please try again later!!!

Thank you for using Washington State Ferries Fare Calculator!

**********************************************************************************

Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n

How many adults? 12
How many seniors? 4
How many youths? 5
How many bikes? 2

Uh oh!! Too many people in your group. Split into 2 groups and try again!

Thank you for using Washington State Ferries Fare Calculator!

*/
