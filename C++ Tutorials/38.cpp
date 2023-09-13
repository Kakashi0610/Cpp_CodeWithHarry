// SINGLE INHERITANCE - DEEP EXPLAINED !!!


/* Derived class in Public mode  

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
    //cout << "data1 value is : " << data1 << "\n";     DOESNT WORK
    return data1;
}

base ::getdata2()
{
    //cout << "data2 value is : " << data2 << "\n";     DOESNT WORK
    return data2;
}

//  DERIVED CLASS  -- PUBLIC

class derived : public base
{
private:
    int data3;

public:
    void process();
    void display();
};

void derived :: process()
{
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
    d1.setdata();
    d1.process();
    d1.display();

    return 0;
}
*/


/*  OUTPUT
data1 value is : 10
data2 value is : 20
data3 value is : 200
*/



/*  TIMEPASS

#include <iostream>
using namespace std;

class base
{
    int data1;   // private  :  cannot be inherited

    public :
        int data2;

        void setdata(int , int);
        int getdata1();
        int getdata2();

};

void base :: setdata(int d1, int d2)
{
    data1 = d1;
    data2 = d2;
}

base :: getdata1()
{
    cout << "data1 value is : " << data1 <<"\n";
}

base :: getdata2()
{
    cout << "data2 value is : " << data2 <<"\n";
}

int main(int argc, char const *argv[])
{
    base b1,b2;

    b1.setdata(33,55);
    b1.getdata1();
    b1.getdata2();

    return 0;
}
*/

/* OUTPUT
data1 value is : 33
data2 value is : 55
*/

