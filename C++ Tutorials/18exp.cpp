// RECURSSIONS and RECURSIVE FUNCTIONS   

/*
#include <iostream>
using namespace std;

int factnum(int num1)
{
    if (num1 == 0 || num1 == 1)
    {
        return 1;
    }
    else
    {
        //calling function in function
        return (num1 * factnum(num1-1));  //factorial formula 
    }
}
                      
int main(int argc, char const *argv[])
{
    int num;
    cout << "enter the number you want factorial of : \n";
    cin >> num;
    cout << "the number you want factorial of is : "<<num<<"\n";

    factnum(num);

    cout << "the factorial of the number "<<num<< " is : "<<factnum(num)<<"\n";

    return 0;
}
*/


/* OUTPUT

enter the number you want factorial of : 
5
the number you want factorial of is : 5
the factorial of the number 5 is : 120
*/


/*  Fibonacci series   ***INCOMPLETE***  not understood logic


#include <iostream>
using namespace std;

int fib(int num1)
{
    int num3, num2;
    if (num1 == 0 || num1 == 1)
    {
        return 1;
    }
    else
    {
        
        
        return fib; 
    }
}
                      
int main(int argc, char const *argv[])
{
    int num;
    cout << "enter the number you want factorial of : \n";
    cin >> num;
    cout << "the number you want fibonacci starting with is : "<<num<<"\n";

    fib(num);

    cout << "the factorial of the number "<<num<< " is : "<<fib(num)<<"\n";

    return 0;
}