// The New Boston
// UsingVariablesinClasses


#include <iostream>
#include <string>  // include sting class as one of files used
// String basically another word for text.  " hey now brown cow "

using namespace std;


class BuckyClass{
public:
    void setName(string x){  // A "name" is a string of variables. Set to void since nothing is returned here
// Two functions one to set the variable one to get the variable
        name = x;  //  x = the sting the user inputs (name)    }
    string getName(){

    return name;  //  Just return the variable.  Easiest thing you're going to do

    }
private:
    string name;
};


int main()
{ BuckyClass bo;
bo.setName("Sir Bucky Wallace"); // Braveheart
cout << bo.getName();  //  Now your program returns the function getName which is the function "return name"  (Betty, Bobby, Boo, Sally etc)



cin.ignore().get();  // Pause to show on screen if default not selected

return 0;

}

// Key note: It is generally considered bad programing practice to have all variables public
// This is how you make your private variables public appropriately

//  Questions?  Browse forum @ thenewboston.com or Adam Tindall - The New Boston
