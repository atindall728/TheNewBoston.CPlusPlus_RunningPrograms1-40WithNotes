// The New Boston
// 27. Random Number Generator!

#include <iostream>
#include <cstdlib>  // Must include this header file for program to work. Has random number function in standard library
#include <ctime>    // And use this library to access the clock in your computer


//  Don't forget to include the header files or the program wont work!
// This requires some detailed explanation is it is an important concept to understand prior to moving forward
// Apologies if notes or have a not of detail or have some redundancy. They are for all so fill in all gaps i know may exist

using namespace std;


int main()

{
    srand(time(0));  // We use "s" "rand" included in header file library above. Allows you to "Seed" (s) "rand" which is an algorithm (already made your just changing a number so outcome is different... Random
                    // Nothing is truly random. Computers are not human and have to follow a specific set of instructions.  when you srand(43) it plops it into the equation and bam.  "Random" number.
                    // We access the "time" using header file "<ctime> we use "(time(0) as it calculates the time since 1970 or something
                    // Since this value is ever changing it is a "truly" random number (who knows who has access to clock built in 1970) That does not matter for this
                                                                                    // tutorial so don't think about that to much won't get ya anywhere.
    for(int x = 1; x<25; x++)  // This will give you a set of 25 straight numbers. x++ (increments by one) until "x" = 25 then the loop you made stops :)

    cout << 1 + (rand()%6) << endl;  // We add "1" since computer really starts at "0". Then add it to %6 (modulus 6 explained below) to get 1-6 instead of 0-5. This is going to only going 6 places to
                                     // put your random numbers (like a dice- Modulus 6) . I just wanted to say "modulus" again! Since that is the container for the random numbers.  Don't want dice having "7" y'all.
                                     //   Just aint coo -- Anything divided by 6 will have a remainder of 0 -5 since ya can't have a 6 remainder since it would just be another 1 (6/6 =1).
                                     // So we use the remainder so we have 6 sides (places for numbers).  Ya see modulus operator %7 would give you 6 places to add numbers. Since you will never get 7 as remainder
                                       // Unless you add one like above.

                                     // *There is no such thing as a "truly" random number in computing.  Computers are not human.  The algorithm is complex so it gives the appearance of randomness*

    cin.ignore().get();
}

// % 6 means divide by six.  You add "1" because "0" is included in the string
// So in other words you can have 0-5.  You need to "shift" the numbers.


//  This is as random we can make the generator
// Weird thing on-line if you search about random number generators and 9/11 all I'm saying...

//  Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston
