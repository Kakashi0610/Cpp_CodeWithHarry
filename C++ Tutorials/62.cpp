// open() and eof() Functions in FILE I/O


//.open(filename);  -- line 17, 24

//eof(object, string_name);  -- line 31    -- used to print till end of file


/*  EXAMPLE

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream aniket;
    aniket.open("sample60b.txt");    //second way of interacting with a text file using oopen() function
    aniket << "this is me, Manya\n";
    aniket << "this is also me, Aniket\n";
    aniket << "this is also me, kakashi\n";
    aniket.close();

    ifstream kakashi;
    kakashi.open("sample60b.txt");
    string str1;

    // getline(kakashi, str1);
    // cout<< str1;    //only 1 line -- this is me, Manya
    // kakashi.close();

    while (kakashi.eof() == 0)     // can use entire while loop for printing till end of the file
    {
        getline(kakashi,str1);
        cout<< str1 << endl;
    }
    kakashi.close();

    return 0;
}
*/



/* OUTPUT
this is me, Manya
this is also me, Aniket
this is also me, kakashi
*/
