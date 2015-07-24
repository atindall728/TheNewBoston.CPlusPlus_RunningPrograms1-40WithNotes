// The New Boston
// Sentinel  Controlled Program

#include <iostream>
using namespace std;


// Age averager 5.0 ;)
// I'll keep reiterating. Save yourself some stress and break your code up small steps and test as you go. If you can test.  Test. So you know. As you go.
// Now you know. Makes life soooo much simpler ;)


int main()

{

    int age; // To hold age entered
    int ageTotal = 0; // To hold the total of the  of the ages which we will divide by the number of people to get age
    int numberOfPeopleEntered = 0;// This is long for descriptive purposes make your variables short

    cout << "Enter first persons age or -1 to quit"  << endl; //  We ask for a number.  We -1 since weights, ages, height, ect. can not be -1. --> The computer then knows to quit and show you the avg of ages
    cin >> age;// The user inputs the age

    while(age != -1) { // So if the person wants to exit the program instead of age they would put -1. Or the program will run allow ages entered until want to exit/get info
        ageTotal = ageTotal + age; // so this will take one persons age and add it to another

        numberOfPeopleEntered++; // So this is just keeping a running total of number of people entered so we can get avg later
        cout << "Enter next persons age or -1 " << endl; // Requesting another age our to screen (loop will keep running until -1 entered
        cin >> age; // Every time the loop runs the user will
    }
cout << "Number of people entered:" << numberOfPeopleEntered << endl;  // Prints the number of people entered by user
cout << "Average age " << ageTotal/numberOfPeopleEntered; // Yes, in this example it is fine to do the division here and show out to screen at same time

// It is important to test your code with values that can be easily calculated so you can make sure it is working prior  to doing more bigger numbers (check your arithmetic in as easy a way possible.)

cin.ignore().get();

   return 0;



}
