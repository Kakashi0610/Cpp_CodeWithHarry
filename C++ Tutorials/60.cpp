//READING AND WRITING FILES in C++

/*

string = "";
ofstream = bahar jaao
<< 


string ;
ifstream = andar aao terminal ke
>>

*/



// Opening a file and WRITING in FILES in C++ 

#include <iostream>
#include <fstream>    // for working with files i/o in C++

using namespace std;

int main(int argc, char const *argv[])
{
    // ofstream is the obj of the constructor 
    ofstream out ("sample60.txt");   

    //assigning value to string for the desired text in sample60.txt
    string st = "Aniket bhai";  
    
    //calling constructor variables (desired) eg.out in this case
    out<< st;
    // will print the val in string st in the sample60.txt file

    return 0;
}
//



/* Opening a file and READING OF FILES in C++ terminal 

#include <iostream>
#include <fstream>    // for working with files i/o in C++

using namespace std;

int main(int argc, char const *argv[])
{
    string st2;
    string st3;

    //use ifstream to read/writefiles 

    ifstream var("sample60b.txt");
    // gathering val of string (single word method) in sample60.txt and put it in var
    var >> st2;
    // print the string (single word method) in the terminal
    cout << st2<< endl;

    ifstream var2("sample60b.txt");
    // gathering val of string (full string) in sample60.txt and put it in var
    getline(var2, st3);  // getline is keyword with syntax
    // print the string (full string) in the terminal
    cout << st3;

    return 0;
}
*/



/* OUTPUT

this
this is coming from a file

*/


/* practice

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    //dont run both sets simultaneously

    // ofstream var1 ("sample60c.txt");    
    // string st3 = "This is the third string";
    // var1 << st3;

    // ifstream var2 ("sample60c.txt");
    // string str4;
    // getline(var2, str4);
    // cout << str4;     //This is the third string.

    return 0;
}
*/

    