//  REFERENCE VARIABLES AND TYPE CASTING

/*
#include <iostream>

using namespace std;    

int num3 = 44;

int main(int argc, char const *argv[])
{
    int num1,num2,num3;

    cout <<"enter the number1 : \n";
    cin >> num1;
    cout <<"entered number1 is : "<<num1<<"\n\n";

    cout <<"enter the number2 : \n";
    cin >> num2;
    cout <<"entered number2 is : "<<num2<<"\n\n";

    num3= num1+num2;

    cout <<"the addition of the num1 and num2 is : "<<num3<<"\n";

    // :: for calling global variable's value
    cout <<"value of the number3 is :"<<::num3<<"\n";  //value of the number3 is :44  (global variable)

    float a = 44.67;
    char c = 'C'; 

    cout << "the value of float a is : "<<a<<"\n";  //the value of float a is : 44.67
    cout << "the value of char c is : "<<c<<"\n\n";

    //chain of cout can be used to printmultiple cout functions in same line - ALTERNATE SYNTAX

    cout << "the value of float a is : "<< a<<endl<<"The value of char c is : " <<c<<"\n\n";

//*****************************  float long LITERALS   ********************************

    // IMPORTANT -- specify the data type to convert it into float and long 
    // to determine the size of the variables

    float aa = 88.37f;  // f denotes float
    long l = 88.37l;  // l denotes long

    cout << "the value of float aa is : "<<aa<<endl<<"The value of long l is : "<<l<<endl<<"\n\n";

    cout<< "the size of 88.37 is : "<<sizeof(88.37)<<"\n";    //is : 8  bydefault size of double
    cout<< "the size of 88.37F is : "<<sizeof(88.37F)<<"\n";   //is : 4
    cout<< "the size of 88.37f is : "<<sizeof(88.37f)<<"\n";   //is : 4
    cout<< "the size of 88.37L is : "<<sizeof(88.37L)<<"\n";   //is : 12
    cout<< "the size of 88.37l is : "<<sizeof(88.37l)<<"\n\n";   //is : 12

//*****************************  REFEERENCE VARIABLES *************************************

    // Example : annu  ---data--->   kakashi  ---data--->  aniket  (val of annu to kakashi to aniket)

    float org_var = 55.99;

    cout <<"the value of original var is : "<<org_var<<"\n";    //the value of original var is : 55.99

    // datatype & duplicate var = orgiginal var;
    
    float &dup_var = org_var;     //use of & for address of original val

    cout <<"the value of duplicate var is : "<<dup_var<<"\n\n";  //the value of duplicate var is : 55.99
    

//*****************************  TYPECASTING *************************************
    
    int var1 = 22;
    float var2 = 44.77;

    cout << "the value of a is : "<<var1<<"\n";  //the value of a is : 22
    cout << "the value of b is : "<<var2<<"\n\n";  //the value of b is : 44.77

    //converting an float to a integer
    cout << "the sum is : "<<var1+int(var2)<<"\n";  //the sum is : 66
    cout << "the sum is : "<<var1+(int)var2<<"\n";  //the sum is : 66

    //by default the int changes t0 float 
    cout << "the sum is : "<<(float)var1+var2<<"\n";  //the sum is : 66.77
    cout << "the sum is : "<<float(var1)+var2<<"\n";  //the sum is : 66.77
    return 0;
}
*/

/*  OUTPUT
enter the number1 : 
5
entered number1 is : 5

enter the number2 :
7
entered number2 is : 7

the addition of the num1 and num2 is : 12
value of the number3 is :44
the value of float a is : 44.67
the value of char c is : C
the value of float a is : 44.67
The value of char c is : C
the value of float aa is : 88.37
The value of long l is : 88


the size of 88.37 is : 8
the size of 88.37F is : 4
the size of 88.37f is : 4
the size of 88.37L is : 12
the size of 88.37l is : 12
the value of original var is : 55.99
the value of duplicate var is : 55.99
the value of a is : 22
the value of b is : 44.77
the sum is : 66
the sum is : 66.77
*/






