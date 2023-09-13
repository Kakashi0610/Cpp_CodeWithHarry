// INLINE FUNCTIONS, DEFAULT ARGS AND CONSTANT ARGS


/*Inline funcs  - It is an enhancement feature that improves the execution time and speed of the program.
Should not be used in big or complex code. Instead use them in small prod sum cube functions. */


/*
#include <iostream>
using namespace std;

inline int prod (int x, int y)   //keyword inline to be added
{
    return x*y;
}
int main(int argc, char const *argv[])
{
    int a,b,c;
    cout<< "enter the val of a : \n";
    cin>>a;
    cout<< "enter the val of a : \n";
    cin>>b;

    c = prod(a,b);  //calling func prod

    cout << "the product of a and b is : " <<prod(a,b)<<"\n";
    return 0;
}
*/


/* OUTPUT
enter the val of a : 
5
enter the val of a : 
7
the product of a and b is : 35
*/


// STATIC VALUE - which remains changed, once its changed.

/*
#include <iostream>
using namespace std;

int selfmul(int x) 
{
    static int a = 1;  
    x = a * 5; 
    a=x;
    return a;
}

int main(int argc, char const *argv[]) 
{
    int c;
    selfmul(c);
    cout << "the value c is : " <<selfmul(c)<<"\n";
    cout << "the value c is : " <<selfmul(c)<<"\n";
    cout << "the value c is : " <<selfmul(c)<<"\n";
    cout << "the value c is : " <<selfmul(c)<<"\n";
    return 0;
}
*/

/* OUTPUT

the value c is : 25
the value c is : 125
the value c is : 625
the value c is : 3125
*/



// DEFAULT ARGUMENTS

/*
#include <iostream>
using namespace std;

int prod(int a, int b= 6)    //Default argument
{
    return a*b;
}

int main(int argc, char const *argv[])
{
    int x,y;
    x = 5;

    //no need to print the second var since its default
    prod(x);
    cout << "the product of 2 numbers is : "<<prod(x)<<"\n";  //the product of 2 numbers is : 30

    //can also change the DEF ARGS
    cout << "the product of 2 numbers is : "<<prod(x,9)<<"\n";  //the product of 2 numbers is : 45

    return 0;
}
*/


// CONSTANT ARGUMENTS

/*
#include <iostream>
using namespace std;

int const_val(const int a)    //int a remains constant
{
    a*3;   // doesnt change
    return a;   //changes only if declared beside return
}

int main(int argc, char const *argv[])
{
    int x;
    x = 5;

    const_val(x);
    cout << "the value of x is : "<<const_val(x)<<"\n";  //the value of x is : 5

    return 0;
}
*/

