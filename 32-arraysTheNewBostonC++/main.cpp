// The New Boston
//32.Arrays

#include <iostream>

using namespace std;

// Key Points:
// An array is basically a variable that can store multiple values.  An extremely useful tool
// Much like a variable but it can store multiple values (elements is the technical term)

int main()

{

int bucky[5] = {66,75,2,43,99};  // Your computer starts at "0" in an array so think of this as "5" places to input numbers 0-4 (or 5 places)

//Ex. [5] = 0,1,2,3,4 . So as you can see there are 5 spaces reserved in your computer to put numbers. Make sure you use a comma "," to separate the numbers
//This is an example of an "array initializer list".  Basically just a list of numbers

cout << bucky [4] << endl;
// So, because we know the computer starts at "0" we know that the number this will print out is 99 (the 5th number).  So if we used "bucky[0]".  66 would print to screen.  And so on...

cin.ignore().get();


return 0;

}

// The easiest way to make an array is to write the data type (here int or "integer"), then write array name "bucky" and the number of elements you want in your array [5]
// In order to reference an element in array we use an array index "bucky [4]" to call on a particular element in the array

//  Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston
