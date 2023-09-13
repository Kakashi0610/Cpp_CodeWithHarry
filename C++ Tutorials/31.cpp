// CONSTRUCTOR OVERLOADING

/* CONSTRUCTOR OVERLOADING with default constructor

#include <iostream>
using namespace std;

class point
{
public:
    point(int a);
    point(int a, int b, int c);
    point(int a, int b);

    point();       //default constructor declaration

    int a, b, c, d;

    void_display_point4()        //default constructor
    {
        cout << "the value of the point is " << d <<"\n";
    }

    void_display_point3()
    {
        cout << "the value of the point is " << a << " and " << b << " and " << c << "\n";
    }

    void_display_point2()
    {
        cout << "the value of the point is " << a << " and " << b << "\n";
    }

    void_display_point1()
    {
        cout << "the value of the point is " << a << "\n";
    }
};

point :: point()    //default constructor, no args
{
    d = 22;
}

point :: point(int x)
{
    a=x;
}

point :: point(int x, int y, int z)
{
    a=x;
    b=y;
    c=z;
}

point :: point(int x, int y)
{
    a=x;
    b=y;
}

int main(int argc, char const *argv[])
{
    point p3(3,4,5);
    p3.void_display_point3();

    point p2(3,4);
    p2.void_display_point2();

    point p1(3);
    p1.void_display_point1();

    point p4;        //for default constructor
    p4.void_display_point4();

    return 0;
}
*/

/* OUTPUT

the value of the point is 3 and 4 and 5
the value of the point is 3 and 4
the value of the point is 3
the value of the point is 22
*/



/*  CONSTRUCTOR OVERLOADING without default constructor

#include <iostream>
using namespace std;

class point
{
public:
    int a, b, c, d;

    point(int a);
    point(int a, int b, int c);
    point(int a, int b);
    point();       //default 


    void_display_point4()        //default constructor
    {
        cout << "the value of the point is " << d <<"\n";
    }

    void_display_point3()
    {
        cout << "the value of the point is " << a << " and " << b << " and " << c << "\n";
    }

    void_display_point2()
    {
        cout << "the value of the point is " << a << " and " << b << "\n";
    }

    void_display_point1()
    {
        cout << "the value of the point is " << a << "\n";
    }
};

point :: point()
{
    a;
}

point :: point(int x)
{
    a=x;
}

point :: point(int x, int y, int z)
{
    a=x;
    b=y;
    c=z;
}

point :: point(int x, int y)
{
    a=x;
    b=y;
}

int main(int argc, char const *argv[])
{
    point p3 = point(3,4,5);
    p3.void_display_point3();

    point p2 = point(3,4);
    p2.void_display_point2();

    point p1 = point(3);
    p1.void_display_point1();

    point p4 = point();        //for default constructor
    p4.void_display_point4();

    return 0;
}
*/


/* OUTPUT
the value of the point is 3 and 4 and 5
the value of the point is 3 and 4
the value of the point is 3
the value of the point is 0
*/