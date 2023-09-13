// MEMORY ALLOCATION AND USING ARRAYS IN CLASSES

/*
#include <iostream>
using namespace std;

class shop
{
private:
    int item_id[100];
    int item_price[100];
    int counter;     //for tracking no. of items in array  (not a command)

public:
    void init_counter(void)     //defining function - counter
    {
        counter = 1;
    }

    void set_price(void);    //declarimg function
    void display_price(void);    //declarimg function
};

void shop ::set_price(void)    // no need of datatype before
{
    cout << "Enter the id of the item no :" << counter<< "\n";
    cin >> item_id[counter];
    cout << "Enter the price of the item : " << counter<< " \n";
    cin >> item_price[counter];
    counter++;    // for incrementing counter 
}

void shop ::display_price(void)
{
    for (int i = 1; i < counter; i++)
        cout << "the price of " << item_id[i] << " is : " << item_price[i] << "\n";
}

int main(int argc, char const *argv[])
{
    shop goldmine;

    goldmine.init_counter();
    goldmine.set_price();
    goldmine.set_price();
    goldmine.set_price();
    goldmine.display_price();

    return 0;
}
*/


/* OUTPUT

Enter the id of the item no :1
1
Enter the price of the item : 1 
100
Enter the id of the item no :2
2
Enter the price of the item : 2 
200
Enter the id of the item no :3
3
Enter the price of the item : 3 
300
the price of 1 is : 100
the price of 2 is : 200
the price of 3 is : 300
*/

