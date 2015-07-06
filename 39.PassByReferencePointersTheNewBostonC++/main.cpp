// The New Boston
// 39. Pass By Reference Pointers

#include <iostream>

using namespace std;

void passByValue (int x);     // This is the function prototype since top down needs to know that there is a function below the main function it refers to.
void passByReference (int *x);  // So as you can see we build a lot of the segments outside the main program and drop them in.

int main ()

{
    int betty = 13;
    int sandy = 13;

    passByValue(betty);        // When you pass By Value it makes a copy of the variable but it also must make copy of both variables unnecessarily taking up space on computer since who cares
                               // what the old value was?  Not your computer.  Not you.  So why make a copy of something you no longer need?  I dunno...
    passByReference(&sandy);   // The ampersand here is telling computer pass by reference. When you pass by reference you only pass in that one variable.
                               // Basically you are are saving memory on your computer disk space
    // Pass By Reference:
    // Easier on your computer and will process faster.  This is the memory address the exact location of sandy on your computer

    cout << " betty is now "  << betty << endl;  // So here you are passing by value and so when you see out to screen shows 13

    cout << "sandy is now  " << sandy << endl;   // Here because we are pointing to sandy's memory location and so as will be shown below provide open access to variable.  Meaning it can be changed.



    cin.ignore().get();

    return 0;

}


void passByValue (int x)  //  We copy this line and place at top (technical term is called function prototyping) since computer reads from top down.  So it knows to look for this function prior to running main program.
                          //  So again as you can see above betty is linked to passByValue.  But because we do not use a pointer (*) or a memory address locater symbol (&) it does not overwrite the variable just makes
                          // a copy since was not provided ability for access of betty.  Yes it is very confusing so take the time you need to understand this.

{
    x = 99;  // So since this function does not have access to memory location the value int betty = 13 in this case can not b e changed.

}



void passByReference(int *x)  // Here we use a * to indicate we are pointing to something.  We copy just this line as well and place at top for same reason as above function.

{
     *x=66;                    // When the computer see passByReference with a memory location symbol and reaches this part of code it replaces whatever sandy was holding with 66

                     }         //  The reason a computer programer may do this is to save computer processing time.  In a pass by value (most of the tutorials to this point) the computer needs to make a copy
                               // which slows down the computer since it is having to handle more information.  Although these are small examples so not much code, when working with larger more complex programs we can save
                               // substantial space by doing this.

                               // Cool "bits" of info.  bit is the smallest piece a computer handles the 1s and 0s a byte is a grouping of 8 bits.  Just above a bit in size.
                               // A character or letter takes 8 bits or a byte of information a number or integer takes 4 bits

//  Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston

