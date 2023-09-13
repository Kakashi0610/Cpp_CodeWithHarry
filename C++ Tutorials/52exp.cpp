// ARRAY of OBJECTS using POINTERS

/*
#include <iostream>
using namespace std;

class shopitem
{
    int id;
    int price;

public:
    shopitem() {}

    setdata(int a, int b)
    {
        id = a;
        price = b;
    }

    getdata()
    {
        cout << "the id of product is : " << id << endl;
        cout << "the price of product is : " << price << endl;
    }
};

int main(int argc, char const *argv[])
{

    // for array of size 3
    int size = 3;
    int p, i, q;  

    shopitem *shopitem1 = new shopitem[size];
    shopitem *shopitemtemp = shopitem1;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the id and price of item : " << i + 1 << endl;
        cin >> p >> q;

        shopitem1->setdata(p, q);
        shopitem1++;     //saves the previously inputted data and proceeds to the next loop
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item Number : " << i + 1 << endl;
        shopitemtemp->getdata();
        shopitemtemp++;   //saves the previously inputted data and proceeds to the next loop
    }

    // normal initialization
    // shopitem s1;
    // s1.setdata(55, 99);
    // s1.getdata();

    return 0;
}
*/



/* OUTPUT

Enter the id and price of item : 1
11
22
Enter the id and price of item : 2
33
44
Enter the id and price of item : 3
55
66
Item Number : 1
the id of product is : 11
the price of product is : 22
Item Number : 2
the id of product is : 33
the price of product is : 44
Item Number : 3
the id of product is : 55
the price of product is : 66

*/