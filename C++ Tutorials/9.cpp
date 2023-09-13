// IF - ELSEIF - NESTED IF - ELSE statements   and   SWITCH CASE statements
/*
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 15;
    int b = 17;
    int c = 19;
    int i, x;

    cout << "tell me the age : \n";
    cin >> x;

    if (a == x)
    {
        cout << "the value1 is correct.\n";
        if ( x > 10)
        {
            printf("the value is greater than 10.\n");
        }
    }
    else if (b == x)  //checks other condtions value
    {
        cout << "the value2 is correct.\n";
        if ( x > 15)
        {
            printf("the value is greater than 15.\n");
        }
    }

    else if (c == x)  //checks other condtions value
    {
        cout << "the value3 is correct.\n";
        if ( x > 17)
        {
            printf("the value is greater than 17.\n");
        }
    }

    else
    {
        printf("the value is wrong.\n");  // yes printf will work as well
    }

    for (i = 0; i < a; i++)
    {
        cout << "the value of a incrementing is : " << i << "\n";
    }

    return 0;
}
*/

/* OUTPUT

tell me the age :
17
the value2 is correct.
the value is greater than 15.
the value of a incrementing is : 0
the value of a incrementing is : 1
the value of a incrementing is : 2
.
. till 14
the value of a incrementing is : 14
*/

// SWITCH CASE statements
/*
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age;

    cout << "Enter your age : \n";
    cin >> age;

    switch (age)
    {
    case 15:
        cout << "your age is 15, you are underage.\n";
        break;

    case 18:
        cout << "your age is 18, you are barely eligible.\n";
        break;

    case 20:
        cout << "your age is 20, you are eligible.\n";
        break;
    
    default:
        cout << "there are no more conditions.\n"; 
        break;
    }

    return 0;
}
*/

/* OUTPUT
Enter your age : 
20
your age is 20, you are eligible.
*/