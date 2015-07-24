



#include <iostream>

using namespace std;

int main()

{
    cout << "boy i love bacon \n";  // "cout" is a stream and will not move onto the next line output to screen until
                                    // The computer needs to be told exactly what to do
                                    // you can use one of two options" -->   endl;   or the new line line symbol -->   /n
                                    //     /n/n/  = 2 new lines and so on
    cout << "and ham";  // Here we used /n rather than endl; to get to the show a second line to screen

    cin.ignore().get();

    return 0;
}
// *Important concept to understand is that Computers need to be told EXACTLY what to do so look closely for syntax errors where you
// have idea right but may have misspelling, forgot a parentheses or semicolon or brace etc.

