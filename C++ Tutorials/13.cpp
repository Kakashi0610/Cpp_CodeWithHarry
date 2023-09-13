// ARRAYS and ARRAY POINTERS

/* ARRAYS

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j;
    int marks[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int mathmarks[20];

    cout <<"to print array1 of marks\n";
    cout << marks[0]<<"\n";
    cout << marks[1]<<"\n";
    cout << marks[2]<<"\n";
    cout << marks[3]<<"\n";
    cout << marks[4]<<"\n";
    cout << marks[5]<<"\n\n";

    cout <<"\nto define the value in array2 mathmarks\n";

    mathmarks[0] = 31;
    cout<< mathmarks[0]<< "\n";
    mathmarks[1] = 33;
    cout<< mathmarks[1]<< "\n";
    mathmarks[2] = 35;
    cout<< mathmarks[2]<< "\n";
    mathmarks[3] = 37;
    cout<< mathmarks[3]<< "\n";
    mathmarks[4] = 39;
    cout<< mathmarks[4]<< "\n\n";

    cout <<"\nto change the  value in marks array1\n";
    marks[0] = 22;
    marks[1] = 33;
    marks[2] = 44;
    marks[3] = 55;
    marks[4] = 66;
    marks[5] = 77;

    cout << marks[0]<<"\n";
    cout << marks[1]<<"\n";
    cout << marks[2]<<"\n";
    cout << marks[3]<<"\n";
    cout << marks[4]<<"\n";
    cout << marks[5]<<"\n\n";

    // FOR loop for marks
    for ( i = 0; i < 4; i++)
    {
        cout << "the value at position " <<i<< " is : "<<marks[i]<<"\n\n";
    }

    // FOR loop for mathmarks
    for ( j = 0; j < 4; j++)
    {
        cout << "the value at position " <<j<< " is : "<<mathmarks[j]<<"\n\n";
    }

    // WHILE LOOP

    i=0;
    while (i<4) {
        cout <<"\n"<< mathmarks[i];
        i++;
        if (i == 4) {
            cout <<"\n";
        }
    }

    // DO WHILE LOOP

    i=0;
    do {
        cout << "\n" << mathmarks[i];
        i++;
    } while (i<3);

    return 0;
}
*/

/* Output

0
1
2
3
4
5


to define the value in array2 mathmarks
31
33
35
37
39


to change the  value in marks array1
22
33
44
55
66
77

the value at position 0 is : 22

the value at position 1 is : 33

the value at position 2 is : 44

the value at position 3 is : 55

the value at position 0 is : 31

the value at position 1 is : 33

the value at position 2 is : 35

the value at position 3 is : 37


31
33
35
37

31
33
35

*/

// ARRAY POINTERS

/*
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {8, 9, 12, 13, 14, 15, 6, 7};

    int *ptr = arr;

    cout << "array val: " << ptr[0] << "\n";
    cout << "array val: " << ptr[1] << "\n";
    cout << "array val: " << ptr[2] << "\n";
    cout << "array val: " << ptr[3] << "\n";
    cout << "array val: " << ptr[4] << "\n\n";

    //alternative

    cout << "array val using *(ptr) : " << *(ptr) << "\n";
    cout << "array val using *(ptr + 1): " << *(ptr + 1) << "\n";
    cout << "array val using *(ptr + 2) : " << *(ptr + 2) << "\n";
    cout << "array val using *(ptr + 3) : " << *(ptr + 3) << "\n";
    cout << "array val using *(ptr + 4) : " << *(ptr + 4) << "\n";
    cout << "array val using *(ptr + 5) : " << *(ptr + 5) << "\n\n";

    cout << "array val: " << *(ptr++) << "\n";  //shows the same value
    cout << "array val: " << *(++ptr) << "\n";  //shifts position +2 and print the value at changed position
    
    return 0;
}
*/

/*  OUTPUT

array val: 8
array val: 9
array val: 12
array val: 13
array val: 14

array val using *(ptr) : 8
array val using *(ptr + 1): 9
array val using *(ptr + 2) : 12
array val using *(ptr + 3) : 13
array val using *(ptr + 4) : 14
array val using *(ptr + 5) : 15

array val: 8
array val: 12

*/
