//  CONSTANTS, MANIPULATORS and OPERATOR PRESEDENCE in C++


/*  Constants in C++
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // int a=3;
    // cout << "the value of a was : "<<a<<".\n";
    // a = 88;  // can change valueof a anytime 
    // cout << "the value of a is : " <<a<<".\n";

    // constants in C++

    float const c = 55.766;
    cout << "the value of constant c is :" <<c<<".\n";  //constant c is :55.766.
    // c=44;
    // cout << "the value of c is : " <<c<<".\n";  //throws error since c is constant
    return 0;
}
*/

// Manipulators in C++   #include <iomanip>
/*
#include <iostream>
#include <iomanip>

using namespace std;    

int main(int argc, char const *argv[])
{
    int a , b , c;
    a=6;
    b=8;
    c=45;

    cout << "the value of a without setw is :" << a<<".\n";  //without setw is :6.
    cout << "the value of b without setw is :" << b<<".\n";
    cout << "the value of c without setw is :" << c<<".\n";
    

    // using Setw as a manipulator - 4 spaces between string and variable

    cout << "the value of a with setw is : " <<setw(4)<<a<<".\n";  //with setw is :    6.
    cout << "the value of b with setw is : " <<setw(4)<<b<<".\n";
    cout << "the value of c with setw is : " <<setw(4)<<c<<".\n";

    return 0;
}
*/

// Output
/*
the value of a without setw is :6.
the value of b without setw is :8.
the value of c without setw is :45.
the value of a with setw is :    6.
the value of b with setw is :    8.
the value of c with setw is :   45.  */


// Operator Precedence
/*
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    a=5;
    b=3;

    // works but not guaranteed
    cout << "the value of c is : " <<a*2+b<<".\n";  //of c is : 13.

    //operator Presedence works everytime (just use brackets correctly)
    cout << "the value of c is : " <<(a*2) + (b-2) + (a*5) - (b/3)<<".\n";  //c is : 35.
    cout << "the value of c is : " <<((((a*2) + b-2) + a*5) - b/3)<<".\n";  //c is : 35.

    return 0;
}
*/

/* OUTPUT

the value of c is : 13.
the value of c is : 35.
the value of c is : 35.

*/