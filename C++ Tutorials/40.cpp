// MULTILEVEL INHERITANCE  -- DEEP DIVE


/*
#include <iostream>
using namespace std;

class student
{
private:
    int rollnumber;

public:
    student() {}
    void setrollnumber(int);
    void getrollnumber();
};

void student :: setrollnumber(int r)
{
    rollnumber = r;
}

void student :: getrollnumber()
{
    cout << "Roll number is : " << rollnumber <<"\n\n";
}

class exam : public student   // will remain protected, since mem func of base class is protected
{
protected:
    float maths;
    float physics;

public:
    exam() {}
    void setmarks(float, float);
    void getmarks();
};

void exam :: setmarks(float m1, float p1)
{
    maths = m1;
    physics = p1;
}

void exam :: getmarks()
{
    cout << "The marks in maths are : " << maths << endl;
    cout << "The marks in physics are : " << physics <<"\n\n";
}

class result : public exam
{
    float percentage;

public: 
    result () {}
    void display_percentage();
};

void result ::display_percentage()
{
    // getrollnumber();     //either this or by base class mem func
    // getmarks();
    cout << "The result is : " << (maths + physics) / 2 << "\n\n";
}

int main(int argc, char const *argv[])
{
    result aniket;
    aniket.setrollnumber(49);   
    aniket.getrollnumber();

    aniket.setmarks(88,85);
    aniket.getmarks();

    aniket.display_percentage();

    return 0;
}
*/


/* OUTPUT

Roll number is : 49

The marks in maths are : 88
The marks in physics are : 85

The result is : 86.5

*/