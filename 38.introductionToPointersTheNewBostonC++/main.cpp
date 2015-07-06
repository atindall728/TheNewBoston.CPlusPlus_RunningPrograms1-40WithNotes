// The New Boston
// 38. Introduction to Pointers

#include <iostream>

using namespace std;


// Key point: with a pointer you are pointing the computer to a memory address on your computer.  The space
// that whatever your variable resides in not the variable itself.

int main()

{

int fish = 5; // So again we will point to this variables location not the 5 or the fish.  Just space somewhere in your computer.

cout << &fish << endl; // We use the "&" to point to memory  address where the variable fish is located.  Not to fish directly just to the space it sits in.
// this and "fish" together points to memory address not the integer

int * fishPointer; // Now using "*" tells the compiler we are making pointer.  Basically here your telling your program you are making a pointer.
                   // From this point fourth you will only have to "fishPointer" with no * since now your computer knows that the variable you made is a pointer
                   // & Lets just call this the memory address operator so when used you know now your int variable here is actually pointer so don't worry about
                    // the value itslef (here 5)
fishPointer = &fish;

cout << fishPointer << endl;

cin.ignore().get();

    return 0;
}

//  Here's another easy way to think about it: int & fish is the memory address (like a person giving directions memory) and int * is the pointer (thing that points, like their hand) itself :)

// Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston
