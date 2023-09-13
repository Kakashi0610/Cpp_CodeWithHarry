// READ and WRITE simultaneously in one program


/*
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    // WRITING IN TERMINAL

    // connecting our program to text file using ofstream keyword
    ofstream hout ("sample60a.txt");

    //default val in sample60a.txt
    string str1 = "hiii ";
    string str2 = "";

    //entering name in terminal and displaying
    cout << "enter your name : ";
    cin >> str2;
    cout << "\nyour name will be entered in sample60a.txt";

    //printing in text file sample60a.txt
    hout << str1 + "My name is " + str2;   // hout can be replaced with any variable

    // closes the path from program to file
    hout.close();


    // READING IN TERMINAL
    string str3;
    ifstream hin("sample60a.txt");  
    
    // for all words output
    getline(hin , str3);

    // printing in terminal
    cout <<"\n" + str3;

    // closes the path from file to program
    hin.close();

    return 0;
}
*/



/* OUTPUT

enter your name : kakashi

your name will be entered in sample60a.txt
hiii My name is kakashi

*/



// timepass

/*
#include <iostream>
#include <fstream>

using namespace std;

int mulnumber(int n, int i)
{
    return n*i;
}

int main(int argc, char const *argv[])
{
    // dont run both testcases simultaneously

    // ofstream aniket ("sample60a.txt");
    // string str1 = "ye chnaged string hai";
    // aniket << str1;

    // ifstream aniket ("sample60b.txt");
    // string str2;
    // getline(aniket, str2);
    // cout << str2;



    // java tut 112 question 5 : print multiplication table in file

    int num1;
    cout << "Enter a number : \n";
    cin >> num1;

    int val1,val2,val3,val4,val5,val6,val7,val8,val9,val10;

    cout << num1 << " * " << 1 << " = " << mulnumber(num1,1)<< endl;
    cout << num1 << " * " << 2 << " = " << mulnumber(num1,2) << endl;
    cout << num1 << " * " << 3 << " = " << mulnumber(num1,3) << endl;
    cout << num1 << " * " << 4 << " = " << mulnumber(num1,4) << endl;
    cout << num1 << " * " << 5 << " = " << mulnumber(num1,5) << endl;
    cout << num1 << " * " << 6 << " = " << mulnumber(num1,6) << endl;
    cout << num1 << " * " << 7 << " = " << mulnumber(num1,7) << endl;
    cout << num1 << " * " << 8 << " = " << mulnumber(num1,8) << endl;
    cout << num1 << " * " << 9 << " = " << mulnumber(num1,9) << endl;
    cout << num1 << " * " << 10 << " = " << mulnumber(num1,10) << endl;

    val1 = mulnumber(num1,1);
    val2 = mulnumber(num1,2);
    val3 = mulnumber(num1,3);
    val4 = mulnumber(num1,4);
    val5 = mulnumber(num1,5);
    val6 = mulnumber(num1,6);
    val7 = mulnumber(num1,7);
    val8 = mulnumber(num1,8);
    val9 = mulnumber(num1,9);
    val10 = mulnumber(num1,10);

    ofstream aniket ("sample60a.txt");
    string str1 = "This is the printed multiplication table";
    aniket << str1 << endl;
    aniket << num1 << " * " << 1 << " = " <<val1 << endl;
    aniket << num1 << " * " << 2 << " = " <<val2 << endl;
    aniket << num1 << " * " << 3 << " = " <<val3 << endl;
    aniket << num1 << " * " << 4 << " = " <<val4 << endl;
    aniket << num1 << " * " << 5 << " = " <<val5 << endl;
    aniket << num1 << " * " << 6 << " = " <<val6 << endl;
    aniket << num1 << " * " << 7 << " = " <<val7 << endl;
    aniket << num1 << " * " << 8 << " = " <<val8 << endl;
    aniket << num1 << " * " << 9 << " = " <<val9 << endl;
    aniket << num1 << " * " << 10 << " = " <<val10 << endl;

    return 0;
}
*/



/* OUTPUT in terminal and file sample60a.txt

// file wala output
This is the printed multiplication table
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70

// terminal wala output

Enter a number : 
7
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70
*/