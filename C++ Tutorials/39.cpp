/* PROTECTED ACCESS SPECIFIER

-----------------   Public Derivation      	 Private Derivation    	  Protected Derivation

Private (mem func)   Not Inherited              Not Inherited          Not Inherited              
Protected            Protected                  Private                Protected                    
Public          	 Public	Private             Protected              Protected

*/



/*
#include <iostream>
using namespace std;

class base
{
    protected:
        int a;

    private:
        int b;

};

class derived :: protected base
{

};

int main(int argc, char const *argv[])
{
    base b1;
    derived d1;

    cout <<b1.a;   //declared protected here
    cout <<d1.a;   //declared protected here
    cout << b1.b;     //declared private here

    return 0;
}
*/


