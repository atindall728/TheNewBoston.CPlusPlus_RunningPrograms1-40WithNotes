// The New Boston
// 35. Passing Arrays into Functions

#include <iostream>

using namespace std;


// Key Point: void (C++) When used as a function return type, the void keyword specifies that the function does not return a value. In this example void does
// not print out to screen.  It is used in your other functions which print out to screen.


void printArray(int theArray[], int sizeOfArray);  // So here we make the variable void printArray here outside of main since computers read from top down.  When it reaches
// the next "printArray" it uses this as it's definition as to what to do.  We use int theArray[] since we don't know the size yet.  TBD

int main()

{

    int bucky [3] = {20,54,675};  // So here we make a bucky array first letting computer know to expect 3 numbers first then make make array with 3 numbers to the right with the{} values separated by commas
    int jessica[6] = {54, 24, 7, 8,9,99}; //  Here we let the computer know there will be 6 numbers with variable Jessica and so on.

    printArray(jessica, 6);  // So in this case we are asking for the 6 numbers in the jessica array since we declared "printArray" prior as well as jessica.  Go ahead and change this the number 6 to 4 and run program and see what happens.  Get it?
                            // the computer knows what to do.  All it needs is to know how many places in the array.


    cin.ignore().get();
    return 0;

}

void printArray(int theArray[], int sizeOfArray){  // So the computer runs through all the code prior to printing out a return value in the main program.  So here we are telling computer that
    // in this function prototype there is more we want to do.  We need to let computer know what to do with the variable sizeOfArray.

    for(int x = 0;x<sizeOfArray;x++){  // So this is saying with x equal to 0, so long as the size is greater than 0 increment by one (go to next value)
    cout << theArray[x] << endl; // So in this example the program loops through 6 times obtaining each  and seeing the values out to the screen.

}  // So you can see how precise programs have to be.  It is important to move at the pace you are comfortable with so you don't make silly mistakes like miss a bracket or other syntax like a semicolon

} //  So with that said don't forget to have corresponding brackets!  Last time I will  be saying that


// //  Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston
