// The New Boston
// 28. Default Arguments Parameters

#include <iostream>

using namespace std;


// Saving you some stress... Below int l is and "L" not the number 1.  This drove me crazy.  Then I chilled.
// Take a breath. Keep calm.  Sit back. Relax. Code.  Ok cool lets go...

int volume(int l = 1 , int w =1, int h=1);// Again, int volume (int l , int w, int h);  //  Make sure you are using "l" the letter and not "1" the number.  Volume equation l*w*h

// The above is your function prototype that is outside of the "main" function


//  ********************************
// 2nd part of tutorial:
 // *Just remove my comment lines (//) insert comment lines on the above function (// int volume(int l , int w, int h);)
// If you would like to add default arguments heres what you would do:

// int volume(int l = 1 , int w =1, int h=1);

 // So now if we changed "cout << volume(4,5,5);" to "cout << volume();
// The computer will use default values we gave it here we gave it the value of 1.
// Basically the rule is this.  If the user does not enter anything in then it will use the default value
// If the user does enter something it will replace the default values in the order they are received.  This is explained further below.



int main()

{

cout << volume(4,5);  // The function will use the default value unless different parameters set "()" = no parameters
                        // The above we use the 4,5,5 as the parameters
                        // If you had "cout << volume();" and the user entered only one value say "5" ex. volume(5)
                        // The computer assumes the first value. So 5 length
                        //Two values?  Then the first two of the sequence and so on ex. volume(5,6)



cin.ignore().get();
}

// Make sure you are not in "main" when you make this function (below)

int volume(int l, int w, int h){

    // Don't put the values down here as if you did then you would not be able to pass in numbers (above)
    // to over ride the default outside of "main ()"


return l*w*h;

}

//  Questions?  Browse forum @ thenewboston.com or Adam Tindall - The New Boston
