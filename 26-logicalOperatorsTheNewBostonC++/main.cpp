// The New Boston
// 26. Logical Operators

#include <iostream>
#include <cmath>

// A better way to test more than two things without requiring multiple "if" statements.  Nice and streamlined.  Like a stream. K I am done lets have some fun.

using namespace std;

int main()
{
    int age = 23; // so here is the age variable that we will test below.  && This is the "and" operator So like if "this" and "that" are true do this.
    int money = 650; // Lets use $ as the other test variable

    if (age > 21 && money>500) { // this joins the two test.  Same results a whole lot less typing :)
        // both test need to be true to run program
        cout << "you are allowed in"; //  If only one or the other need to be true
        // use the "or" operator -->> || This is "or" operator or Bucky's "Pipes" Some people call them pipes i dunno blahlaha.
    }

    // You can multiple "or" test as you want.  Basically || operator means as long as one item among
    // a given amount is true run the program.  So s

    cin.ignore().get();

    return 0;
}


// //  Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston
