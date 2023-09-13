//  Default parameters in CLASS TEMPLATES

/*
template <class T1 = string, class T2 = string, class T3 = int>  

Here the datatype of the values are pre-defined in the template section of the class. -- line 19
*/



/* Example of default parameters in CLASS TEMPLATES 

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

template <class T1 = string, class T2 = string, class T3 = int>

class employee
{
    protected:
        
        T1 empid;
        T2 empname;
        T3 empsal;

    public:

        employee(T1 emp_id, T2 emp_name, T3 emp_sal)
        {
            empid = emp_id;
            empname = emp_name;
            empsal = emp_sal;
        }

        void display_employee()
        {
            cout << "The id of Employee is : " << empid << endl;
            cout << "The name of Employee is : " << empname << endl;
            cout << "The salary of Employee is : " << empsal <<"\n\n";

        }
};

int main(int argc, char const *argv[])
{
    employee <> employee1("f4279r2", "Manya", 900000);
    employee <> employee2("ew3ee355", "Atul", 400000);
    employee <> employee3("f4635er5", "Aniket", 300000);
    employee1.display_employee();
    employee2.display_employee();
    employee3.display_employee();

    return 0;
}
*/


/* OUTPUT
The id of Employee is : f4279r2
The name of Employee is : Manya
The salary of Employee is : 900000

The id of Employee is : ew3ee355
The name of Employee is : Atul
The salary of Employee is : 400000

The id of Employee is : f4635er5
The name of Employee is : Aniket
The salary of Employee is : 300000

*/

