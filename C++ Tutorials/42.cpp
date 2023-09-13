//  EXERCISE  

// Optimized version of basic calculator

/*
#include <iostream>
using namespace std;

class base1
{
    protected:

        int base1int;

    public :

        base1 () {}

        void fetch_data1int()
        {
            cout << "Enter the first integer :\n";
            cin >> base1int;
        }
};

class base2
{
    protected:
     
        int base2int;

    public :

        base2() {}

        void fetch_data2int()
        {
            cout << "Enter the second integer :\n";
            cin >> base2int;
        }

};

class derived : public base1, public base2
{
    public:

        derived() {}

        char opr;

        void show1()
        {
            cout << "Enter any operator :\n";
            cin >> opr;
            cout << "The value of base1 is : " << base1int << endl;
            cout << "The value of base2 is : " << base2int << endl;
            if (opr == '+')
            {
                cout << "The value of base1 + base2 is : " << (base1int + base2int) << endl;
            }

            else if (opr == '-')
            {
                cout << "The value of base1 - base2 is : " << (base1int - base2int) << endl;
            }

            else if (opr == '*')
            {
                cout << "The value of base1 * base2 is : " << (base1int * base2int) << endl;
            }

            else if (opr == '/')
            {
                cout << "The value of base1 / base2 is : " << (base1int / base2int) << endl;
            }

            else if (opr == '%')
            {
                cout << "The value of base1 % base2 is : " << (base1int % base2int) << endl;
            }

            else 
            {
                cout << "ERROR, please type an appropriate operator...\n";
            }
        }
};

int main(int argc, char const *argv[])
{
    char ch;
    derived der1;
    der1.fetch_data1int();
    der1.fetch_data2int();
    der1.show1();
    return 0;
}
*/



/* OUTPUT

---for if else-if statement---

Enter any operator :
*
The value of base1 is : 33
The value of base2 is : 22
The value of base1 * base2 is : 726

---for else statement---

Enter the first integer :
55
Enter the second integer :
11
Enter any operator :
erfvszd
The value of base1 is : 55
The value of base2 is : 11
ERROR, please type an appropriate operator...
*/



//  basic calculator for + - / * %  of 2 integers

/*
#include <iostream>
using namespace std;

class base1
{
    protected:

        int base1int;

    public :

        base1 () {}

        void fetch_data1int()
        {
            cout << "Enter the first integer :\n";
            cin >> base1int;
        }
};

class base2
{
    protected:
     
        int base2int;

    public :

        base2() {}

        void fetch_data2int()
        {
            cout << "Enter the second integer :\n";
            cin >> base2int;
        }

};


class derived : public base1, public base2
{
    public:

        derived() {}

        void show1()
        {
            cout << "The value of base1 is : " << base1int << endl;
            cout << "The value of base2 is : " << base2int << endl;
            cout << "The value of base1 + base2 is : " << (base1int + base2int) << endl;
        }

        void show2()
        {
            cout << "The value of base1 is : " << base1int << endl;
            cout << "The value of base2 is : " << base2int << endl;
            cout << "The value of base1 - base2 is : " << (base1int - base2int) << endl;
        }

        void show3()
        {
            cout << "The value of base1 is : " << base1int << endl;
            cout << "The value of base2 is : " << base2int << endl;
            cout << "The value of base1 * base2 is : " << (base1int * base2int) << endl;
        }

        void show4()
        {
            cout << "The value of base1 is : " << base1int << endl;
            cout << "The value of base2 is : " << base2int << endl;
            cout << "The value of integer1 / integer2 is : " << (base1int / base2int) << endl;
        }

        void show5()
        {
            cout << "The value of integer1 is : " << base1int << endl;
            cout << "The value of integer2 is : " << base2int << endl;
            cout << "The value of integer1 % integer2 is : " << (base1int % base2int) << endl;
        }
};

int main(int argc, char const *argv[])
{
    char ch;
    derived der1;

    cout << "enter an operator :\n";
    cin >> ch;

    if (ch == '+')
    {
        der1.fetch_data1int();
        der1.fetch_data2int();
        der1.show1();
    }

    else if (ch == '-')
    {
        der1.fetch_data1int();
        der1.fetch_data2int();
        der1.show2();
    }

    else if (ch == '*')
    {
        der1.fetch_data1int();
        der1.fetch_data2int();
        der1.show2();
    }

    else if (ch == '/')
    {
        der1.fetch_data1int();
        der1.fetch_data2int();
        der1.show4();
    }

    else if (ch == '%')
    {
        der1.fetch_data1int();
        der1.fetch_data2int();
        der1.show5();
    }

    else 
    {
        cout << "ERROR, please type an appropriate operator...\n";
    }

    return 0;
}
*/


/* 

---for if else-if statement---

enter an operator :
+
Enter the first integer :
55
Enter the second integer :
22
The value of base1 is : 55
The value of base2 is : 22
The value of base1 + base2 is : 77

---for else statement---

enter an operator :
gihhilhh
ERROR, please type an appropriate operator...

*/



/*  + - / * % all together of 2 integers

#include <iostream>
using namespace std;

class base1
{
    protected:

        int base1int;

    public :

        base1 () {}

        void fetch_data1int()
        {
            cout << "Enter the first integer :\n";
            cin >> base1int;
        }
};

class base2
{
    protected:
     
        int base2int;

    public :

        base2() {}

        void fetch_data2int()
        {
            cout << "Enter the second integer :\n";
            cin >> base2int;
        }

};

class derived : public base1, public base2
{
    public:

        derived() {}

        void show()
        {
            cout << "The value of base1 is : " << base1int << endl;
            cout << "The value of base2 is : " << base2int << endl;
            cout << "The value of base1, base2 and base3 is : " << (base1int + base2int)<< endl;
            cout << "The value of base1, base2 and base3 is : " << (base1int - base2int)<< endl;
            cout << "The value of base1, base2 and base3 is : " << (base1int / base2int)<< endl;
            cout << "The value of base1, base2 and base3 is : " << (base1int * base2int)<< endl;
            cout << "The value of base1, base2 and base3 is : " << (base1int % base2int)<< endl;
        }
};

int main(int argc, char const *argv[])
{
    derived der1;
    der1.fetch_data1int();
    der1.fetch_data2int();
    der1.show();

    return 0;
}
*/


/*   OUTPUT

Enter the first integer :
55
Enter the second integer :
22
The value of base1 is : 55
The value of base2 is : 22
The value of base1, base2 and base3 is : 77
The value of base1, base2 and base3 is : 33
The value of base1, base2 and base3 is : 2
The value of base1, base2 and base3 is : 1210
The value of base1, base2 and base3 is : 11

*/

