// STRUCTURES, UNIONS and ENUMS

/*
#include <iostream>
#include <string.h>
using namespace std;

struct employee    //no need to put 'typedef', new feature that directly changes structure name
{
    int empid;
    float empsal;
    char empchar;
    char empname[30];
} emp1, emp2,emp3;

 int main(int argc, char const *argv[])
{
    emp1.empid = 123;
    emp2.empid = 543;
    emp3.empid = 675;

    emp1.empsal = 33333.33;
    emp2.empsal = 44444.44;
    emp3.empsal = 55555.55;

    emp1.empchar = 'A';
    emp2.empchar = 'B';
    emp3.empchar = 'C';

    strcpy(emp1.empname, "kakashi");
    strcpy(emp2.empname, "rin");
    strcpy(emp3.empname, "obito");

    cout << "printing employee id.\n";
    cout << "the employee1 id is : "<<emp1.empid <<endl;       
    cout << "the employee2 id is : "<<emp2.empid <<endl;
    cout << "the employee3 id is : "<<emp3.empid <<"\n\n";

    cout << "printing employee sal.\n";
    cout << "the employee1 sal is : "<<emp1.empsal <<endl;
    cout << "the employee2 sal is : "<<emp2.empsal <<endl;
    cout << "the employee3 sal is : "<<emp3.empsal <<"\n\n";

    cout << "printing employee char.\n";
    cout << "the employee1 char is : "<<emp1.empchar <<endl;
    cout << "the employee2 char is : "<<emp2.empchar <<endl;
    cout << "the employee3 char is : "<<emp3.empchar <<"\n\n";

    cout << "printing employee name.\n";
    cout << "the employee1 name is : "<<emp1.empname <<endl;
    cout << "the employee2 name is : "<<emp2.empname <<endl;
    cout << "the employee3 name is : "<<emp3.empname <<"\n\n";

    return 0;
}
*/

/* OUTPUT

the employee1 id is : 123
the employee2 id is : 543
the employee3 id is : 675

printing employee sal.
the employee1 sal is : 33333.3
the employee2 sal is : 44444.4
the employee3 sal is : 55555.6

printing employee char.
the employee1 char is : A
the employee2 char is : B
the employee3 char is : C

printing employee name.
the employee1 name is : kakashi
the employee2 name is : rin
the employee3 name is : obito
*/

// UNIONS
/*
#include <iostream>
#include <string.h>
using namespace std;

union employee 
{
    int empid;
    float empsal;
    char empchar;
    char empname[30];
} emp1, emp2,emp3;

int main(int argc, char const *argv[])
{
    emp1.empid = 22;
    emp1.empsal = 22222.44;
    emp1.empchar = 'A';

    cout << emp1.empid << "\n";  //garbage value
    cout << emp1.empsal << "\n";  //garbage value
    cout << emp1.empchar << "\n";  //only returns the value of last cout function

    return 0;
}
*/

/* OUTPUT
1185782849
22222.1
A
*/

// ENUMS  -- returns values as integers

/*
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    enum anime {dbz, naruto, demonslayer, fireforce, AOT};   //returns values as integers

    anime a1 = dbz;
    anime a2 = naruto;
    anime a3 = demonslayer;
    anime a4 = fireforce;
    anime a5 = AOT;

    cout << a1<<endl;   //0
    cout << a2<<endl;   //1
    cout << a3<<endl;   //2
    cout << a4<<endl;   //3
    cout << a5<<endl;   //4

    return 0;
}
*/

/* OUTPUT
0
1
2
3
4
*/


