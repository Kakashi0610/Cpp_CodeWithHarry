//FRIEND FUNCTION ON CLASS

/*
#include <iostream>
using namespace std;

// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};

class complex
{
private:
    int a;
    int b;

public:
    void setnumber(int num1, int num2)
    {
        a = num1;
        b = num2;
    }

    void displaynumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i\n";
    }

    friend int calculator ::sumrealcomplex(complex, complex);
    friend int calculator ::sumcompcomplex(complex, complex);
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main(int argc, char const *argv[])
{
    complex f1, f2;    //any obj_name after class_name
    f1.setnumber(1, 4);
    f2.setnumber(3, 5);

    calculator calc;
    int calc1, calc2;
    calc1 = calc.sumrealcomplex(f1, f2);
    cout << "The sum of real part of o1.a and o2.a is " << calc1 << "\n";
    calc2 = calc.sumcompcomplex(f1, f2);
    cout << "The sum of real part of o1.b and o2.b is " << calc2 << "\n";

    return 0;
}
*/


/* output 

The sum of real part of o1.a and o2.a is 4
The sum of real part of o1.b and o2.b is 9

*/

