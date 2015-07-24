// The New Boston
// 33. CreateArraysUsingLoops

#include <iostream>
using namespace std;

// Useful in creating large arrays so you don't have to have a massive index i.e. bucky[9];{4,1,2,5,2,8........}

int main()

{
    int bucky[9]; // This line of code initializes the "bucky" array and is basically saying to compiler "Hey complier, save enough space in memory to save 9 integers
    // yes 9 spaces count on your fingers out 0123456789 so yeah see 9 spaces in the complier since "0" is read as a place by computer
    //Pretty cool huh :)

    cout << "Element - Value" << endl; // So this will see out at the top of page Element and the value of that element.

// Remember if you are writing this code from scratch to run the code as you go to see what is happening! (cout element and value to screen then proceed to make sure it works

    for(int x = 0; x<=8;x++) //  So we can use a "for" loop.  The index knows to place the 0-8 numbers inside the 9 element array
//So we only want to loop from  from 0 through 8. Since there are 9 spaces set aside. K I think you get the point

    {

    bucky[x] = 99; // so this will show out 99 down the right hand column of the screen.

cout << x << " ---------" << bucky[x]  << endl; // this will see out the lines of code printed out underneath your first cout statement

    }
    cin.ignore().get();

    return 0;

} // Make sure each of your brackets have a corresponding bracket or program wont run. i.e. { have a corresponding }

//  Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston
