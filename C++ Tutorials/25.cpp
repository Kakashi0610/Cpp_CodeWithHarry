//  ARRAY of OBJECTS  &  passing OBJECTS as Function arguments

/*
#include <iostream>
using namespace std;

class employee
{
private:
    int empid;
    int sal;
    // int sal = 124;      //can define sal here

public:
    // int sal1 = 124;      //can define sal1 here
    void setid(void)
    {
        sal = 124; // can define sal here
        cout << "Enter the ID of employee : \n";
        cin >> empid;
    }

    void getid(void)
    {
        cout << "The ID of employee is : " << empid << "\n";
        cout << "The Salary of employee is : " << sal << "\n";
    }

    // void setsal(void)
    // {
    //     cout << "Enter the salary of employee : \n";
    //     cin >> sal;
    // }

    // void getsal(void)
    // {
    //     cout << "The Salary of employee is : " << sal << "\n";
    // }
};

int main(int argc, char const *argv[])
{
    //  method 1   too big

    employee Facebook[5];

    Facebook[1].setid();
    Facebook[1].getid();
    Facebook[2].setsal();
    Facebook[2].getsal();
    Facebook[3].setid();
    Facebook[3].getid();
    Facebook[4].setsal();
    Facebook[4].getsal();
    Facebook[5].setsal();
    Facebook[5].getsal();

    // method 2   efficient & easy

    employee Facebook[3];

    for (int i = 0; i < 3; i++)
    {
        Facebook[i].setid();
        Facebook[i].getid();
    }

    return 0;
}
*/

/* OUTPUT

Enter the ID of employee : 
1
The ID of employee is : 1
The Salary of employee is : 124
Enter the ID of employee :
2
The ID of employee is : 2
The Salary of employee is : 124
Enter the ID of employee :
2
The ID of employee is : 2
The Salary of employee is : 124

*/

