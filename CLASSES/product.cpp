#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class product
{
private:
    int id, qty;
    char name[200];
    int rate;
    // int tBill;

public:
    void setData(int id, char *name, int qty, int rate)
    {
        this->id = id;
        strcpy(this->name, name);
        this->qty = qty;
        this->rate = rate;
    }

    int getId()
    {
        return id;
    }

    char *getName()
    {
        return name;
    }

    int getQty()
    {
        return qty;
    }

    int getRate()
    {
        return rate;
    }

    int tBill()
    {
        return getRate() * getQty();
    }

    void calBill()
    {
        // cout<<"ID\ttNAME\tQUANTITIY\tRATE\n";

cout << getId() << "\t" << getName() << "\t    " << getQty() << "\t \t" << getRate() << "\t" << tBill() << "\n";
    }
};
int main()
{
    int id, qty, size;
    int rate;
    char name[200];

    cout << "Enter how many products : ";
    cin >> size;

    product *pr;

    pr = (product *)malloc( sizeof(product));


    for (int i = 0; i < size; i++)
    {
        cout << "\nProduct : " << i + 1;
        cout << "\nEnter id : ";
        cin >> id;
        
        cout << "\nEnter Product  Name : ";
        cin >> name;

        cout << "\nEnter Quantity : ";
        cin >> qty;

        cout << "\nEnter Rate : ";
        cin >> rate;
        pr[i].setData(id, name, qty, rate);
    }

    cout << "ID\tNAME\tQUANTITIY\tRATE\tTOTAL BILL\n";
    for (int i = 0; i < size; i++)
    {
        pr[i].calBill();
    }
    int total = 0;
    cout << "_______________________________________________";
    for (int i = 0; i < size; i++)
    {
        total += pr[i].tBill();
    }
    cout << "\n\t\tTotal Bill of Order is = " << total;

    return 0;
}