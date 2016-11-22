// The New Boston
// Multi Dimensional Arrays

#include <iostream>

// Key Point. Really just apply the same knowledge from last tutorial/program we made and apply it here with just a couple extra bits of information

using namespace std;

int main ()

{

    int sally[2][3] = {{2,3,4} , {8,9,10}}; // So here you have a 2x3 array.  Just picture a table 2 rows by three columns.

    // Like this:         2,3,4
    //                    8, 9, 10

    cout << sally[0][0];  // So from the above you would move one space to the right of 2 since since our computer starts at 0 and one space down.
                          //  The [2] and the [3] set the table.  Again, play around with the numbers and watch what happens when you run program.

    cin.ignore().get();

    return 0;

    }

// Don't forget that the computer 0.  So 0 is the first place in your array.  Whatever number that may be.  Here it is 2 when sally[0][0].
// If for whatever reason when you change the numbers or really anything in the program besides the comment line and find it no longer runs.  Just simply redownload program
//  Overwrite the non-working program, and, most importantly,  Try again! :)
//  Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston

