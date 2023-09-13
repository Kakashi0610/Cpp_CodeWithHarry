/* PARAMETERIZED CONSTRUCTORS AND DEFAULT CONSTRUCTORS

PARAMETERIZED CONSTRUCTORS  --->  complex :: complex(int x , int y)   //with parameters

DEFAULT CONSTRUCTORS    --->  complex :: complex()   //without parameters

*/


//  DEFAULT CONSTRUCTORS example

/*
#include <iostream>
using namespace std;

class complex 
{
    public:
        int a,b;

    complex();     //constructor declaration

    void printnum()
    {
        cout << "Your number are " << a << " + " << b << "i\n";
    }
};

complex :: complex()     //for Default constructor
{
    a = 1;
    b = 2;
    cout <<"hello world\n"; 
}

int main(int argc, char const *argv[])
{
    complex c;
    c.printnum();

    return 0;
}
*/


/* OUTPUT
hello world
Your number are 1 + 2i
*/


/*  PARAMETERIZED CONSTRUCTORS

#include <iostream>
using namespace std;

class complex 
{
    public:
        int a,b;

    complex(int, int );     //constructor declaration

    void printnum()
    {
        cout << "Your number are " << a << " + " << b << "i\n";
    }
};

complex :: complex(int x , int y)   //for parameterized constructor
{
    a = x;
    b = y;
    cout <<"hello world\n"; 
}

int main(int argc, char const *argv[])
{
    //IMPLICIT CALL for parametermized args   

    complex c1(4,5);      //2nd method
    c1.printnum();

    //EXPLICIT CALL for parametermized args

    // 1st complex is class and 2nd complex is constructor

    // complex c2 = complex(7,8);     //3rd method
    // c2.printnum();         

    return 0;
}
*/


/* OUTPUT

hello world
Your number are 4 + 5i
hello world
Your number are 7 + 8i
*/



// PARAMETERIZED CONSTRUCTORS example2

/*
#include <iostream>
using namespace std;

class point
{
    private:   // if variables are in priv, use constructor and 2nd,3rd method to input values in Main func
        int x,y;
    public:

        point();

        point (int a,int b)
        {
            x = a;
            y = b;
        }    

        void display_point()
        {
            cout << "the point is : " << x << " and " << y << "\n";
        }   
};

int main(int argc, char const *argv[])
{
    point p1 = point(3,-4);
    //point p1(1,-4);
    p1.display_point();

    point p2 = point(-2,5);
    //point p2(-2,5);
    p2.display_point();

    return 0;
}
*/

/* OUTPUT
the point is : 3 and -4
the point is : -2 and 5
*/




/*  Distance between two points -- NOT WORKING

#include <iostream>
using namespace std;

class point
{
    private:   // if variables are in priv, use constructor and 2nd,3rd method to input values in Main func
        int x,y;
    public:

        point();

        point (int a,int b,int c)
        {
            x = a;
            y = b;
            z = c;
        } 

        void_minus(int x,int y)
        {
            z = y-x;
            return z;
        }    

        void display_point()
        {
            cout << "the point is : " << x << " and " << y << "\n";
        } 

        void display_distance()
        {
            cout << "the distance between " << x << " and " << y << " is " << z << "\n";
        } 
};

int main(int argc, char const *argv[])
{
    point p1 = point(1,0);
    p1.display_point();

    point p2 = point(70,0);
    p2.display_point();

    point p3 = void_minus(x,y);
    cout << p3;

    // point p3;
    // p3.display_distance();

    return 0;
}

*/
