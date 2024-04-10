#include <iostream>
#include <cstring>
using namespace std;

// WAP to create the class name as Employee with a setter and getter method with a Player details
// using id, name, email, contact, address, salary.
class Employee
{
private:
    int id;
    char name[20];
    char email[20];
    long int contact;
    char address[20];
    long int salary;

public:
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return id;
    }
    void setName(char name[20])
    {
        strcpy(this->name , name);
    }

    char *getName()
    {
        return name;
    }

    void setEmail(char email[20])
    {
        strcpy(this->email , email);
    }
    char *getEmail()
    {
        return email;
    }

    void setContact(long int contact)
    {
        this->contact = contact;
    }
    long int getContact()
    {
        return contact;
    }

    void setAdd(char address[20])
    {
        strcpy(this->address , address);
    }

    char *getAdd()
    {
        return address;
    }

    void setSalary(long int salary)
    {
        this->salary = salary;
    }

    long int getSal()
    {
        return salary;
    }
};

// Create the one more class name as Company and pass Employee objects in Comapny class
// and perform the all operations Employee details of a Company class using dynamic memory allocation.

class Company
{
private:
    Employee *emp;

public:
    void setData(Employee *emp)
    {
        this->emp = emp;
    }

    void show(int size, int flag)
    {
        cout << "\nId\tName\tEmail\t\tContact\t\tAddress\t\tSalary\n";
        for (int i = 0; i < size - flag; i++)
        {
            cout << "\n"
                 << emp[i].getId() << "\t" << emp[i].getName() << "\t" << emp[i].getEmail() << "\t"
                 << emp[i].getContact() << "\t" << emp[i].getAdd() << "\t" << emp[i].getSal() << "\n";
        }
    }
};

int main()
{
    Employee *emp;
    Company comp;
    int id, size;
    long int sal;
    char name[20], email[20], add[20];
    int flag = 0;
    int ch;

    do
    {
        cout << "\n1.Add Employee Details.";
        cout << "\n2.Show Employee Details.";
        cout << "\n3.Search Employee Using:";
        cout << "\n4.Delete Employee Details Using:";
        cout << "\n5.Update Employee Details Using:";
        cout << "\n6.Sorting Employee Details Using:";
        cout << "\n7. Display the employee details in highest salary.";
        cout << "\n8. Display the employee details in second highest salary.";
        cout << "\n9. Display the employee details in minimum salary is 10000 to maximum salary is 50000.";
        cout << "\n\nEnter Your Choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nHow many  Employee Details Wnat to enter :";
            cin >> size;
            emp = (Employee *)malloc(sizeof(Employee) * size);
            for (int i = 0; i < size; i++)
            {
                cout << "\nEnter Id : ";
                cin >> id;
                emp[i].setId(id);
                cout << "\nEnter Name : ";
                cin >> name;
                emp[i].setName(name);
                cout << "\nEnter Email : ";
                cin >> email;
                emp[i].setEmail(email);
                cout << "\nEnter Salary : ";
                cin >> sal;
                emp[i].setSalary(sal);
                cout << "\nEnter Address : ";
                cin >> add;
                emp[i].setAdd(add);
            }
            comp.setData(emp);
            break;

        case 2:
            comp.show(size, flag);
            break;
        }

    } while (1);
    return 0;
}
