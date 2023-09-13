/*
TEMPLATES in C++ - A template is a saver of multiple class creation, by sharing various datatypes during the 
main function, and not in the class.
*/


//  SELF EXAMPLE

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

template <class T1, class T2>

class value
{
    protected:
        T1 var1;
        T2 var2;

    public:

        setdata(T1 vara, T2 varb)
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
    value <int,int> v1;
    value <float,float> v2;
    value <string,string> v3;
    value <char,char> v4;

    v1.setdata(22,44);
    v2.setdata(11.55,33.66);
    v3.setdata("aniket","manya");
    v4.setdata('a','m');

    v1.display();
    v2.display();
    v3.display();
    v4.display();
    "\n";


    //We can set multiple datatypes in one template datatype section according to the need
    // value <int,float,string,char> v1;
    // value <float,float,int,string> v2;
    // value <string,char,int,float> v3;
    // value <char,string,char,int> v4;

    // v1.setdata(22,44.44,"aniket",'m');
    // v2.setdata(11.55,33.66,44,"anu");
    // v3.setdata("aniket",'z',77,33.88);
    // v4.setdata('a',"aniket",'q',99);

    // v1.display();
    // v2.display();
    // v3.display();
    // v4.display();

    return 0;
}



/* OUTPUT
the value of var1 and var2 is : 22 and 44
the value of var1 and var2 is : 11.55 and 33.66
the value of var1 and var2 is : aniket and manya
the value of var1 and var2 is : a and m
*/



// practice for templates

/*
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

template <class T>

class Value
{
    protected:
        T a;

    public:

        Value(){}

        Value(T x) 
        {
            a = x;
        }

        void print_Value()
        {
            cout<<"The value of a is "<<(a)<<endl;
        }
};

int main()
{
    Value <float> obj1;
    Value <int> obj2;
    Value <long> obj3;

    obj1 = 3.1;
    obj2 = 2.1;
    obj3 = 444444;

    obj1.print_Value();
    obj2.print_Value();
    obj3.print_Value();
}
*/


/* OUTPUT
The value of a is 3.1
The value of a is 2
The value of a is 444444
*/



/*  ANOTHER EXAMPLE

#include <iostream>
using namespace std;

template <typename T>

T myMax(T x, T y)
{
    return (x > y) ? x : y;
}
int main()
{
    cout << "the bigger value is : " << myMax<int>(3, 7) << endl; 
    cout << "the bigger value is : " << myMax<double>(3.0, 7.0)<< endl;     
    cout << "the bigger value is : " << myMax<char>('a', 'e')<< endl;                       
    return 0;
}
*/

/* OUTPUT
the bigger value is : 7
the bigger value is : 7
the bigger value is : e
*/



/*  TOUGH EXAMPLE

#include <iostream>
using namespace std;

class vector
{
public:
    int *arr;
    int size;

    vector(int m)
    {
        size = m;
        arr = new int[size];
    }

    int dotProduct(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector v1(3); // vector 1
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    vector v2(3); // vector 2
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;

    int a = v1.dotProduct(v2);
    cout << a << endl;    //5
    return 0;
}
*/