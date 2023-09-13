// FRIEND FUNCTIONS IN C++



// SYNTAX
//friend complex sumcomplex(complex o1, complex o2);      //declaring function in class 


/*   outside class

class_name func_name (class_name var_name1, class_name var_name2 )
{
    class_name var_name3;     //if more than one var to declare, easy to declare

    var_name3.fuction_to_add (o1.a + o2.a, o1.b + o2.b);
    return o3;
}

*/



/*  Example for FRIEND FUNCTION

#include <iostream>
using namespace std;

class complex
{
    private:
        int a, b;

    public: 

        void setnum(int n1, int n2)
        {
            a = n1; 
            b = n2;
        }

        friend complex sumcomp(complex o1, complex o2);

        void printnum()
        {
            cout << "Your number are " << a << " + " << b << "i\n";
        }

        void printsumcomp()
        {
            cout <<"Your number is "<<a<<" + "<<b<<"i"<<endl;"i\n";
        }

};

complex sumcomp (complex o1, complex o2)
{
    complex o3;
    o3.setnum(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main(int argc, char const *argv[])
{
    complex c1,c2,sum;

    c1.setnum(1,4);
    c1.printnum();
    c2.setnum(5,8);    
    c2.printnum();

    sum = sumcomp(c1, c2);
    sum.printsumcomp();

    return 0;
}
*/

/* OUTPUT

Your number are 1 + 4i
Your number are 5 + 8i
Your number is 6 + 12i
*/




/*  example

#include <iostream>
using namespace std;

class Distance
{
    private:
        int metres;

    public:
        Distance()      //constructor
        {
            metres = 0;
        }

        void displaydata()
        {
        cout << "metres distance is  : " << metres <<"\n";     //metres can be accessed since it is used within class
        }

        friend void addvalue(Distance &d);   //&d is the ptr it constructor Distance

};

void addvalue(Distance &d)
{
    d.metres = d.metres + 5;
}

int main(int argc, char const *argv[])
{
    Distance d1;
    d1.displaydata();
    addvalue(d1);
    d1.displaydata();

    return 0;
}
*/

/* OUTPUT

metres distance is  : 0
metres distance is  : 5
*/



/*  same practice

#include <iostream>
using namespace std;

class complex 
{
    private:
        int a;
        int b;

    public :

        void setnumber(int num1, int num2)
        {
            a = num1;
            b = num2;
        }

        void displaynumber(void)
        {
            cout<< "the value of combination is "<< a <<" + "<< b << "i\n";
        }

        friend complex sumcomplex(complex o1, complex o2);

};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a) + (o2.a),(o1.b) + (o2.b));   //val of a and b can be changed
    return o3;
}

int main(int argc, char const *argv[])
{
    complex c1,c2,c3;

    c1.setnumber(1,4);
    c1.displaynumber();
        
    c2.setnumber(2,5);
    c2.displaynumber();

    cout << "-----------------------------------\n";

    //sumcomplex is not a function within class so c3 = ...  &  c3.
    c3 = sumcomplex(c1,c2);
    c3.displaynumber();

    return 0;
}
*/



/*  OUTPUT

the value of combination is 1 + 4i
the value of combination is 2 + 5i
-----------------------------------
the value of combination is 3 + 9i

*/



/*  another practice

#include <iostream>
using namespace std;

class complex 
{
    private:
        int a;
        int b;

    public :

        void setnumber(int num1, int num2)
        {
            a = num1;
            b = num2;
        }

        void displaynumber(void)
        {
            cout<< "the value of combination is "<< a*3 <<" + "<< b*4 << "i\n";   //val of a and b can be changed
        }

        friend complex sumcomplex(complex o1, complex o2);
  
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber(((o1.a)*3 + (o2.a)*4),((o1.b)*3 + (o2.b)*4));   //val of a and b can be changed
    return o3;
}

int main(int argc, char const *argv[])
{
    complex c1,c2,c3;

    c1.setnumber(1,4);
    c1.displaynumber();
        
    c2.setnumber(2,5);
    c2.displaynumber();

    cout << "-----------------------------------\n";

    //sumcomplex is not a function within class so c3 = ...  &  c3.
    c3 = sumcomplex(c1,c2);
    c3.displaynumber();

    return 0;
}
*/


/* OUTPUT 

the value of combination is 3 + 16i
the value of combination is 6 + 20i
-----------------------------------
the value of combination is 33 + 128i

*/


/*timepass

#include <iostream>
using namespace std;

class complex 
{
    private:
        int a;
        int b;

    public :

        int setnumber(int num1, int num2)
        {
            a = num1;
            b = num2;
        }

        void displaynumber(void)
        {
            cout<< "the value of combination is "<< a*3 <<" + "<< b*4 << "i\n";   //val of a and b can be changed
        }

        friend complex sumcomplex(complex , complex );
  
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a)+ (o2.a),(o1.b) + (o2.b));   //val of a and b can be changed
    return o3;
}

int main(int argc, char const *argv[])
{
    complex c1,c2,c3;

    c1.setnumber(1,4);
    c1.displaynumber();
        
    c2.setnumber(2,5);
    c2.displaynumber();

    cout << "-----------------------------------\n";

    //sumcomplex is not a function within class so c3 = ...  &  c3.
    c3 = sumcomplex(c1,c2);
    c3.displaynumber();

    return 0;
}
*/


/*  OUTPUT

the value of combination is 3 + 16i
the value of combination is 6 + 20i
-----------------------------------
the value of combination is 9 + 36i
*/