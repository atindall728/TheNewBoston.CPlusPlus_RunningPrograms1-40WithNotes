// The New Boston
// 14.Constructors

# include <iostream>

#include <string>


// Constructors are basically functions that gets called automatically
using namespace std;

class BuckyClass{  // Constructors never have a return type so you don't have to type int, void, string, etc.
        public:

        BuckyClass(string z){
        setName(z);
    }
    // The constructor is just the class name -  So the constructor gets called when object in program is called


//cout << "this will get printed out automagically "; // So this will be called when you call the object from outside program

        void setName(string x){
        name = x;
//So " Lucky Bucky Roberts" is passed into Z which is passed into X which is passed into "name" which is returned
}

        string getName() {

return name;

        }

        private:
        string name;


};


int main ()

{

        BuckyClass bo("Lucky Bucky Roberts");   // This will call the the constructors -  Usually you will not use constructors
  //  The main reason one may use constructors is to give variables an initial value.  Example : name, age, height, etc.
        cout << bo.getName();

      //  BuckyClass bo2("Sally mcSalad"); // You can create multiple objects from the same class - They are each assigned their own variables
// Somewhat similar to using a template once you've constructed the constructor ;)
        // cout << bo2.getName();

        // cin.ignore().get();

return 0;

}

//  Questions?  Browse forum @ thenewboston.com or Adam Tindall - The New Boston


