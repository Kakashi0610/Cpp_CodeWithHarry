/* ARROW POINTER  -- implementation at line 39, 40

#include <iostream>
using namespace std;

class complex
{
    public:
        int real;
        int imaginary;

    setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    getdata()
    {
        cout << "the real part is " << real << endl;
        cout << "the imaginary part is " << imaginary << endl;
    }
};

int main(int argc, char const *argv[])
{
    // old implementation method
    // complex c;
    // c.setdata(33,55);
    // c.getdata();

    //new implementation method - 1
    // complex *ptr2 = new complex;
    // (*ptr2).setdata(33, 55);
    // (*ptr2).getdata();

    //new implementation method - 2  (most easy in terms of pointers)
    // complex *ptr3 = new complex;
    // ptr3->setdata(33, 55);
    // ptr3->getdata();

    //new implementation method - 2  (for arrays)
    complex *ptr3 = new complex[2];
    ptr3->setdata(33, 55);
    ptr3->getdata();

    return 0;
}
*/


/* OUTPUT
the real part is 33
the imaginary part is 55
*/