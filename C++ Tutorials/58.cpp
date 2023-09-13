// PURE VIRTUAL FUNCTION and ABSTRACT BASE CLASS

/*
Pure Virtual Functions in C++
Pure virtual function is a function that doesn’t perform any operation and the function is declared by
assigning the value 0 to it. Pure virtual functions are declared in abstract classes.


Abstract Base Class in C++
Abstract base class is a class that has at least one pure virtual function in its body. The classes which 
are inheriting the base class must need to override the virtual function of the abstract class otherwise
compiler will throw an error.

Example :  line 25 and 52

#include <iostream>
using namespace std;

// full class is Abstract base class
class base
{
    public:
        int a = 5;

        void display () = 0;    //Pure Virtual Function
};
*/



// WHOLE EXAMPLE

#include <iostream>
using namespace std;

class cwh
{
    protected:
        string title;
        float rating;

    public:

        cwh() {}

        cwh(string t, float r)
        {
            title = t;
            rating = r;
        }

        virtual void display() = 0;     // Pure Virtual Functions / do nothing functions

};

class cwhvid : public cwh
{
    int vidlength;

    public:

        cwhvid() {}

        cwhvid(string t1, float r1, float wl2): cwh(t1,r1)
        {
            vidlength = wl2;
        }

        void display()
        {
            cout << "The title of the string is " << title << endl;
            cout << "The rating of the title out of 5stars is " << rating << endl;
            cout << "The length of the video is " << (float)vidlength <<" minutes.\n\n";
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
//



/* OUTPUT
The title of the string is Django video Tutorial
The rating of the title out of 5stars is 4.9
The length of the video is 7 minutes.

The title of the text tuorial is Django text Tutorial
The rating of the text tuorial out of 5 stars is 4.39
The text content of the text tuorial is 433 words.
*/