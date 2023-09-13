// If DERIVED class is in PRIVATE MODE

/*
MOST IMPORTANT NOTE: 

base class private member func can be used within dervived class public member functions.*/

//Derived class being in PRIVATE to run smoothly, setdata() is invoked/called in process().



/*
#include <iostream>
using namespace std;

// BASE CLASS

class base
{
    int data1; // private  :  cannot be inherited

public:
    int data2;

    base() {}

    void setdata();
    getdata1();
    getdata2();
};

void base ::setdata()
{
    data1 = 10;
    data2 = 20;
}

base ::getdata1()
{
    //cout << "data1 value is : " << data1 << "\n";     // DOESNT WORK - same w data2
    return data1;
}

base ::getdata2()
{    
    return data2;
}

//  DERIVED CLASS  -- PRIVATE

class derived : private base   // will make BASE CLASS public member func PRIVATE 
{
private:
    int data3;

public:
    void process();
    void display();
};

void derived :: process()
{
    setdata();
    data3 = data2*getdata1();
}

void derived :: display()
{
    cout << "data1 value is : " << getdata1() << "\n";
    cout << "data2 value is : " << data2 << "\n";
    cout << "data3 value is : " << data3 << "\n";
}

int main(int argc, char const *argv[])
{
    derived d1;
    //d1.setdata();   // is invoked in process()
    d1.process();
    d1.display();

    return 0;
}
*/


/* OUTPUT

data1 value is : 10
data2 value is : 20
data3 value is : 200

*/