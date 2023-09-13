// COPY CONATRUCTORS

/* 

// SYNTAX

class_name(constructor_name &obj)
{
    var = obj.var;     // the variable from private
}



// SYNTAX example :

numberrrr(numberrrr &obj)    
{
    cout << "copy constructor called\n";
    a = obj.a;
    b = obj.b;
    c = obj.c;
}

// in main function

numberrrr n4(n1);
n4.num_displayn4();



// it can also be invoked directly without copy cons. by :

class_name new_obj = existing_obj;
new_obj.disaplay();

*/



// Example COPY CONSTRUCTORS implementation ways

/*
#include <iostream>
using namespace std;

class numberrrr
{
private:
    int a, b, c;

public:
    numberrrr() {}

    numberrrr(int num1,int num2, int num3)
    {
        a = num1;
        b = num2;
        c = num3;
    }

    //using copy constructor  -  use to assign same value to objects in different constructor

    // when no copy constructor is found, compiler creates its own copy constructor, even if we comment it out
    //the value will be print in all members in objects created by class. 

    // numberrrr(numberrrr &obj)    
    // {
    //     cout << "copy constructor called\n";
    //     a = obj.a;
    //     b = obj.b;
    //     c = obj.c;
    // }

    void num_displayn1()
    {
        cout << "The value of a in n1 is : " << a << endl;
        cout << "The value of b in n1 is : " << b << endl;
        cout << "The value of c in n1 is : " << c <<"\n\n";
    }

    void num_displayn2()
    {
        cout << "The value of a in n2 is : " << a << endl;
        cout << "The value of b in n2 is : " << b << endl;
        cout << "The value of c in n2 is : " << c <<"\n\n";
    }

    void num_displayn3()
    {
        cout << "The value of a in n3 is : " << a << endl;
        cout << "The value of b in n3 is : " << b << endl;
        cout << "The value of c in n3 is : " << c <<"\n\n";
    }

    void num_displayn4()
    {
        cout << "The value of a in n4 is : " << a << endl;
        cout << "The value of b in n4 is : " << b << endl;
        cout << "The value of c in n4 is : " << c <<"\n\n";
    }

    void num_displayn5()
    {
        cout << "The value of a in n5 is : " << a << endl;
        cout << "The value of b in n5 is : " << b << endl;
        cout << "The value of c in n5 is : " << c <<"\n\n";
    }

    void num_displayn6()
    {
        cout << "The value of a in n6 is : " << a << endl;
        cout << "The value of b in n6 is : " << b << endl;
        cout << "The value of c in n6 is : " << c <<"\n\n";
    }

};

int main(int argc, char const *argv[])
{
    numberrrr n1(33,55,77);
    n1.num_displayn1();

    numberrrr n2(13,85,57);
    n2.num_displayn2();

    numberrrr n3(65,54,79);
    n3.num_displayn3();  

    numberrrr n4(n1);
    n4.num_displayn4();

    numberrrr n5(n2);
    n5.num_displayn5();

    numberrrr n6 = n3;
    n6.num_displayn6();


    return 0;
}
*/


/* OUTPUT 

The value of a in n1 is : 33
The value of b in n1 is : 55
The value of c in n1 is : 77

The value of a in n2 is : 13
The value of b in n2 is : 85
The value of c in n2 is : 57

The value of a in n3 is : 65
The value of b in n3 is : 54
The value of c in n3 is : 79

The value of a in n4 is : 33
The value of b in n4 is : 55
The value of c in n4 is : 77

The value of a in n5 is : 13
The value of b in n5 is : 85
The value of c in n5 is : 57

The value of a in n6 is : 65
The value of b in n6 is : 54
The value of c in n6 is : 79

*/



/* using val in private as default

#include <iostream>
using namespace std;

class numberrrr
{
private:
    int a = 7;
    int b = 10;
    int c = 11;

public:
    numberrrr() {}

    numberrrr(int num1,int num2, int num3)
    {
        a = num1;
        b = num2;
        c = num3;
    }

    void num_display()
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
        cout << "The value of c is : " << c <<"\n\n";
    }
};

int main(int argc, char const *argv[])
{
    numberrrr n1, n2, n3(57, 58, 59);

    n1.num_display();  
    n2.num_display();  
    n3.num_display(); 

    return 0;
}
*/


/*
The value of a is : 7
The value of b is : 10
The value of c is : 11

The value of a is : 7
The value of b is : 10
The value of c is : 11

The value of a is : 57
The value of b is : 58
The value of c is : 59
*/
