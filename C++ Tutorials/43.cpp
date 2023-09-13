/*   AMBIGUITY RESOLUTION IN C++

If two classes have a same function name, ambiguity resolution is used to solve the error by declaring 
the value of any one function according to the user, within the derived class.

// Ambiguity Resolution example :

class derived : public base1, public base2
{
    int a;

    public:
        void greet()
        {
            base1 :: greet();   // AMBIGUITY RESOLUTION -- declaring function 1 value to derived class func 
        }
};

*/



/* Example of AMBIGUITY RESOLUTION

#include <iostream>
using namespace std;

class base1
{
    public:

        base1() {}

        void greet()
        {
            cout << "How are you?" << endl;
        }
};

class base2
{
    public:

        base2() {}
        
        void greet()
        {
            cout << "Kaise ho aap?" << endl;
        }
};

class derived : public base1, public base2
{
    int a;

    public:
        void greet()
        {
            base1 :: greet();    // ambiguity resolution
        }
};

int main(int argc, char const *argv[])
{
    base1 base1obj;
    base1obj.greet();

    base2 base2obj;
    base2obj.greet();

    derived d1;   //using ambiguity resolution
    d1.greet();
    return 0;
}
*/
 


/* OUTPUT

How are you?
Kaise ho aap?
How are you?    //using ambiguity resolution

*/



/* Another Ambiguity Resolution Example

#include <iostream>
using namespace std;

class a
{
    public :
        void say()
        {
            cout << "hello world. Hallelujah ! \n";
        }
};

class b
{
    public :
        void say()
        {
            cout << "hello world. Namaskar !\n";
        }
};

class d : public a, public b
{
    int a;

    public :

        // if say() function is already in derived class, it displays derived class's say() value

        // void say()
        // {
        //     cout << "hello world my beautiful people. \n";
        // }

        // but if not available, user can use ambiguity resolution, and declare any desired function value

        void say()
        {
            b :: say();     //using ambiguity resolution
        }
};

int main(int argc, char const *argv[])
{
    //Ambiguity ex1

    // base1 base1obj;
    // base1obj.greet();

    // base2 base2obj;
    // base2obj.greet();

    // derived d1;   //using ambiguity resolution
    // d1.greet();

    d d1;
    d1.say();

    return 0;
}
*/


/* OUTPUT

hello world. Namaskar !

*/