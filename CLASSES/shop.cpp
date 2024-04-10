#include <iostream>
#include <string.h>
#include<stdlib.h>
using namespace std;

class customer
{
    // customer class contains id name and contact here we have to setter and getter for customer information.
private:
    int id;
    char name[200];
    long int contact;

public:
    void setId(int id)
    {
        this->id = id;
    }

    int getId()
    {
        return id;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    char *getName()
    {
        return name;
    }

    void setContact(long int contact)
    {
        this->contact = contact;
    }
    long int getContact()
    {
        return contact;
    }
};

class product
{
    /*Product class contain detail of products like as id, name, price, qty and company here
you have to write setter and getter methods for this field.*/

private:
    int id;
    char name[200];
    int price;
    int qty;
    char comName[200];

public:
    void setId(int id)
    {
        this->id = id;
    }

    int getId()
    {
        return id;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    char *getName()
    {
        return name;
    }

    void setQty(int qty)
    {
        this->qty = qty;
    }

    int getQty()
    {
        return qty;
    }

    void setPrice(int price)
    {
        this->price = price;
    }

    int getPrice()
    {
        return price;
    }

    void setCompany(char comName[])
    {
        strcpy(this->comName, comName);
    }

    char *getComp()
    {
        return comName;
    }
};

class shop
{
    /*Shop: we have shop class contain two methods
void acceptCustOrder(Customer,Product[]): this method can accept two
parameters customer data and
Product details.void showBill(): this method can show the bill in
given format shown in following diagram*/

private:
    customer cust;
    product *pro;
    int total;

public:
    void acceptCustOrder(customer cust, product *pro)
    {
        this->cust = cust;
        this->pro = pro;
    }

    void Gtotal(int size)
    {
        
        for(int i=0; i<size; i++)
        {
            total += pro[i].getPrice()*pro[i].getQty();
        }
    }
    void showBill(int size)
    {
        cout << "\nCustId: " << cust.getId() << "\tName : " << cust.getName() << "\tContact: "
         << cust.getContact() << "\n";

        cout << "\nId\tName\tPrice\tQty\tTotal\n";
        for (int i = 0; i < size; i++)
        {
            cout << "\n"
                 << pro[i].getId() << "\t" << pro[i].getName() << "\t" << pro[i].getPrice() << "\t"
                 << pro[i].getQty() << "\t" << ( pro[i].getPrice() * pro[i].getQty() );
        }
                 cout<<"\n\n__________________________________________________________________\n";
                 cout<<"\n\t\t\tGrand Total = "<<total;
    }
};
int main()
{
    customer cust;

    int cid;
    char cname[200];
    long int ccontact;
    cout<<"\nEnter Customer Id : ";
    cin>>cid;

    cout<<"\nEnter Customer Name : ";
    cin>>cname;

    cout<<"\nEnter Customer Contact : ";
    cin>>ccontact;

    cust.setId(cid);
    cust.setName(cname);
    cust.setContact(ccontact);
    cout<<"\n___________________________________________________________\n";
    int size;
    cout<<"\nEnter product count : ";
    cin>>size;

    product *pro;
    int pid, price, qty;
    char pname[200];
    pro = (product * )malloc(sizeof(product )*size);
    for(int i=0; i<size; i++)
    {
        cout<<"\nProduct = "<<i+1;
        cout<<"\n\nEnter Product Id :";
        cin>>pid;
        pro[i].setId(pid);
        cout<<"\nEnter Product Name : ";
        cin>>pname;
        pro[i].setName(pname);
        cout<<"\nEnter Product Price : ";
        cin>>price;
        pro[i].setPrice(price);
        cout<<"\nEnter Product Quntity : ";
        cin>>qty;
        pro[i].setQty(qty);
    }

cout<<"\n________________________________________________\n";

    shop s;
    s.acceptCustOrder(cust ,pro);
    s.Gtotal(size);
    s.showBill(size);



    return 0;
}