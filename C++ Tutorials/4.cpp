// Variable scope and data types in C

/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //int a=4, b=7;
    int a=4;
    int b=7;
    int c=a+b;
    float pi = 3.14;
    char C = 'A';
    bool booleanT = true;   //returns 1 as true
    bool booleanF = false;  //returns 0 as false

    //double arrows for the variables value

    cout<<"the sum of "<<a<<" and "<<b<< " is : " <<c<<"\n";  //sum of 4 and 7 is : 11
    cout<<"the value of pi is : "<<pi<<"\n";  // is : 3.14
    cout<< "the Char of C is : "<<C<<"\n";  // C is : A
    cout <<"the boolean val of true is : "<<booleanT<<"\n";  //true is : 1
    cout <<"the boolean val of false is : "<<booleanF<<"\n"; //false is : 0

    return 0;
}
*/

/* output
the sum of 4 and 7 is : 11
the value of pi is : 3.14
the Char of C is : A
the boolean val of true is : 1
the boolean val of false is : 0
*/



// GLOBAL VARIABLES AND LOCAL VARIABLES

//
#include <iostream>

int global = 10;   //if var is not declared or defined, value of global var is printed

using namespace std;

int glo(int a, int b, int c)
{
    c = a+b;
    cout <<"value of a + b in func glo is "<<c<< "\n";
}

int main(int argc, char const *argv[])
{
    int a = 4;
    int b = 7;
    int z,c;
    z = glo(a,b,c); // value of global in func glo is 10

    //defining in main#1
    int global = 50;
    cout<<"value of global in func main is "<<global<<"\n";  // value of global in func main is 50

    //redefining global#2
    global = 70;
    cout<<"value of global in func main is "<<global<<"\n";  // value of global in func main is 70

    z = glo(a,b,c);  // value of global in func glo is 10

    cout<<"value of final global is "<<global<<"\n";  // value of final global is 70

    return 0;
}
//

/*  OUTPUT

value of a + b in func glo is 11
value of global in func main is 50
value of global in func main is 70
alue of a + b in func glo is 11
value of final global is 70 
*/




/* Print global in temp_func and main_func

#include <iostream>

int global = 10;   //if var is not declared or defined, value of global var is printed

using namespace std;

int glo(int a, int b)
{
    cout <<"value of glo in func glo is :"<< global <<"\n";  //
}

int main(int argc, char const *argv[])
{
    int a = 4;
    int b = 7;

    glo(a,b); // value of global in func glo is 10

    //defining in main#1
    int global = 50;
    cout<<"value of global in func main is "<<global<<"\n";  // value of global in func main is 50

    //redefining global#2
    global = 70;
    cout<<"value of global in func main is "<<global<<"\n";  // value of global in func main is 70

    glo(a,b);  // value of global in func glo is 10

    cout<<"value of final global is "<<global<<"\n";  // value of final global is 70

    return 0;
}

/* OUTPUT
value of glo in func glo is :10
value of global in func main is 50
value of global in func main is 70
value of glo in func glo is :10
value of final global is 70
*/