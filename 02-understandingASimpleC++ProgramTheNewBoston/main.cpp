// The New Boston
//Understanding a Simple C++ Program

//****READMEPLEASE:)
// Adding these two slash marks allows you make comments like this one :)
// They do not impact the program as they are for notes you may want to make
// We will be using them throughout to explain EACH line of code
// Programs read from the top of the page to the bottom
// Here we go!

#include <iostream>   // This is a library where all the things you type come from.  Just like a "real" Library with books (ex. On screen: numbers, characters, letters, etc)

using namespace std;  // This draws from a shorthand form of code in standard (std) library
                      // At end of each line we must put a ";" (semicolon) to let program know to go to next line (excluding first line)

int main()             // This is your "final" program.  The "main" program you are creating (a given "main" program may draw from other programs you make).  Like writing a paper after reading a few books you read from the library.
{                      // This brace has a corresponding brace that contain a function ( ex.1+1 = 2).  In this tutorial we will just print out to screen "Hello World" (so "1" of the "1+1 = 2" function)
    cout << "Hello world!" << endl; // cout - comes from using namespace std; section of <iostream> library
                        // << shows your program to screen
                        //"   " (quotation marks) allow computer to know this is what you want to see
                        // endl;  means end line (line = l not #)
    cin.ignore().get();  // IMPORTANT: If your your program does not pause on screen use this command pause

    return 0;  // This runs your program


}                         //  This is the second brace of the two braces that contain the program

// Questions?  Browse corresponding forum @ www.thenewboston.com or please free to contact Adam Tindall - The New Boston
