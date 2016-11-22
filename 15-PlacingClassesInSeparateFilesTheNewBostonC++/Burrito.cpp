#include "Burrito.h" // This links your code below to its titles in the header file.  Again, the titles are the only thing you need to send to team! :)
#include <iostream> // Here is the "source" file where you will write your code (functions). (Definition to word in dictionary)
using namespace std;


Burrito::Burrito()  // :: is the binary scope resolution operator.  All this is saying is that the "burrito" function is a member of the
// burrito class.  A little odd here given the function and the class have same name.  Not normally the case but who care so long you understand. Right?

{
    cout << "i am a watermelon" << endl;  // the constructor (I am a banana) gets called as soon as you create the object (burrito bo) in main .cpp file

}

// Your team members will not be able to edit your functions via the title.  But they won't need to since you built them perfectly.  Kinda had to... ;)
// *Make sure all of your "include" statements (iostream and burrito.h) at top of your .cpp files are are same. Just copy and paste.  So all files are linked together.
