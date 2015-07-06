// The New Boston
// 10. Creating Function That Use Parameters

#include <iostream>
using namespace std;


// A parameter is simply the additional information that the program needs in order to work

void printCrap(int x){  // For example what age someone was born a helpful piece would be the date
                        // Since we don't know this information yet we just go ahead and use "x"

cout << "buckys favorite number is "  << x << endl; // Since we don't know what his favorite number is we use a variable "x" for the number

int main()

{
    printCrap(20);  // In order to use a function in main just type the function name in main
                    // Each time the computer reads program and the variable "printCrap()"
                    // So now as the program runs when it looks for "x" in printCrap it will replace int"x" with that number "(20)"
                    // This example we use "20" but this could be substituted with different numbers as we are born on different dates
cin.ignore().get();
    return 0;

}

//  Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston
