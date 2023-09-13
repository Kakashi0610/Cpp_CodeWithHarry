//  POINTERS IN C++

/* MOST IMPORTANT : formula for pointer conversion

int* ptr;
int val1 = 5;
int val2 = 9;

ptr = &val1   ===> means it is a pointer to address of 7        fvneouv35tg5rfg5r  (random number)

*ptr = val1  ====> means its a pointer to value of val1           7 

for pointer of pointer, we create a pointer which stores calls the ptr itself **ptr2 = *ptr 
  
*/




// pointer value and address conversion

/*
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    a = 5;

    // defining ptr
    int *ptr = &a;

    // for value
    cout << "the value of a by *ptr is : " << *ptr << "\n";  //*ptr is : 5
    cout <<" the value of a by a is : " <<a<< "\n\n";          //a is : 5

    // cout << "the value of a by *ptr is : " << *ptr+2 << "\n";  //*ptr is : 7
    // cout <<" the value of a by a is : " <<a+2<< "\n\n";          //a is : 7

    //for address
    // cout << "the address of a by ptr is : "<<ptr<< "\n";  //ptr is : 0x61ff08
    // cout << "the address of a by &a is : "<<&a<< "\n\n";  //&a is : 0x61ff08

    //pointer for poiner
    int ** ptr2 = &ptr;

    cout << "the value at address of c is : "<<*ptr<< "\n";  //of *ptr is : 5
    cout << "the value at address of c is : "<<**ptr2<< "\n";  //of **ptr2 is : 5

    return 0;
}
*/

/* Output
the value of a by *ptr is : 5
the value of a by a is : 5

the value of a by *ptr is : 7
the value of a by a is : 7

the address of a by ptr is : 0x61ff0c
the address of a by &a is : 0x61ff0c

the value at address of *ptr is : 5
the value at address of **ptr2 is : 5
*/


/*

=================================================================================================

int a = 7;
int* ptr;
ptr = &a      //which is the address of the var a        ncf539t7h45nfu (random address)

ptr = &b = &ptr ---- address of var
& ---> address of

==================================================================================================

int a = 7;
int* ptr;
ptr = &a;
ptr = a;       //here the vale of ptr is 7


a = *ptr = **c ---> value 
*ptr---> value of var


EXPLANATON :

val of a is 5

create a ptr which stores the value of a = *ptr

we create an address of a = &a

for pointer of pointer, we create a pointer which stores calls the ptr itself **ptr2 = *ptr 

*/