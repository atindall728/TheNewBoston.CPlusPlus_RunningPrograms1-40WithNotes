


// Follow these instructions to begin this tutorial:
// File --> New --> Class.  Class name = Burrito.  Uncheck "has" and "virtual" distructor.  Now check "header and implementation" in the same file
// By default this is unchecked.  Checking this will keep all the files in same folder.  Now press "done" and "yes" to pop up boxes.  Yay!
// Now you should have 3 tabs at top (these are your files)
// Here we go!

#include <iostream>  // Each of the three files created (including the "main" .cpp need to be identified at the top
#include "Burrito.h" // The main program needs this  to know where the "titles" (prototypes) to the functions are. (Like looking up a word in dictionary)

using namespace std;

int main ()

{
    Burrito bo;  // Now when "burrito" is typed the main file includes the whole burrito class and you can use all the functions within the class (here burrito)

    cin.ignore().get();
    return 0;

}

// The reason we break the files up the titles (prototypes) to the functions is to simplify what you send to your team members and fellow programers
// Your functions are working so they only need the title not to see exactly how you made your function.  So just title.  Grrreat, Peter. Lumburg  ;)!
// Programers separate their files into classes to make things easier to work on.  Otherwise the final text file would be huge and cumbersome.
// This makes the file you may be working on with other programers easier to work with and stay organized.
// This tutorial will make much more sense later on as you learn more and begin making your full programs.

