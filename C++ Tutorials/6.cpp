// OPERATORS  and  C++ HEADER FILES  -- https://en.cppreference.com/w/cpp/header (all header files)


/* There are 2 types of header files :

(a) System header file : it comes w the compiler
#include <iostream> -- //long press ctrl+headerfile to see header files

(b) User header file : it comes from the user's code of another file ie 'this.h'
#include "this.h" -- hdr file by user using another file - passes error if not created or not an existing file. */

/* INTRO -- header file
#include <iostream>
#include "this.h"

using namespace std; 

int main(int argc, char const *argv[])
{
    cout<<"hello world!";

    return 0;
}
*/

/*  OPERATORS in C++  using 3rd variable

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numb1, numb2, numb3, numb4, numb5, numb6, numb7;

    cout << "Enter the value of num1 : \n";
    cin >> numb1;  //take input from user
    cout << "the value of numb1 is :" << numb1 << "\n\n";

    cout << "Enter the value of num2 : \n";
    cin >> numb2;
    cout << "the value of numb2 is :" << numb2 << "\n\n";

    numb3 = numb1 + numb2;
    numb4 = numb1 - numb2;
    numb5 = numb1 * numb2;
    numb6 = numb1 / numb2;
    numb7 = numb1 % numb2;


    cout << "the sum of " << numb1 << " and " << numb2 << " is :" << numb3 << "\n";
    cout << "the subs of "<<numb1<<" and "<<numb2<<" is : " << numb4 << "\n";
    cout << "the product of "<<numb1<<" and "<<numb2<<" is : " << numb5 << "\n";
    cout << "the quotient of "<<numb1<<" and "<<numb2<<" is : " << numb6 << "\n";
    cout << "the remainder of "<<numb1<<" and "<<numb2<<" is : " << numb7 << "\n";

    return 0;
}
*/

/* OUTPUT
Enter the value of num1 : 
20
the value of numb1 is :20

Enter the value of num2 :
5
the value of numb2 is :5

the sum of 20 and 5 is :25
the subs of 20 and 5 is : 15
the product of 20 and 5 is : 100
the quotient of 20 and 5 is : 4
the remainder of 20 and 5 is : 0
*/


//   OPERATORS   

/*
#include <iostream>

using namespace std;    

int main(int argc, char const *argv[])
{
    int num1, num2;
    cout <<"enter a number\n";
    cin >> num1;
    cout << "entered number is :"<<num1<<"\n";

    cout << "enter a number\n";
    cin >> num2;
    cout << "entered number is :"<<num2<<"\n\n";

    // ARITHMETIC OPERATORS

    //cout << "\nthe sum of two numbers is  : "<<num1+num2; // can use arith optrs directly
    //cout << "\nthe subs of two number is : "<<num1-num2;
    // cout << "\nthe mul of two number is : "<<num1*num2;
    // cout << "\nthe div of two number is : "<<num1/num2;
    // cout << "\nthe mod of two number is : "<<num1%num2; 

    // cout << "\nthe value of num1++ is : "<<num1++; //increments by 1 but shows 30
    // cout << "\nthe value of num1-- is : "<<num1-3; //decrements by 3   --- 31-3

    // cout << "\nthe value of ++num1 is : \n" <<3+num1; //increments by 3
    // cout << "\nthe value of --num1 is : \n\n" <<2-num1; //decrements by 2

    /* OUTPUT for Arthematic operators
        
    enter a number
    30
    entered number is :30

    enter a number
    5
    entered number is :5

    the sum of two numbers is  : 35
    the subs of two number is : 25
    the mul of two number is : 150
    the div of two number is : 6
    the mod of two number is : 0
    the value of num1++ is : 30
    the value of num1-- is : 28
    the value of ++num1 is : 34
    the value of --num1 is : -29
*/


//  ASSIGNMENT OPERATORS  '='

    // int a = 5;
    // float f = 6.5;
    // char c = 'Z';


//  RELATIONAL OPERATORS

    // cout << "the logical operators start here\n";
    // cout << "the value of num1==num2 is : "<<(num1==num2)<<"\n";
    // cout << "the value of num1!=num2 is : "<<(num1!=num2)<<"\n";
    // cout << "the value of num1<num2 is : "<<(num1<num2)<<"\n";
    // cout << "the value of num1>num2 is : "<<(num1>num2)<<"\n";
    // cout << "the value of num1<=num2 is : "<<(num1<=num2)<<"\n";
    // cout << "the value of num1>=num2 is : "<<(num1>=num2)<<"\n";

    /* Output  for Relational Operators
    
    enter a number
    30
    entered number is :30
    enter a number
    5
    entered number is :5
    the logical operators start here
    the value of num1==num2 is : 0
    the value of num1!=num2 is : 1
    the value of num1<num2 is : 0
    the value of num1>num2 is : 1
    the value of num1<=num2 is : 0
    the value of num1>=num2 is : 1
    */

// LOGICAL OPERATORS

    // && -- Returns true if both are true
    // || -- Returns true if any one is true
    // !  -- Returns the opposite of the condition

    // cout << "the logical optr bit of num1!=num2 && num1>num2 is : "<<(num1!=num2 && num1>num2)<<"\n";
    // cout << "the logical optr bit of num1!=num2 && num1<num2 is : "<<(num1!=num2 && num1<num2)<<"\n";
    // cout << "the logical optr bit of (num1==num2 || num1>num2) is :"<<(num1==num2 || num1>num2)<<"\n";
    // cout << "the logical optr bit of (num1<=num2 || num1<num2) is :"<<(num1<=num2 || num1<num2)<<"\n";
    // cout << "the logical optr bit of num1>=num2 || num1>num2 is : "<<(num1>=num2 || num1>num2)<<"\n";
    // cout << "the logical optr bit of (!(num1==num2)) is : "<<(!(num1==num2))<<"\n";
    
    /* OUTPUT for Logical Operators

    enter a number
    30
    entered number is :30
    enter a number
    5
    entered number is :5

    the logical optr bit of num1!=num2 && num1>num2 is : 1
    the logical optr bit of num1!=num2 && num1<num2 is : 0
    the logical optr bit of (num1==num2 || num1>num2) is :1
    the logical optr bit of (num1<=num2 || num1<num2) is :0
    the logical optr bit of num1>=num2 || num1>num2 is : 1
    the logical optr bit of (!(num1==num2)) is : 1
    /*
    
    
    return 0;
}
*/




