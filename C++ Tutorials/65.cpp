// MULTIPLE PARAMETER TEMPLATES - when there are two or more than two parameters. 

// another example with N parameters --- line 77


/* 

template <class T0, class T1, class T2, class T3>    // for 4 parameters

template <class T>      // for N number parameters  -- mannchaha number(not specified)

single N number parameter which is not specified can be used too, to prevent confusion, n 
numbers of parameters.  -- line 82 se start

*/



/* MULTIPLE PARAMETERS

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

template <class T1, class T2>

class value
{
    public:

        T1 var1;
        T2 var2;

        value(T1 vara, T2 varb)
        {
            var1 = vara;
            var2 = varb;
        }

        void display()
        {
            cout << "the value of var1 and var2 is : "<< var1 << " and " << var2 << endl;
        }
};

int main(int argc, char const *argv[])
{
    // this syntax go acc. to the template syntax

    //object created and value declared at the same place
    value <int, int> v1(22,44);
    value <float, float> v2(11.55,33.66);
    value <string, string> v3("aniket","manya");
    value <char, char> v4('a','m');

    v1.display();
    v2.display();
    v3.display();
    v4.display();

    return 0;
}
*/


/* OUTPUT
the value of var1 and var2 is : 22 and 44
the value of var1 and var2 is : 11.55 and 33.66
the value of var1 and var2 is : aniket and manya
the value of var1 and var2 is : a and m
*/



/* another example with N parameters

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

template <class T>   

class value
{
    public:

        T var1;
        T var2;

        value(T vara, T varb)
        {
            var1 = vara;
            var2 = varb;
        }

        void display()
        {
            cout << "the value of var1 and var2 is : "<< var1 << " and " << var2 << endl;
        }
};

int main(int argc, char const *argv[])
{
    // this syntax go acc. to the template syntax

    //object created and value declared at the same place
    value <int> v1(22,44);
    value <float> v2(11.55,33.66);
    value <string> v3("aniket","manya");
    value <char> v4('a','m');

    v1.display();
    v2.display();
    v3.display();
    v4.display();

    return 0;
}
*/


/* OUTPUT
the value of var1 and var2 is : 22 and 44
the value of var1 and var2 is : 11.55 and 33.66
the value of var1 and var2 is : aniket and manya
the value of var1 and var2 is : a and m
*/