// INHERITANCE SYNTAX IN C++

/*
Note:

Default visibility mode is private.
Public Visibility Mode: Public members of the base class becomes Public members of the derived class.
Private Visibility Mode: Public members of the base class become private members of the derived class.
Private members are never inherited.
*/

/* Derived class stntax

class {{derived_class_name}} : {{visibility_mode}} {{derived_class_name}}
{ 
    class members/methods/etc
}
*/



// SINGLE INHERITANCE example

/*
#include <iostream>
using namespace std;

//   BASE CLASS

class employee
{
    int id;
    int salary;

    public:
        string dob;
        int joining_year;

        //default constructor
        employee() {}          // so that error throw na kare... expects 1 arg, 0 provided

        employee(int empid, int empsal)
        {
            id = empid;
            salary = empsal;
        }

        display_empinfo()
        {
            cout << "\nthe id of employee is : "<< id << "\n";
            cout << "the salary of employee is : "<< salary << "\n";
        }
};

//  DERIVED CLASS

class programmer : public employee
{
    string marriage;

    public:
        string name;
        string state;
        int joining_year;   // for inherited mem func calling, mention public members directly

    programmer(string marriage1)
    {
        marriage = marriage1;
    }

    display_name()
    {
       cout << "the marrital status of employee is : "<< marriage << "\n";
    }
};

int main(int argc, char const *argv[])
{
    cout<< "\n        BASE CLASS";
    employee aniket(55, 3400);
    aniket.display_empinfo();
    aniket.dob = "6/10/2000";
    aniket.joining_year = 2020;
    cout<< "the DOB of employee is : "<< aniket.dob << "\n";
    cout<< "the joining year of employee is : "<< aniket.joining_year << "\n\n";


    cout<< "        BASE CLASS";
    employee sakura(56, 3300);
    sakura.display_empinfo();
    sakura.dob = "10/12/2000";
    sakura.joining_year = 2020;
    cout<< "the DOB of employee is : "<< sakura.dob << "\n";
    cout<< "the joining year of employee is : "<< sakura.joining_year << "\n\n";


    cout<< "        DERIVED CLASS\n";
    programmer p1("yes");
    p1.name = "Manya";
    p1.state = "Maharashtra";
    cout<< "the name of employee is : "<< p1.name << "\n";
    cout<< "the state of employee is : "<< p1.state << "\n";
    p1.display_name();

    //using single inheritance
    p1.joining_year = 1990;
    cout << "the joining year of employee is : "<< p1.joining_year<< "\n";

    return 0;
}
*/


/*  OUTPUT

        BASE CLASS
the id of employee is : 55
the salary of employee is : 3400
the DOB of employee is : 6/10/2000
the joining year of employee is : 2020

        BASE CLASS
the id of employee is : 56
the salary of employee is : 3300
the DOB of employee is : 10/12/2000
the joining year of employee is : 2020

        DERIVED CLASS
the name of employee is : Manya
the state of employee is : Maharashtra
the marrital status of employee is : yes
the joining year of employee is : 1990

*/
