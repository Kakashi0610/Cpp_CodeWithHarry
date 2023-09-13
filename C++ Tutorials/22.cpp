//  OOPS - Classes and objects -- Nesting of Member Functions


/*
#include <iostream>
#include <string>

using namespace std;

class binary
{
    // private:
    // string s;      // PRIVATE by defualt outside of the class

public:
    string s; // can be inside of the class

    void read(void)
    {
        cout << "enter a binary num : \n";
        cin >> s;
    }

    void chk_bin(void)
    {

        for (int i = 0; i < s.length(); i++)      //s.length for the length of the array
        {
            if (s.at(i) != '0' && s.at(i) != '1')    // if 0 bhi nahi nor 1...toh bahar feko
            {
                cout << "the binary is not correctly initialized\n";
                exit(0);
            }
        }
    }

    void display1(void)
    {
        cout << "the binary is "<<s<<"\n";
        // for (int i = 0; i < s.length(); i++)  //s.length for the length of the array
        // {
        //     cout <<s.at(i);
        // }
    }

    void ones_compliment(void)
    {
        // chk_bin acts as a nested called function

        //chk_bin();          //can use this here and not use num_bin.chk_bin()...result will be same      

        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')   //s.at(i) for the location of the vslue in array
            {
                s.at(i) = '1';
            }
           else
            {
                s.at(i) = '0';
            }
        }
    }

    void display2(void)
    {

        cout << "\nThe interchanged binary is : \n" <<s;
    }
};

int main(int argc, char const *argv[])
{
    binary num_bin;

// cannot use any function directly if its private  -- create func, declare value to variables, then execute

    num_bin.read();
    num_bin.chk_bin();    
    num_bin.display1();
    num_bin.ones_compliment();
    num_bin.display2();
    return 0;
}
*/


/* OUTPUT
enter a binary num : 
110001
the binary is 
110001
The interchanged binary is :
001110
*/