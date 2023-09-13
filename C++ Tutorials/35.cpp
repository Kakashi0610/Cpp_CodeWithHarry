// DESTRUCTORS  -- to free dynamically allocated and unused memory by constructor
// Destructor never takes an argument nor does it return any value


/*
#include <iostream>
using namespace std;

int count = 0;    //global variable - since if main func runs, it will be 0 again.S

class num
{
    public:

        num()
        {
            count++;
            cout << "This is the time constructor is called for obj number " <<count<<endl;   #3 #6 #7
        }

        ~num()    // ~ is used to declare/invoke DESTRUCTORS
        {
            cout << "This is the time destructor is called for obj number " <<count<< endl;  #9 #10 #12
            count--;
        }
};

int main(int argc, char const *argv[])
{
    cout << "We're inside main function" << endl;  #1
    cout << "creating first object n1 " << endl;   #2

    num n1;
    {
        cout << "Entering this block" << endl;  #4
        cout << "Create two more objects" <<endl;  #5
        num n2, n3;
        cout << "Entering this block" << endl;  #8
    }
    cout << "Entering main again" << endl; #11

    return 0;
}
*/



/*  OUTPUT

We're inside main function
creating first object n1
This is the time constructor is called for obj number 1
Entering this block
Create two more objects
This is the time constructor is called for obj number 2
This is the time constructor is called for obj number 3
Entering this block
This is the time destructor is called for obj number 3
This is the time destructor is called for obj number 2
Entering main again
This is the time destructor is called for obj number 1

*/

