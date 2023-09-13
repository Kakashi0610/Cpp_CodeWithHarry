// FUNCTION OVERLOADING -- even if there are 2 conditions, funcn will check args and execute them acc.ly

/*
#include <iostream>
using namespace std;

int sum(int a, int b)  //function checking 2 args while executing
{
    cout << "using func with 2 args";
    return a + b;
}

int sum(int a, int b, int c)  //function checking 3 args while executing
{
    cout << "using func with 3 args";
    return a + b + c;
}

int main(int argc, char const *argv[])
{
    int x,y,z;
    x=3;
    y=7;

    //will execute according to the args in function
    cout << " the sum of 3, 7 is : " << sum(x,y)<< "\n\n";  //3, 7 is : 10

    //will execute according to the args in function
    cout << " the sum of 3, 7 and 6 is : " << sum(x,y,6)<< "\n";    //3, 7 and 6 is : 16
    return 0;
}
*/

/* OUTPUT :
using func with 2 args the sum of 3, 7 is : 10
using func with 3 args the sum of 3, 7 and 6 is : 16
*/



// FUNCTION OVERLOADING EXAMPLE

/*
#include <iostream>
using namespace std;

int vol(int a)
{
    return a * a * a;
}

int vol(int r, int h)
{
    return 3.14 * r * r * h;
}

int vol(int l, int b, int h)
{
    return l * b * h;
}

int main(int argc, char const *argv[])
{

    int a,b,c;
    a=3;
    b=5;
    c=6;

    // will check the number of args and execute the function accordingly

    cout << "the volume of cylinder is "<<vol(a,b)<<"\n";
    cout << "the volume of rectangle is "<<vol(a,b,c)<<"\n";
    cout << "the volume of cube is "<<vol(a,a,a)<<"\n";

    return 0;
}
*/


/* OUTPUT

the volume of cylinder is 141
the volume of rectangle is 90
the volume of cube is 27
*/
