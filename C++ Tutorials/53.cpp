
/* THIS POINTER in C++ = is used when the temporary var is as same as the class private var otherwise an
an error is returned.  */


/* Example

#include <iostream>
using namespace std;

class A
{
    int a;

    public:
        A () {}

        setdata(int a)
        {
            this -> a = a;     // THIS POINTER is used
        }

        getdata()
        {
            cout << "the val of a is : " << a << endl;
        }
};

int main(int argc, char const *argv[])
{
    A * anum = new A;
    anum->setdata(66);   //anum is not object, its a pointer
    anum->getdata();
    return 0;
}
*/



/* OUTPUT

using THIS POINTER ->
the val of a is : 16651296

without using THIS POINTER ->
the val of a is : 66
*/



/*  timepass example

#include <iostream>
using namespace std;

class A
{
    int a;

    public:
        A () {}

        setdata(int a1)
        {
            a = a1;
        }

        getdata()
        {
            cout << "the val of a is : " << a << endl;
        }
};

int main(int argc, char const *argv[])
{
    // normal initialization
    // A anum;
    // anum.setdata(55);     
    // anum.getdata();
    
    A * anum = new A;
    anum->setdata(55);      //anum is not object, its a pointer
    anum->getdata();

    return 0;
}
*/
