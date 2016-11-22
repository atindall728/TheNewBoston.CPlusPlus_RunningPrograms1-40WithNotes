// The New Boston
// 25. Switch


#include <iostream>
using namespace std;

// The Switch Statement replaces having to write numerous "if" statements unnecessarily
// A good example of when you would use one would be for ages.  Consider running an id program to see to see if someone was 16, 18 or 21.

int main()

    int age = 18;

    switch(age){  // write which variable(s) you wish to test inside "()" = Parameters in this case open

case 16:  // "if" statements are replaced by cases and int age = 18 is tested on each instance
    cout << "hey you can drive now!" << endl;
    break; // break here means end the switch.  Saves program the trouble the running through the rest of the cases if it already found a "match" in this example
    // if you switch the int value "18" is hit then it will tests and passes by the first value but when it hits the second value "18" it breaks out of case and states "go buy some lotto tickets`!" << endl;

case 18:
    cout << "go buy some lotto tickets ~!" << endl;  // this would print out in this particular example

case 21:
    cout << "buy me some beer" << endl;  // Try switching "int" at the top of the page AFTER running this program to see what changing the "int" to another number does.
    break;    //
    default:  // if none of these cases are true 16,18,21. Then move to default since you exit out anyway.  No "break" necessary.
        cout << "sorry you get nothing" << endl;
    }

    cin.ignore().get();
    return 0;

    // The break statement is used throughout these tutorials and C++ for that matter so when you see a "break" statement does not
// automatically imply switch statement.  It is used in many applications of C++

}


//
//  Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston
