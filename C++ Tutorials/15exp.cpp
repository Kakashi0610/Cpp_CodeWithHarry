// FUNCTONS IN C++

//int sum (int a, int b) ----> NOT acceptable

// int sum (int,int)   ----> acceptable

//int sum (int a, int b) ----> acceptable


/* Functions

#include <iostream>
using namespace std;

//void greet(void)  ----> acceptable
void greet ()
{
    cout  << "hello world good morning\n";
}

// a and b are formal parameters 
int sum (int a, int b)     //Function prototype - inform ccompiler about the functon
{
    int c = a + b;
    return c;
}

int main(int argc, char const *argv[])
{
    int x, y, z;;
    x = 5;
    y=10;
    z = sum(x,y);

    // x and y are actual parameters
    cout << "the sum of "<<x<<" and "<<y<<" is "<<z<<".\n";  //is 15.
    cout << "the sum of "<<x<< " and "<<y<< " is " << sum(5,10)<<".\n";  //is 15.
    greet();
    return 0;
}
*/

/* OUTPUT
the sum of 5 and 10 is 15.
the sum of 5 and 10 is 15.
hello world good morning
*/

// POINTER to point the function

/*
#include <iostream>
using namespace std;

void greet ()
{
    cout  << "hello world good morning\n";
}

int sum (int a, int b)   
{
    int c = a + b;
    return c;
}

int main(int argc, char const *argv[])
{
    int x, y, z;;
    x = 5;
    y=10;
    z = sum(x,y);
    int * ptr = &z;  //pointer to point the function

    cout << "the sum of "<<x<<" and "<<y<< " is " <<*ptr<< "\n";
    cout << "the sum of "<<x<<" and "<<y<<" is "<<z<<".\n";  
    cout << "the sum of "<<x<< " and "<<y<< " is " << sum(5,10)<<".\n"; 
    greet();
    return 0;
}
*/

/* OUTPUT
the sum of 5 and 10 is 15
the sum of 5 and 10 is 15.
the sum of 5 and 10 is 15.
hello world good morning
*/

/* DECLARING FUNCTION AFTER RETURN

#include <iostream>
using namespace std;

void greet ();     // INFORMS COMPILER FUNCTION EXISTS 

int sum (int a, int b);   // INFORMS COMPILER FUNCTION EXISTS

int main(int argc, char const *argv[])
{
    int x, y, z;;
    x = 5;
    y=10;
    z = sum(x,y);
    int * ptr = &z;  //pointer to point the function

    cout << "the sum of "<<x<<" and "<<y<< " is " <<*ptr<< "\n";
    cout << "the sum of "<<x<<" and "<<y<<" is "<<z<<".\n";  
    cout << "the sum of "<<x<< " and "<<y<< " is " << sum(5,10)<<".\n"; 
    greet();
    return 0;
}

void greet ()
{
    cout  << "hello world good morning\n";
}

int sum (int a, int b)   
{
    int c = a + b;
    return c;
}
*/

/* OUTPUT 

the sum of 5 and 10 is 15
the sum of 5 and 10 is 15.
the sum of 5 and 10 is 15.
hello world good morning
*/