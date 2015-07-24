// The New Boston
// 23. Stock Market Simulator


#include <iostream>  // This is the main c++ library.
#include <cmath>  // The "power" function in this particular library along with some other functions.

//  Ok so lets have some fun this tutorial.  Lets make a stock market simulator.  Awesome.

using namespace std;

int main()
{
    float a; // The "float" variable allows you to work with decimal places ("int" is for whole numbers)

    float p = 10000;

    float r =.01; //  So here is the int4rest rate (1%) and so we use "float" data type instead of "int"

    for(int day = 1; day<=20; day++) {   //  as long as the day is less than 20 the program will loop through and run again from top.
                        // once it hits 20 the program will stop and give you the amount "int a" of the interest on the 10000

        a = p * pow(1+r,day);// So this is where we use the "<cmath>" Library to get the desired interest rate function (here annual percentage yeild)

                       // day is the exponent -- >> a = your end yield after investment usually a would be annual percentage yield

                      //     a = p (principle amount) * (1*IntrestRate ^ years)  // This is the APR calculation (Bucky uses days but typically
                                                             // calculated in years.

        cout << day <<   "------" << a << endl;// Where "a" = ending amount of investment
    }
cin.ignore().get();

return 0;


}

//APR = Annual percentage rate is the interest rate you receive in a year off a given investment
