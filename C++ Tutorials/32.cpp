// CONSTRUCTORS with DEFAULT ARGS

/*
#include <iostream>
using namespace std;

class simple 
{
    int data1;
    int data2;
    int data3;


    public:
        
        simple (int a, int b= 5, int c=4/2)
        {
            data1 = a;
            data2 = b;
            data3 = c;
        }

        display1()
        {
            cout << "the value of b is " << data1 << " and " << data2 << " and " << data3 << "\n";   
        }

        display2()     // just for an example
        {
            cout << "the value of b is " << data1 << " and " << data2 << " and " << data3 << "\n";   
        }

};


int main(int argc, char const *argv[])
{
    // regular assigning of val in constructor

    simple s(15);
    s.display1();     // the value of b is 15 and 5 and 2


    // can re-assign values even if mentioned in constructor

    simple s1(15,16,17);   
    s1.display2();    // the value of b is 15 and 16 and 17

    return 0;
}
*/


/* OUTPUT

the value of b is 15 and 5 and 2
the value of b is 15 and 16 and 17
*/