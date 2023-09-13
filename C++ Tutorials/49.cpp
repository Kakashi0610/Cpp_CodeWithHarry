// INITIALIZATION LIST in CONSTRUCTORS


/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/


/*
#include <iostream>
using namespace std;

class test 
{
    private:
        int marks1;        
        int marks2;  

    public:

        test(int m1, int m2) : marks1(m1), marks2(m2)    //easy initialization for constructor members
        {
            //marks1 = m1;  // old technique
            //marks2 = m2;  // old technique

            cout<< "constructor executed"<< endl;
            cout << "The val of marks1 is "<< marks1 << endl;
            cout << "The val of marks2 is "<< marks2 << endl;
        }  
};

int main(int argc, char const *argv[])
{
    
    test t1(33, 55);
    return 0;
}
*/


/* OUTPUT
constructor executed
The val of marks1 is 33
The val of marks2 is 55
*/



/*  Another example

#include <iostream>
using namespace std;

class test 
{
    private:
        int marks1;        
        int marks2;  
        int marks3;  

    public:

        //easy initialization for constructor members
        test(int m1, int m2) : marks1(m1), marks2(m2), marks3(m1 + m2) //or we can use marks3(marks1 + marks2)
        {
            cout<< "constructor executed"<< endl;
            cout << "The val of marks1 is "<< marks1 << endl;
            cout << "The val of marks2 is "<< marks2 << endl;
            cout << "The val of marks3 is "<< marks3 << endl;
        }  
};

int main(int argc, char const *argv[])
{
    test t1(33, 55);
    return 0;
}
*/


/* OUTPUT
constructor executed
The val of marks1 is 33
The val of marks2 is 55
The val of marks3 is 88
*/

