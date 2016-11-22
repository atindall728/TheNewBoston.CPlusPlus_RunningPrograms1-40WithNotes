// The New Boston
// 5.creatingABasicCalculator

#include <iostream> // The standard library

using namespace std;  // Used to shorten some of our statements.  Like slang b ;)

int main()  // Again our main program with no parameters.

{       // 1st bracket

int a;  //  Declaring the variable "a" and "b" (creating a variable)
int b;   //  b variable gets declared to the computer!
int sum;  //  This is a variable we create to hold a calculation we will do below

//  We want to see out something to screen to tell user what we (the program) need

cout << "enter a number hoss! \n";  // Takes info from computer and sees out to screen (the user).  * << is used with cout

cin >> a; // Takes info input from the user and gives it to the computer.    *  >> is used with cin

cout << "Enter another number \n";   // Lets ask user for another number.. say b?

cin >> b;  // This "b" variable is a place holder for whatever the user inputs

// So the user is entering two numbers "a" and "b"

    sum = a + b;  //  So we take the three variables "sum, a, b" and make a function

    cout << "the sum of those numbers is " << sum << endl;  //  So now the "sum" variable will take on the total of "a" and "b" variables

    cin.ignore().get();  //  Again if you have issues pausing your program this should do the trick

    return 0;  // This allows your program to know you want it to run

}

//***************//
// << Input stream object
//  >> Screen extraction operator
//  Questions?  Browse forum @ thenewboston.com or Adam Tindall - The New Boston
