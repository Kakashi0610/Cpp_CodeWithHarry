// stars pattern

/*
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "enter the number of stars pyramid you want to print" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "\n";
        for (int j = 0; j < num - i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }
    }
    return 0;
}
*/

// OUTPUT

/*
enter the number of stars pyramid you want to print
7

       *
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * *

*/

/*
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "enter the number of stars pyramid you want to print" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "\n";
        // for (int j = 0; j < num - i; j++)
        // {
        //     cout<<" ";
        // }
        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }
    }
    return 0;
}
*/

// OUTPUT

/*
enter the number of stars pyramid you want to print
5

*
* *
* * *
* * * *
* * * * *

*/

/*
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "enter the number of stars pyramid you want to print" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "\n";
        // for (int j = 0; j < num - i; j++)
        // {
        //     cout<<" ";
        // }
        for (int k = 0; k <= i; k++)
        {
            cout << k;
        }
    }
    return 0;
}
*/

/* OUTPUT

enter the number of stars pyramid you want to print
5

0
01
012
0123
01234

*/

