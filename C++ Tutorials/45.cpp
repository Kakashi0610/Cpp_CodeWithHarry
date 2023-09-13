// VIRTUAL BASE CLASS in C++

/* Virtual base class is a base class to two derived classes, in which the user doesnt allow the collection,
or allocation or doesnt want data redudancy storing same member functions inherited by the base class.

To resolve ambiguity, we use Virtual Base class. */


/*
#include <iostream>
using namespace std;

class student
{
    protected:
        int rollno;

    public:
        void set_rollno(int rn)
        {
            rollno = rn;
        }

        void print_rollno()
        {
            cout << "Rollno of the student is : " << rollno << endl;
        }
};

class test : virtual public student
{
    protected:
        float test_marks1;
        float test_marks2;

    public:
        void set_testmarks(float tm1, float tm2)
        {
            test_marks1 = tm1;
            test_marks2 = tm2;
        }

        void print_testmarks()
        {
            cout << "Test marks of subject1 of the student is : " << test_marks1 << endl;
            cout << "Test marks of subject2 of the student is : " << test_marks2 << endl;
        }
};

class sports : virtual public student
{
    protected:
        float score;

    public:
        void set_score(float scr)
        {
            score = scr;
        }

        void print_score()
        {
            cout << "Score of the student is : " << score << endl;
        }
};

class result : public test, public sports
{
    protected:

    float total;

    public :

        void print_total()
        {
            cout << "The total marks you got are : "<< test_marks1 + test_marks2 + score << endl;
        }

};

int main(int argc, char const *argv[])
{
    result aniket;

    aniket.set_rollno(49);
    aniket.print_rollno();

    aniket.set_testmarks(88,79);
    aniket.print_testmarks();

    aniket.set_score(85.6);
    aniket.print_score();

    aniket.print_total();

    return 0;
}
*/



/* OUTPUT

Rollno of the student is : 49
Test marks of subject1 of the student is : 88
Test marks of subject2 of the student is : 79
Score of the student is : 85.6
The total marks you got are : 252.6

*/