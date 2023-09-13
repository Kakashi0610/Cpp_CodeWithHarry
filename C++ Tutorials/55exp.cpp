/* BASE POINTER TO DERIVED CLASS OBJECTS  - used to access the objects from the derived class,  but runs the 
member functions of same base class. Functionality aage ke tuts me pata chalegi*/

/*
simple se bhasha me:

base class POINTER banao
base class OBJECT banao
derived class OBJECT banao
base class POINTER ko derived class OBJECT point karo
value set karo base class variable ki
base class se display karo
(kuch farak nahi hai, just derived class ko call kiya hai)
*/



/*
#include <iostream>
using namespace std;

class base 
{
    public:
        int var_base;

        void display ()
        {
            cout << "the value of var_base is " << var_base << endl;
        }

        void newdisplay ()
        {
            cout << "the value of new var_base is " << var_base << endl;
        }
};

class derived : public base
{
    public:
        int var_derived;

        void display ()
        {
            cout << "the value of var_derived is " << var_derived << endl;
        }

        void newdisplay ()
        {
            cout << "the value of new var_base is " << var_base << endl;
            cout << "the value of new var_derived is " << var_derived << endl;
        }
};

int main(int argc, char const *argv[])
{
    // creating class pointers
    base * base_ptr;    
    derived * derived_ptr;

    //Creating objects
    base B1;
    derived D1;

    //base pointer to derived objects
    base_ptr = &D1;
    base_ptr->var_base = 55;     //directly defining variable since public 
    base_ptr->display();

    base_ptr->var_base = 77;     //directly defining variable since public 
    base_ptr->newdisplay();

    //derived pointer to derived objects
    derived_ptr = &D1;
    derived_ptr->var_derived = 99;
    derived_ptr->display();

    derived_ptr->var_derived = 3333;
    derived_ptr->newdisplay();

    return 0;
}
*/



/* OUTPUT

the value of var_base is 55
the value of new var_base is 77
the value of var_derived is 99
the value of new var_base is 77
the value of new var_derived is 3333

*/