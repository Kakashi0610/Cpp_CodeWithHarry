/* CLASSES AND OBJECTS  -

1. Advantage of class over structure is data hiding, security features.
2. Functions cannot be efficiently used in structures while in classes, they are easy to implement.  */


/*
#include <iostream>
using namespace std;

class Employee
{
    // to store hidden data
    private:     
        int a,b,c;

    // publicly available data   
    public :
        int d,e;

        //declaration of functions 'setData' and  'getData'

        void setData(int a1,int b1,int c1);    //private: needs to be in func to be defined

        void getData()   //printing private and public data
        {
            cout << "the value of data in a is " << a <<"\n";
            cout << "the value of data in b is " << b <<"\n";
            cout << "the value of data in c is " << c <<"\n";
            cout << "the value of data in d is " << d <<"\n";
            cout << "the value of data in e is " << e <<"\n";
        }
};

//defining functon compulsary if in private mode 

void Employee::setData(int a1, int b1,int c1)    // noo need of datatype before setdata
    {
    a = a1;      //first class then func datatype-variables
    b = b1;
    c = c1;
    }

int main(int argc, char const *argv[])
{
    Employee kakashi;
    kakashi.d = 77;
    kakashi.e = 66;

    kakashi.setData(12,23,34);     //setting the values to the datatypes-var in functions

    kakashi.getData();     //calling printing function

    return 0;
}
*/


/* OUTPUT

the value of data in a is 12
the value of data in b is 23
the value of data in c is 34
the value of data in d is 77
the value of data in e is 66
*/

/*
#include <iostream>
#include <string.h>

using namespace std;

class Animals {
    private:
        int circus_used;
        char ani_initial;
    public:
        char food[];
        char color[];

    void priv_func(int ani1, char ani2)
    {
        circus_used = ani1;
        ani_initial= ani2;
    }
    void getdata() 
    {
        cout <<"The number of animals in circus used :"<<circus_used<<"\n";
        cout <<"The animals in circus used initials :"<<ani_initial<<"\n";
        cout << "The food given to circus animals :"<<food[]<<"\n";
        cout << "The color of circus animals :"<<color[]<<"\n";

    }    
};

int main(int argc, char const *argv[])
{
    Animals wild;

    //wild.food[] = "chicken";
    //wild.color[] = "white";
    wild.priv_func(150,'T');
    wild.getdata();

    return 0;
}
*/

/* Class and objects example
   
#include <iostream>
using namespace std;

class student
{
    private:
        char fsubs_initial;
        int fees_pending;
        int contact_num;
    
    public:
        char stud_initial;
        int marks; 
        int stud_id;
        float marks_avg;

    void stud_private(char s1, int s2, int s3) 
    {
        fsubs_initial = s1;
        fees_pending = s2; 
        contact_num = s3;
    }

    void stud_info()
    {
        cout << fsubs_initial<<"\n";
        cout << fees_pending<<"\n";
        cout << contact_num<<"\n";
        cout << stud_initial<<"\n";
        cout << marks<<"\n";
        cout << stud_id<<"\n";
        cout << marks_avg<<"\n";
        
    }
};

int main(int argc, char const *argv[])
{
    student Aniket;

    Aniket.marks = 50;
    Aniket.stud_initial = 'A';
    Aniket.stud_id = 49;
    Aniket.marks_avg = 89.25;

    Aniket.stud_private('A',2000,123456789);
    Aniket.stud_info();

    return 0;
}
*/

/* OUTPUT

A
2000
123456789
A
50
49
89.25

*/


// with input name 
 
/*
#include <iostream>
#include <string>

using namespace std;

class Person 
{

    private:
        long double aadhar_num;
        long double pan_num;
        float DOB;

    public:
        char name_initial;
        int age;
        string marriage;
        string name;

    void per_info(int a1, int a2, int a3)
    {
        aadhar_num = a1;
        pan_num = a2;
        DOB = a3;
    }  
    
    void print_person()
    {
        cout <<aadhar_num<<"\n";
        cout <<pan_num<<"\n";
        cout <<DOB<<"\n";
        cout <<name_initial<<"\n";
        cout <<age<<"\n";
        cout <<marriage<<"\n";
        cout <<name<<"\n";
    }
} Aniket, Vaikya, Mummum;     //type def for class Person

int main(int argc, char const *argv[])
{
    //Person Aniket;     //for without typedef
    Aniket.age = 21;
    Aniket.name_initial = 'A';
    Aniket.marriage = "Yes";
    Aniket.name = "Aniket";
    Aniket.per_info(46545583 , 34534, 6.10);
    Aniket.print_person();

    return 0;
}
*/

/* OUTPUT
4.65456e+007
34534
6
A
21
Yes
Aniket
*/


