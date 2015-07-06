// The New Boston
// Simple program using a loop


//*Programing Tip! Break your program into tiny segments and test your program/function(s) as you go.  This way you don't have
//to go back through a bunch of code.  Think of it like saving a file every five minutes in reverse. Great feedback and you
// get to see what is up with your idea (in granular form as you go)



#include <iostream>
using namespace std;

// Break program up into baby steps and be sure to test loops along the way.
// This is a simple example of a while loop that will loop five times.
// Emphasis on BABY STEPS when building program
// The best calculator on earth!


int main()

{

  int x = 1; // This number will change each time the program reaches the bottom because we ask it to x++ (see below)
  int number; //  This will hold the user input.
  int total = 0; // This is also a place holder for the "total" of the five user inputs

 while(x <= 5){ // In this case the program will see in 5 numbers from user (because of x++ below - Adding one total = total + number;
        cin >> number;// cin is how user will enter number.

total = total + number; // Here is your function to get "total" from user

// Each time the program runs (when user presses enter)

    x++; //  Exact same as saying x = x + 1.

 }


 cout << "your total is  " << total << endl; // This will show the test "your total is" out to screen followed by whatever the total number entered are.

    cin.ignore().get();

    return 0;

}

// Questions?  Browse forum @ www.thenewboston.com or feel free to contact
//Adam Tindall - The New Boston




