// CALL BY REFERENCE  AND  CALL BY VALUE (MOST PREF BY ME)

/*
#include <iostream>
using namespace std;

int sum(int a, int b)
    {
        int c = a + b;
        return c;
    }

// void swapptr (int x,int y) //THIS DOESNT WORK SINCE VALUE OF x AND y LIES IN FUNC,  A AND B IS 7,4 IN MAIN
//{
//     int temp = x;
//     x = y;
//     y = temp;
// }

// CALL BY REFERENCE
void swapptr (int* x , int* y)   //pointer points to the address of the formal variables 
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

//CALL BY VALUE
void swapval (int &x , int &y)   //pointer points to the address of the formal variables 
{
    int temp = x;
    x = y;
    y = temp;
}

int main(int argc, char const *argv[])
{
    int a, b;
    a = 7;
    b = 4;
    
    cout << "the sum of a and b is " <<sum(a,b)<<"\n";
    cout << "the sum of a and b is " <<sum(7,4)<<"\n";

    // swap(a,b);    THIS DOESNT WORK SINCE VALUE OF x AND y LIES IN FUNC,  A AND B IS 7,4 IN MAIN 
    // cout << "the value of a is : " <<a<<"\n";
    // cout << "the value of b is : " <<b<<"\n";


    // CALL BY REFERENCE VARIABLES

    // swapptr(&a,&b);  //is used to take the address of pointer x and y

    // cout << "the value of a is : " <<a<<"\n";  ////a is : 4
    // cout << "the value of b is : " <<b<<"\n";  //b is : 7

    // CALL BY VALUE     MOST PREF BY ME

    // swapval(a,b);  //is used to take the address of pointer x and y

    // cout << "the value of a is : " <<a<<"\n";  //a is : 4
    // cout << "the value of b is : " <<b<<"\n";  //b is : 7

    return 0;
}
*/