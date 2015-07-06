// The New Boston
// 30. Function Overloading

#include <iostream>

using namespace std;


void printNumber(int x){
cout << "i am printing an integer " << x << endl;  // Creating the functions for "x" to determine whether whole integer or one with decimal places

}

void printNumber(float x){  // declaring function "(float x)" allows for decimal places
cout << "now i am print a float " << x << endl; // The computer is now smart enough to determine to use an "float" for decimal/fraction entry or "int" for whole number

}

int main()

{
    int a = 54;
    float b = 32.4896;

    printNumber(a);      // So the computer now knows automatically to correspond "x" to any whole integer.  In this example "a"
    printNumber(b);      // So again, because we declared "(float x)" and "(int x)" outside (above) of main, the computer is smart enough to look for data type

    cin.ignore().get(); // Pause program to keep up on screen
    return 0;

}


// * So basically whenever you use a function your computer is going to look for function with name "printNumber".
// If there is more than one choice then it looks at what type of data type the user is passing in.
// This is why it is important to declare int/float name and date type
// Makes things simple for the user


//  Questions?  Browse forum @ thenewboston.com or Adam Tindall - The New Boston
