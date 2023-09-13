// CONSTRUCTORS IN DERIVED CLASS

/*  Execution of classes

Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/




/*
#include <iostream>
using namespace std;

class base1
{
    int data1;

    public:
        base1() {}

        base1(int i)
        {
            data1 = i;
            cout << "Base1 class constructor called value " << data1 <<endl; 
        }
};

class base2 
{
    int data2;

    public:
        base2() {}

        base2(int j)
        {
            data2 = j;
            cout << "Base2 class constructor called value "<< data2 << endl; 
        }
};


// if order of base1 and base2 is changed here, the executon order changes
class derived : public base1, public base2
{
    int derived1;
    int derived2;

    public:
        derived() {}

        // if order of base1 and base2 is changed here, the executon order DOES NOT change
        derived(int a, int b, int c, int d) : base1(a), base2(b)
        {
            derived1 = c;
            derived2 = d;
            cout << "Derived class constructor called "<<endl;
        }

        printderiveddata()
        {
            cout<< "The val of derived1 is "<< derived1 << endl;
            cout<< "The val of derived2 is "<< derived2 << endl;
        }
};

int main(int argc, char const *argv[])
{
    derived der1(1,3,5,7);   //always declare vlaue of constructor in same line
    der1.printderiveddata();
    return 0;
}
*/



/*  OUTPUT

Base1 class constructor called value 1
Base2 class constructor called value 3
Derived class constructor called
The val of derived1 is 5
The val of derived2 is 7

*/



/* constructors is derived class practice

#include <iostream>
using namespace std;

class base1
{
    private:
        int anger;

    public :
        
        base1() {}

        base1(int num1)   // called in derived class by derived constructor
        {
            anger = num1;
            cout << "base1 constructor called, value is : "<< anger <<"\n";
        }
};

class base2
{
    private:
        int black;

    public :
        
        base2() {}

        base2(int num2)   // called in derived class by derived constructor
        {
            black = num2;
            cout << "base2 constructor called , value is : "<< black <<"\n";
        }
};

class derived : public base1, public base2
{
    private:
        int deriveda;

    public:

        derived() {}

        derived (int a , int b, int c) : base1(a), base2(b)   //base1 cons. calls itself and base2 calls itself
        {
            deriveda = c;
            cout << "Derived constructor called\n";
        }

        printderived()
        {
            cout << "the value of deriveda is : "<< deriveda << endl;
        }
};

int main(int argc, char const *argv[])
{
    derived der1(12,24,36);
    der1.printderived();

    return 0;
}
*/




/* OUTPUT

base1 constructor called, value is : 12
base2 constructor called , value is : 24
Derived constructor called
the value of deriveda is : 36

*/