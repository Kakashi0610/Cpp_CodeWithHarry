//  CONSTRUCTORS IN C++

// Constructor is a special member function with the same name as of the class.
//It is used to create the objects of its class
//It is automatically called/invoked whenever an object is created


/*Important Characteristics of Constructors in C++

1. A constructor should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address
*/


/*  CONSTRUCTOR EXAMPLE

#include <iostream>
using namespace std;

class complex 
{
    public:
        int a,b;

    complex();     //constructor declaration  and no parameters coz default constructor

    void printnum()
    {
        cout << "Your number are " << a << " + " << b << "i\n";
    }
};

//defining constructor

//void, int before constructor is not used

complex :: complex()      // ----> this is a default constructor, does not take any parameters 
{
    a = 55;
    b = 56;

    //first this will execute no matter what, then printnum, kuch bhi likho, run ho jayega
    cout <<"hello world\n";          
}

int main(int argc, char const *argv[])
{
    complex c1,c2,c3;
    c1.printnum();
    c2.printnum();
    c3.printnum();

    return 0;
}
*/


/* OUTPUT
hello world
Your number are 55 + 56i
Your number are 55 + 56i
Your number are 55 + 56i
hello world
*/


/* timepass   DEFAULT

#include <iostream>
using namespace std;

class complex 
{
    public:
        int a,b;

    complex();     

    void printnum()
    {
        cout << "Your number are " << a << " + " << b << "i\n";
    }
};

complex :: complex()     
{
    a = 55;
    b = 56;

    cout <<"hello world\n";          
}

int main(int argc, char const *argv[])
{
    complex c1;
    c1.printnum();

    return 0;
}
*/


/*  OUTPUT
hello world
Your number are 55 + 56i
*/

