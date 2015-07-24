// The New Boston
// Assignment and Increment Operators

#include <iostream>
using namespace std;



// Assignment operators are your basic +, -, /, *, and % (modulus which is fancy word for remainder)
// The increment is something new. Like x++, ++x .  It allows you to add one (increment) either before or after
// the statement. See below for brief examples and play around as it can be a tough concept to understand. Plus
// This is a good point to get familiar compiling and running programs and making mistakes in small easy programs that
// You don't have to go through a million lines of code to figure out why you can't compile ;)


//**Bucky uses only "x" to demonstrate in his tutorial and revises content on page as he goes.  I added int y as a place holder so can show all that he speaks of in one program. (he deletes and both in video)

int main ()
{



{

    int y = 10; // in video he uses "int x" here .  For now what you use: x,y,z,a etc. does not matter they are just place holders
    int x = 20;

                        // So just use 10 makes things easy and try a few of the operators below  (the below calculation is 10 minus "something equals 2") --> "x-8=2
    y -= 2;             //  So if you change it to another i.e. /,*, + or % you will see a different calculation made (the /= will divide 10 by 2 when you run the program)
                        // So really understand how the computer is making the calculation  it is simple but like everything important to get prior to moving along
                        // The % is modulus  operator and  is used in division if a remainder may exist Ex.  x %= 3 would equal 3.3333
    cout << y << endl;

                        // He explains the increment operator as well.  So the two lines of code below will show out int "x" not int "y" When you check the math to make sure you did it right.



   cout << x++ << endl; // So this x++ will add 1 after printing out the first value.  So if x is printed out to screen again 1 will be added.

   cout << x << endl;


   cout << ++x << endl;  // When the ++ is placed prior to the x 1 (1 increment) will be added prior to when x is reached thus changing the value of both "x's" below.

   cout << x << endl; // As you will see when program runs both x's are changed.

}





cin.ignore().get();

return 0;





}  //  On some computers you do not need "return 0".  C++ will just return 0.
//So rest of Bucky's Tutorials it will not be included.  That said, i
// Still includes as his did not work same as Bucky's not a big deal.
//
//  Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston

