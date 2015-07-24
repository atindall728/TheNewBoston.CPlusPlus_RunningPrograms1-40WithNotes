//The New Boston
//Using Arrays in Calculations

#include <iostream>
using namespace std;

int main()

{
  int tuna[5] = {20, 54, 76, 832, 546}; //So again here we put in 5 spaces

  int sum = 0;                //  Now we have a variable "sum" to hold the values as we  will be adding them together below
                             // We use "0" as the place holder because "0" is "0" and so only can go up from it. So why not right? hehe

  for(int x = 0; x < 5; x++){ // So here we sent the parameters for the function below. So again we can use a loop to to get the variables in the
                              //  right spots for the addition. The x++ tells computer to go to next variable until it 5 since x < 5

    sum += tuna [x];        // So here we make a function to do the addition of the above loop. Basically we are telling the "x" what to do in the function with regard to moving.
                            //  += tells the computer that when it moves to next number to add it to the "sum"

    cout << sum << endl;    // This of course sees the awesome program you made out to screen!  Congratulations :)

}                           // Don't forget your brackets to seal off your function. A section, of your main program.
                            // Also, make sure they are placed int the right spots your computer does EXACTLY what you tell it to do!

cin.ignore().get();

return 0;

}

//  Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston
