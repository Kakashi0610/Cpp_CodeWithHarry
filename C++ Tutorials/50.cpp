// NEW and DELETE keywords

/* Use of NEW keywoard - to dynamically create memory during runtime

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // old technique example
    int a = 41;
    int * ptr;
    ptr = &a;
    //*ptr = 8888;     //to again allocate value

    cout << "The val of a is : " << *(ptr) << endl;   //The val of a is : 41  
    //cout << "The val of a is : " << *(ptr) << endl;   //The val of a is : 8888  */

/* NEW keyword - for creating new var and dynamic memory during runtime

    int *p1 = new int(33);
    cout << "The val at adress p1 is : " << *(p1) << endl;   //The val at adress p1 is : 33

    float *p2 = new float(44.66);
    cout << "The val at adress p2 is : " << *(p2) << endl;   //The val at adress p2 is : 44.66  */


/* NEW keyword - for creating new var and dynamic memory during runtime

    int * arr1 = new int[6];
    arr1[0] = 12;
    arr1[1] = 42;
    arr1[2] = 62;
    arr1[3] = 82;
    arr1[4] = 52;
    arr1[5] = 22;

    for (int i = 0; i < 6; i++)
    {
        cout << "The val at arr1[] is : " << arr1[i] << endl;
    }

    return 0;
}
*/

/* OUTPUT  for for loop

The val at arr1[] is : 12
The val at arr1[] is : 42
The val at arr1[] is : 62
The val at arr1[] is : 82
The val at arr1[] is : 52
The val at arr1[] is : 22
*/



// DELETE keyword -- empties/deletes the whole array, except the last val.

/* DELETE keyword for array

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *arr2 = new int[3];
    arr2[0] = 22;

    arr2[1] = 42;
    //*(arr+1) = 42;

    arr2[2] = 62;

    cout << "After allocating dynamic memory using NEW keyword : \n";
    cout << "The val at arr2[0] is : " << arr2[0] << endl;
    cout << "The val at arr2[1] is : " << arr2[1] << endl;
    cout << "The val at arr2[2] is : " << arr2[2] <<"\n\n";

    delete[] arr2;   // empties/deletes the whole array, except the last val.

    cout << "After emptying/deallocating dynamic memory using DELETE keyword : \n";
    cout << "The val at arr2[0] is : " << arr2[0] << endl;
    cout << "The val at arr2[1] is : " << arr2[1] << endl;
    cout << "The val at arr2[2] is : " << arr2[2] << "\n\n";

    return 0;
}
*/


/* OUTPUT
After allocating dynamic memory using NEW keyword : 
The val at arr2[0] is : 22
The val at arr2[1] is : 42
The val at arr2[2] is : 62

After emptying/deallocating dynamic memory using DELETE keyword :
The val at arr2[0] is : 18027552
The val at arr2[1] is : 18022592
The val at arr2[2] is : 62
*/


 
//  DELETE KEYWORD for variables

/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float *p2 = new float(44.66);
    cout << "\nAfter allocating dynamic memory using NEW keyword : \n";
    cout << "The val at adress p2 is : " << *(p2) << "\n\n";   //The val at adress p2 is : 44.66

    delete p2;
    cout << "After emptying/deallocating dynamic memory using DELETE keyword : \n";
    cout << "The val at adress p2 is : " << *(p2) << endl;   //The val at adress p2 is : 44.66

    return 0;
}
*/


/* OUTPUT

After allocating dynamic memory using NEW keyword : 
The val at adress p2 is : 44.66

After emptying/deallocating dynamic memory using DELETE keyword :
The val at adress p2 is : 2.60957e-038

*/


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // old technique example
    int a = 41;
    int * ptr;
    ptr = &a;
    *ptr = 8888;   //to again allocate

    cout << "The val of a is : " << *(ptr) << endl;
    return 0;
}