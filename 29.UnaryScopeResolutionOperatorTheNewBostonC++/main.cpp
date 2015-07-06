// The New Boston
// 29. Unary Scope Resolution Operator


#include <iostream>
using namespace std;

// 29. Unary Scope Resolution Operator

int tuna = 69;
// Scope of variables (where they can be used / what functions can use them).
// Whenever you make your variable outside functions it can be accessed by every function in the program (main or other functions)
// Every function has access to this variable



int main()

{
    int tuna = 20;

cout << :: tuna << endl;

     // Computer always chose the local variable (the variable inside" main() {} over the global variable (variable declared outside the main(){} function
    // unary scope resolution operator (::) "colon colon" This allows you to draw on the "global" variable over the local one
    // If declared inside the function it is called a "local variable" and the function will always use the local over the "global" variable (tuna here)
    //This is why many people like to create their variables like "int tuna" outside "int main() {} so other functions can use it
    // If you declared "tuna" here only "main" can use it.  Functions are greedy.

cin.ignore().get();
    return 0;
}

 //  void bucky
//{
    //  Questions?  Browse forum @ thenewboston.com or Adam Tindall - The New Boston //  So if the comment lines right above were removed you would have two functions "main" and "void bucky()"
    // "Main's" Tuna can not be used here and the second function can not be used in main.  If you
    // int tuna = 69 outside the function (like above/before) the main. It is a global variable and both can use it
//}

//  Questions?  Browse forum @ thenewboston.com or Adam Tindall - The New Boston


