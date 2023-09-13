/*
STATIC FUNCTION for STATIC MEMBER by STATIC VARIABLE 
NO USE -- functions without use of  STATIC FUNCTION for STATIC MEMBER by STATIC VARIABLE   

only runs static functions  EXAMPLE
 
static void getcount(void)  
        {
            cout<<id;   //will trow an error message here
            cout << "the val of count is : "<<count<<"\n";
        } 
*/



/*
#include <iostream>
using namespace std;

class employee
{
    private:
        int empid;

        //value cant be set here for static variable

        static int count;    //in class for incrementing without creating function

    public:

        void setdata(void)
        {
            cout <<"enter the emp id \n";
            cin >> empid;
            count++;
        }    

        void getdata(void)
        {
            cout << "the employee id is : "<<empid <<" and this is employee number "<<count<<"\n";
        }

};


// noo need of datatype  - default val of count is 0 in static

//for incrementing the value of count, it can be done here, but returns error if tried in class for example,

//int employee :: count= 100;   //now default val of count is 100 in static


int employee :: count;    //for number of counts of employee

int main(int argc, char const *argv[])
{
    employee manya, aniket, kakashi;   //shares the count variable if count is static var
    
    manya.setdata();
    manya.getdata();

    kakashi.setdata();
    kakashi.getdata();

    aniket.setdata();
    aniket.getdata();  

    return 0;
}
*/


/* OUTPUT
enter the emp id 
1       
the employee id is : 1 and this is employee number 1
enter the emp id
345
the employee id is : 345 and this is employee number 2
enter the emp id
567
the employee id is : 567 and this is employee number 3
*/



/*
#include <iostream>
using namespace std;

class employee
{
    private:
        int empid;

        //value cant be set here for static variable

        static int count;    //in class for incrementing without creating function

    public:

        void setdata(void)
        {
            cout <<"enter the emp id \n";
            cin >> empid;
            count++;
        }    

        void getdata(void)
        {
            cout << "the employee id is : "<<empid <<" and this is employee number "<<count<<"\n";
        }

        void getcount(void)  
        {
            cout << "the val of count is : "<<count<<"\n";
        }

};

// noo need of datatype  - default val of count is 0 in static

//for incrementing the value of count, it can be done here, but returns error if tried in class for example,

int employee :: count= 100;   //now default val of count is 100 in static //



int employee :: count;    //for number of counts of employee

int main(int argc, char const *argv[])
{
    employee manya, aniket, kakashi;   //shares the count variable if count is static var
    
    manya.setdata();
    manya.getdata();
    //employee::getcount();    //can run static func without object name
    manya.getcount();

    kakashi.setdata();
    kakashi.getdata();
    //employee::getcount();    //can run static func without object name
    kakashi.getcount();

    aniket.setdata();
    aniket.getdata();
    //employee::getcount();   //can run static func without object name
    aniket.getcount();

    return 0;
}
*/

/* OUTPUT

enter the emp id 
1
the employee id is : 1 and this is employee number 1
the val of count is : 1
enter the emp id
23
the employee id is : 23 and this is employee number 2
the val of count is : 2
enter the emp id
45
the employee id is : 45 and this is employee number 3
the val of count is : 3

*/