// The New Boston
// 9. Functions

#include <iostream>

using namespace std;

void printSomething();  // This is a function prototype (full function seen at bottom outside "main"). Discussed later in tutorial.


// A computer program are basically a bunch of functions
// The job of a function is to do "something"  4 + 3 = 7 is a function.  Or Seeing out something to screen is a function
// The "Hello world" program is an example of a function.  All functions are followed by ";"

int main()  // Every computer program starts with the "main" function
{

printSomething(); // Computers read from the top down so must tell computer you are making something prior (above)



cin.ignore().get();


    return 0;  //  This return type is an "int"


}

// Here is a way to create a function outside Main


 void printSomething()    {   // This print something out on screen so only need to use void
                            // The parentheses are parameters for the function (covered in next tutorial.

    cout << "ooo i am text on the screen"  <<  endl;  // Using function or "calling" the function tells main what to do

                                                    // So go ahead and place print something inside "main"
    }

//  Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston
