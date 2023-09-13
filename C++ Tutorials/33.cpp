// DYNAMIC INITIALIZATION of objects using CONSTRUCTORS 


/*
#include <iostream>
using namespace std;

class bankdeposit
{
private:
    int principle;
    int years;
    float interestrate;
    float returnvalue;

public: 

    bankdeposit(int,int,int);     //paramameterized constructor declaring

    bankdeposit(int,int,float);   //paramameterized constructor declaring

    show1();    // declaring object
    show2();

};

  
// for interestrate to be in % percentage

bankdeposit :: bankdeposit(int p, int y, float r)    //paramameterized constructor
{
    principle = p;
    years = y;
    interestrate = r;
    returnvalue = principle;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue + r;
    }
}


// for interestrate to be in % percentage

bankdeposit ::bankdeposit(int p, int y, int R)   //paramameterized constructor
{
    principle = p;
    years = y;
    interestrate = float(R)/100;     // in % format 
    returnvalue = principle;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * interestrate;
    }
}

bankdeposit :: show1()    //creating object
{
    cout << "The rate of interest " << interestrate << " in years " << years << " to principle amount "<< principle << " is " << returnvalue << "\n";
}

bankdeposit :: show2()    //creating object
{
    cout << "The rate of interest " << interestrate << "% in years " << years << " to principle amount "<< principle << " is " << returnvalue << "\n";
}

int main(int argc, char const *argv[])
{

    // bankdeposit b1(100,3,3);
    // b1.show1();

    bankdeposit b1,b2,b3;

    int p;
    int y;
    int R;
    float r;

    cout << "for interest in int, enter the value of p y and r : \n";
    cin >> p >> y >> r;
    b1 = bankdeposit(p,y,r);
    b1.show1();    //calling object

    cout << "for interest in %, enter the value of p y and R : \n";
    cin >> p >> y >> R;
    b1 = bankdeposit(p,y,R);
    b1.show2();    //calling object

    return 0;
}
*/


/*  OUTPUT

for interest in int, enter the value of p y and r : 
100
3
4.5
The rate of interest 4.5 in years 3 to principle amount 100 is 113.5
for interest in %, enter the value of p y and R :
100
3
45
The rate of interest 0.45% in years 3 to principle amount 100 is 9.1125

*/