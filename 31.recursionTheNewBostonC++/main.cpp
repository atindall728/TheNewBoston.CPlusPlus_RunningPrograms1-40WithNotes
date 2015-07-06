// The New Boston
// 31. Recursion
#include <iostream>
using namespace std;


// Key points:
// This is something many computer programmers can't stand.  I love it ;)
// Recursion is the idea that a function can call itself.
// A recursive function will crash your computer if coded incorrectly (just wont work not kill your computer) since it would loop forever!
// If you ever build a truly recursive function you will need an ending point so that does not happen.
// So you need a base case so the program knows when to end.  Like the example below above main().  Give the computer a place to get to
// Where once it gets there it knows a) when to stop and b) what to run in program.  Easier to see so just try to follow slowly.
// We don't use these much


int factorialFinder(int x){  // Create as very simple function for "int factorialFinder" with the parameters "int x"

if (x==1){  // This line of code determines what to do if the user enters one or not (thereby replacing x and thus "factorialFinder"

    return 1;  // We return "1" so the program does not continue through loop and crash the program.  This stops the program here when a) user enters one or b) in this case gets to last
               // factorial in the line(1!) and stops.
}              // So this is called your "base case" if you don't put one the computer crashes.  Here we use one since the factorial will loop 5 4 3 2 1!
               // And will stop since "1!" is one.  So when it reaches this it can solve whatever factorial you wanted to know.  In this case "5!"
               // It helps to think of it in 5 loops.  The program will run five times before it knows the answer. 1st loop = 5! it does not know answer
               // 4! it does not know the answer, but when it reaches 1! it understands the rest of the questions.

else {

return x*factorialFinder(x-1);} // So if the user inputs anything other than "1" the program will return "x" multiplied "x - 1" (your "factorialFinder)
// Then it will loop through again until it finds the ending point your set.  In this case "1"
}

int main()
{

    cout << factorialFinder(5) << endl;  // So here we just placed 5 in for "x" so the result would be 1*2*3*4*5 = 120. After 4 loops hits 1 and stops. The computer did the work for us!

cin.ignore().get();
return 0; // By following these steps when dealing in recursion you have instructed the computer to stop looping like crazy and crash.

// Its kind like being asked for a million questions without having an answer for first.  Yet your comp (or colleague;) keeps trying... Poor computer (or you)...
// Computers thank you for learning this and they appreciate not being looped into oblivion ;)  Like you are doing for yourself,  Now :)


}

// Questions?  Browse forum @ thenewboston.com or Adam Tindall - The New Boston


//--------------------------------------------------------------------------------//

//1st part of video

// void bucky() {

//cout << "omgwtfbbq"; // This is function saying print this out run bucky print this out again.  Which would run it again, again and again in perpetuity.
                       // Thus crashing your computer
                       // So what's the point of recursive function?  There is none. Don't use them
                       // Your computer will crash.  Jk,there can be useful in a small number of instances. If you are to build a truly recursive function
                       // There just needs to be an ending point so it knows to stop when it has solved your question (above)
                       //Factorials, like demonstrated above are examples where recursion is a good idea 5! is a factorial. See Math class from 10 years ago ;) but seriously google it.
                       // (5! = 5*4*3*2*1) = 120
//  bucky();
