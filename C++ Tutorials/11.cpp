//  BREAK AND CONTINUE statements
/*

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 7; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << "the value of i is : " << i << endl;  // should always be outside IF an within FOR
    }

    return 0;
}
*/

/*  OUTPUT 
the value of i is : 0
the value of i is : 1
the value of i is : 2
the value of i is : 3
the value of i is : 5
the value of i is : 6
*/