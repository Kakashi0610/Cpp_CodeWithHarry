/* 
VIRTUAL FUNCTIONS - Virtual function is defined in the base class of the same name member 
function, when an derived member function is pointed by an pointer of of the base class, and 
user wants to access the member functions of derived class (and not the mem func of base class).

Exactly OPPOSITE than the previous tutorial, where base class ptr points to derived class, still gets
the member function functionality of an base class mamber function.


Rules for virtual functions :

They cannot be static
They are accessed by object pointers
Virtual functions can be a friend of another class
A virtual function in the base class might not be used.
If a virtual func is defined in a base class, there is no necessity of redefining it in the derived class
*/



/*   EXAMPLE
#include <iostream>
using namespace std;

class base 
{
    public:
        int var_base = 77;

        virtual void display ()
        {
            cout << "1 The value of var_base is " << var_base << endl;
        }
};

class derived : public base
{
    public:
        int var_derived  = 55;

        void display ()
        {
            cout << "2 The value of var_base is " << var_base << endl;
            cout << "2 The value of var_derived is " << var_derived << endl;
        }
};

int main(int argc, char const *argv[])
{
    base * base_ptr;
    base base1;
    derived derived1;

    // //WITHOUT using VirtualFunction
    // //pointing base class ptr to derived obj
    // base_ptr = &derived1;
    // // still returns base class obj function
    // base_ptr->display();     // 1 The value of var_base is 77

    //WITH using VirtualFunction
    base_ptr = &derived1;
    base_ptr->display();     
    return 0;
}
*/



/* OUTPUT

2 The value of var_base is 77
2 The value of var_derived is 55

*/