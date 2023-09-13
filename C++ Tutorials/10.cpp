// FOR, WHILE and DO WHILE LOOPS  in C++

/*  FOR LOOPS in C++

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i, j;

    for (i = 0; i < 2; i++)
    {
        cout << "the value of i is " << i << "\n\n";
        for (j = 0; j < 4; j++)
        {
            cout << "the value of j is " << j << "\n";
            if (j == 3)
            {
                cout << "\n";
            }
        }

    }
    return 0;
}

/* Output

the value of i is 0

the value of j is 0
the value of j is 1
the value of j is 2
the value of j is 3

the value of i is 1

the value of j is 0
the value of j is 1
the value of j is 2
the value of j is 3

*/

// WHILE, DO-WHILE LOOPS  in C++

/*
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    a=1;

    while (a < 15)
    {
        cout << "the value of a is : " << a << "\n";
        a++;
    }

    b=4;
    do  // #2 statement
    {
        cout << "the value of b is : " << b <<"\n";
        b++;
    }
    while (b<10);   // #1 IF
     
    return 0;
}
*/

 // OUTPUT

/*
the value of a is : 1
the value of a is : 2
the value of a is : 3
the value of a is : 4
the value of a is : 5
the value of a is : 6
the value of a is : 7
the value of a is : 8
the value of a is : 9
the value of a is : 10
the value of a is : 11
the value of a is : 12
the value of a is : 13
the value of a is : 14
the value of b is : 4
the value of b is : 5
the value of b is : 6
the value of b is : 7
the value of b is : 8
the value of b is : 9

*/