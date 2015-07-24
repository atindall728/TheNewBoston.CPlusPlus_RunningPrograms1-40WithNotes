#include <iostream>
using namespace std;

int main()

{
   int bertha[2][3] = {{4,5,6},{7,8,9}};  // This is an array 2x3 (2 rows by 3 columns)

   for(int row=0;row<2;row++){   //  this loops through the to execute number of rows (2)


   for(int column=0;column<3;column++){  // This loops through each of the columns  (3)

    cout << bertha[row][column]<< "    ";  // This extracts information from lines of code 12,9, and 7 and sees it out to screen.
    //"     " just adds a little space and remember it is not necessary to type "int" again just that you are using "bertha" and within bertha
                                           //  You have created a the actual table to see out to screen with the numbers
   }

   cout << endl;  // After it has looped though all elements and creates 2x3 array cout the endl;


   }

   // In the prior tutorial the computer knew where the numbers were placed and you just directed individual numbers out to screen
   // Here you made room for all of int bertha numbers to be seen out to screen.  How nice of you ;)  Bertha thanks you.  Bertha hungry.

   cin.ignore().get();
   return 0;
}


//  Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston

