// ------------- FILE HEADER -------------
// Author ✅: Rylee Blaubergs
// Assignment ✅: 4
// Date ✅: 10/20/25
// Citations: zyBooks, examples


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 4
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

int main(int argc, char* argv[]) {

string phrase1 = " ";
string phrase2 = " ";
string finalText = " ";
string tmpStr = " ";

int index1 = 0;
int index2 = 0;


cout << "Welcome to my Phrases and Subphrases Program!" << endl;

cout << "Enter Phrase 1: ";
getline(cin, phrase1);
cout << "You Entered: " << phrase1 << endl;

cout << "Enter Phrase 2: ";
getline(cin, phrase2);
cout << "You Entered: " << phrase2 << endl;
cout << endl;

index1 = phrase1.find(phrase2);
index2 = phrase2.find(phrase1);

if (phrase1 == phrase2) {
    cout << "Both phrases match" << endl;
    }


if (index1 != string::npos) {
    cout << phrase2 << " is found in " << phrase1 << endl;
    cout << phrase1.substr(index1) << endl;
    
} else if (index2 != string::npos) {
    cout << phrase1 << " is found in " << phrase2 << endl;
    cout << phrase2.substr(index2) << endl;  
    
} else {
   cout << "No match" << endl;    
}

cout << endl;
cout << "Thank you for using my program!" << endl;
    
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
