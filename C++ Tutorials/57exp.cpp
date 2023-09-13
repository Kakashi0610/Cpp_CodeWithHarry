// VIRTUAL FUNCTION examples 

/*
Rules for virtual functions
They cannot be static
They are accessed by object pointers
Virtual functions can be a friend of another class
A virtual function in the base class might not be used.
If a virtual funcn is defined in a base class, there is no necessity of redefining it in the derived class */


//tip - sab mem func or constructors,whether base or derived, sabka naam same rakho for each functonality

/*
#include <iostream>
using namespace std;

class cwh
{
    protected:
        string title;
        float rating;

    public:

        cwh() {}

        cwh(string t1, float r1)
        {
            title = t1;
            rating = r1;
        }

        virtual void display() {}
};

class cwhvid : public cwh
{
    int vidlength;

    public:

        cwhvid() {}

        cwhvid(string t2, float r2, float wl2): cwh(t2,r2)
        {
            vidlength = wl2;
        }

        void display()
        {
            cout << "The title of the string is " << title << endl;
            cout << "The rating of the title out of 5stars is " << rating << endl;
            cout << "The length of the video is " << vidlength <<" minutes.\n\n";
        }
};

class cwhtext : public cwh
{
    int wordcount;

    public:

        cwhtext() {}

        cwhtext(string t2, float r2, int wc2): cwh(t2,r2)
        {
            wordcount = wc2;
        }

        void display()
        {
            cout << "The title of the text tuorial is " << title << endl;
            cout << "The rating of the text tuorial out of 5 stars is " << rating << endl;
            cout << "The text content of the text tuorial is " << wordcount <<" words.\n\n";
        }
};

int main(int argc, char const *argv[])
{
    string title;
    float rating, vidlength;
    int wordcount;

    // for code with harry video
    title = "Django video Tutorial";
    rating = 4.9;
    vidlength = 7.9;
    cwhvid video1 (title, rating, vidlength);
    //video1.displaycwh();   //normal execution

    // for code with harry text
    title = "Django text Tutorial";
    rating = 4.39;
    wordcount = 433;
    cwhtext text1 (title, rating, wordcount);
    //text1.displaycwh();    //normal execution

    cwh* cwh_ptr1[2];
    cwh_ptr1[0] = &video1;
    cwh_ptr1[1] = &text1;
    
    cwh_ptr1[0] -> display();
    cwh_ptr1[1] -> display();

    return 0;
}
*/


/* OUTPUT
The title of the string is Django video Tutorial
The rating of the title out of 5stars is 4.9
The length of the video is 7 minutes.

The title of the text tuorial is Django text Tutorial
The rating of the text tuorial out of 5 stars is 4.39
The text content of the text tuorial is 433 words.
*/




/* Another example

#include <iostream>
using namespace std;

class base1
{
    public:

        int a;

        base1() {}

        void setdata(int a1)
        {
            a = a1;
        }

        void display()
        {
            cout << "1 The val of a in base1 is " << a << endl;
        }
};

class base2
{
    

    public:
        int b;

        base2() {}

        virtual void setdata(int b1)
        {
            b = b1;
        }

        virtual void display()
        {
            cout << "2 The val of a in base2 is " << b << endl;
        }
};

class derived : public base1, public base2
{

    public:
        int d;

        derived () {}

        virtual void setdata(int d1)
        {
            d = d1;
        }

        virtual void display()
        {
            cout << "3 The val of a in base1 is " << a << endl;
            cout << "3 The val of d in derived is " << d << endl;
        }
};

int main(int argc, char const *argv[])
{
    //creating class pointers
    base1 * base1_ptr;
    base2 * base2_ptr;
    derived * derived_ptr;

    // cresting base objects
    base1 base1obj;
    base2 base2obj;
    derived derivedobj;

    base1_ptr = &derivedobj;
    base1_ptr -> setdata(11);
    
    base2_ptr = &derivedobj;
    base2_ptr -> setdata(99);
    base2_ptr -> display();

    return 0;
}
*/


/* OUTPUT

3 The val of a in base1 is 11
3 The val of d in derived is 99

*/
