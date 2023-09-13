//  MULTIPLE INHERITANCE  -- DEEP DIVE

/*Multiple Inheritances in C++

SYNTAX :

class DerivedC: visibility-mode base1, visibility-mode base2
{
     Class body of class "DerivedC"
};

*/



/*  REGARDING ACCESS SPECIFIERS
should always use the "DERIVED CLASS" and "DERIVED CLASS OBJ" to execute in Main function
should always use protected access specifier to base class

nahitoh private karo, error paao

declared private here
         int base1int;

declared private here
         int base2int;

*/



/*
#include <iostream>
using namespace std;

class base1
{
    protected:

        int base1int;

    public:

        base1() {}

        void setbase1int(int a)
        {
            base1int = a;
        }
};

class base2
{
    protected:

        int base2int;

    public:

        void setbase2int(int b)
        {
            base2int = b;
        }
};

class base3
{
    protected:

        int base3int;

    public:

        void setbase3int(int c)
        {
            base3int = c;
        }
};

class derived : public base1, public base2, public base3     // using Multiple Inheritance
{
    public:

        derived() {}

        void show()
        {
            cout << "The value of base1 is : " << base1int << endl;
            cout << "The value of base2 is : " << base2int << endl;
            cout << "The value of base3 is : " << base3int << endl;
            cout << "The sum of base1, base2 and base3 is : " << base1int + base2int + base3int << endl;
        }
};

int main(int argc, char const *argv[])
{
    derived bas1;          // should always use the "DERIVED CLASS" and "DERIVED CLASS OBJ" to execute
    bas1.setbase1int(66);
    bas1.setbase2int(44);
    bas1.setbase3int(22);
    bas1.show();
    
    return 0;
}
*/



/* OUTPUT

The value of base1 is : 66
The value of base2 is : 44
The value of base3 is : 22
The sum of base1, base2 and base3 is : 132
*/



/*  MULTIPLE INHERITANCE  practice 

#include <iostream>
using namespace std;

class base1
{
    protected:

        int base1int;

    public :

        base1 () {}

        void setbase1int(int x)
        {
            base1int = x;
        }
};

class base2
{
    protected:
     
        int base2int;

    public :

        base2() {}

        void setbase2int(int y)
        {
            base2int = y;
        }
};

class base3
{
    protected:

        int base3int;

    public :

        base3 () {}

        void setbase3int(int z)
        {
            base3int = z;
        }
};

class derived : public base1, public base2, public base3
{
    public:

        derived() {}

        void show()
        {
            cout << "The value of base1 is : " << base1int << endl;
            cout << "The value of base2 is : " << base2int << endl;
            cout << "The value of base3 is : " << base3int << endl;
            cout << "The sum of base1, base2 and base3 is : " << ((base1int - base2int) - base3int) << endl;
        }
};

int main(int argc, char const *argv[])
{
    derived der1;
    der1.setbase1int(88);
    der1.setbase2int(55);
    der1.setbase3int(22);
    der1.show();

    return 0;
}
*/

/*   OUTPUT

The value of base1 is : 88
The value of base2 is : 55
The value of base3 is : 22
The sum of base1, base2 and base3 is : 11
*/
