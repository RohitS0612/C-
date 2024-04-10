#include <iostream>
#include <string.h>
#include<stdlib.h>
using namespace std;
// WAP to create the class name as Employee with a setter and getter method with a Player details
// using id, name, email, contact, address, salary.

//extern int size;

class Employee
{
private:
    int id;
    char name[100];
    char email[100];
    long int contact;
    char address[100];
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
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    const char *getName()
    {
        return name;
    }

    void setEmail(char email[])
    {
        strcpy(this->email, email);
    }
    const char *getEmail()
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

    void setAdd(char address[])
    {
        strcpy(this->address, address);
    }

    const char *getAdd()
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
    int size;
public:
    void setData(Employee *emp,int size)
    {
        this->emp = emp;
        this->size=size;
    }

    void addData()
    {
        for (int i = 0; i <size; i++)
        {
            cout << "\nEnter Id : ";
            int id;
            cin >> id;
            emp[i].setId(id);
            cout << "\nEnter Name : ";
            char name[100];
            cin >> name;
            emp[i].setName(name);
            cout << "\nEnter Email : ";
            char email[100];
            cin >> email;
            emp[i].setEmail(email);
            cout << "\nEnter Contact Number : ";
            long int contact;
            cin >> contact;
            emp[i].setContact(contact);
            cout << "\nEnter Salary : ";
            long int sal;
            cin >> sal;
            emp[i].setSalary(sal);
            cout << "\nEnter Address : ";
            char add[100];
            cin >> add;
            emp[i].setAdd(add);
        }
    }

    void show()
    {
        cout << "\nId\tName\tEmail\t\tContact\t\tAddress\t\tSalary\n";
        for (int i = 0; i < size; i++)
        {
            cout << "\n"
                 << emp[i].getId() << "\t" << emp[i].getName() << "\t" << emp[i].getEmail() << "\t"
                 << emp[i].getContact() << "\t" << emp[i].getAdd() << "\t" << emp[i].getSal() << "\n";
        }
    }

    void searchID(int sid)
    {
        cout << "\nId\tName\tEmail\t\tContact\t\tAddress\t\tSalary\n";
        for (int i = 0; i < size; i++)
        {
            if (sid == emp[i].getId())
            {
                cout << "\n"
                     << emp[i].getId() << "\t" << emp[i].getName()
                     << "\t" << emp[i].getEmail() << "\t" << emp[i].getContact()
                     << "\t" << emp[i].getAdd() << "\t" << emp[i].getSal() << "\n";
            }
        }
    }

    void searchName(char sname[])
    {
        cout << "\nId\tName\tEmail\t\tContact\t\tAddress\t\tSalary\n";
        for (int i = 0; i < size; i++)
        {
            if (strcmp(sname, emp[i].getName()) == 0)
            {
                cout << "\n"
                     << emp[i].getId() << "\t" << emp[i].getName()
                     << "\t" << emp[i].getEmail() << "\t" << emp[i].getContact()
                     << "\t" << emp[i].getAdd() << "\t" << emp[i].getSal() << "\n";
            }
        }
    }

    void searchEmail(char ename[])
    {
        cout << "\nId\tName\tEmail\t\tContact\t\tAddress\t\tSalary\n";
        for (int i = 0; i < size; i++)
        {
            if (strcmp(ename, emp[i].getEmail()) == 0)
            {
                cout << "\n"
                     << emp[i].getId() << "\t" << emp[i].getName()
                     << "\t" << emp[i].getEmail() << "\t" << emp[i].getContact()
                     << "\t" << emp[i].getAdd() << "\t" << emp[i].getSal() << "\n";
            }
        }
    }

    void searchSal(long int sal)
    {

        cout << "\nId\tName\tEmail\t\tContact\t\tAddress\t\tSalary\n";
        for (int i = 0; i < size; i++)
        {
            if (sal == emp[i].getSal())
            {
                cout << "\n"
                     << emp[i].getId() << "\t" << emp[i].getName()
                     << "\t" << emp[i].getEmail() << "\t" << emp[i].getContact()
                     << "\t" << emp[i].getAdd() << "\t" << emp[i].getSal() << "\n";
            }
        }
    }

    void searchAdd(char sadd[])
    {
        cout << "\nId\tName\tEmail\t\tContact\t\tAddress\t\tSalary\n";
        for (int i = 0; i < size; i++)
        {
            if (strcmp(sadd, emp[i].getAdd()) == 0)
            {
                cout << "\n"
                     << emp[i].getId() << "\t" << emp[i].getName()
                     << "\t" << emp[i].getEmail() << "\t" << emp[i].getContact()
                     << "\t" << emp[i].getAdd() << "\t" << emp[i].getSal() << "\n";
            }
        }
    }

    void deleteId(int delId)
    {
        for (int i = 0; i <size; i++)
        {
            if (delId == emp[i].getId())
            {
                for (int j = i; j <size; j++)
                {
                    emp[j] = emp[j + 1];
                }
                size--;
                cout << "\nDeleted SuccessFully ! \n";
            }
        }
    }

    void deleteName(char delname[])
    {
        int flag = 0;
        for (int i = 0; i < size; i++)
        {

            if (strcmp(delname, emp[i].getName()) == 0)
            {
                for (int j = i; j < size; j++)

                {
                    emp[j] = emp[j + 1];
                }
                size--;
                flag = 1;
            }
        }
        if (flag)
        {
            cout << "\nDeleted SuccessFully....! \n";
        }
        else
        {
            cout << "\n\nNot Deleted..\n";
        }
    }

    void deleteEmail(char delemail[])
    {
            int flag =0;
        for (int i = 0; i < size; i++)
        {
            if (strcmp(delemail, emp[i].getEmail()) == 0)
            {
                for (int j = i; j < size; j++)

                {
                    emp[j] = emp[j + 1];
                }
                size--;
                flag = 1;
            }
        }
        if (flag)
        {
            cout << "\nDeleted SuccessFully....! \n";
        }
        else
        {
            cout << "\n\nNot Deleted..\n";
        }
    }

    void deleteAdd(char add[])
    {
        int flag = 1;
        for (int i = 0; i < size; i++)
        {
            if (strcmp(add, emp[i].getAdd()) == 0)
            {
                for (int j = i; j < size; j++)

                {
                    emp[j] = emp[j + 1];
                }
                size--;
                flag = 1;
            }
        }
        if(flag)
        {

                cout << "\nDeleted SuccessFully ! \n";
        }
            else
            {
                cout << "\n\nNot Deleted..\n";
            }
    }

    void deleteSal(long int sal)
    {
        int flag = 0;

        for (int i = 0; i < size; i++)
        {
            if (sal == emp[i].getSal())
            {
                for (int j = i; j < size; j++)

                {
                    emp[j] = emp[j + 1];
                }
                size--;
                flag = 1;
            }
        }
            if(flag)
            {

                cout << "\nDeleted SuccessFully ! \n";
            }
            else
            {
                cout << "\n\nNot Deleted..\n";
            }
    }

    void updateID(int upid)
    {
        for (int i = 0; i < size; i++)
        {
            if (upid == emp[i].getId())
            {
                // cout<<"\n\nEnter Update Id : ";
                // cin>>upid;
                // emp[i].setId(upid);
                cout << "\n\nEnter Update Name :";
                char uname[100];
                cin >> uname;
                emp[i].setName(uname);

                cout << "\n\nEnter Update Email :";
                char uemail[100];
                cin >> uemail;
                emp[i].setEmail(uemail);

                cout << "\n\nEnter Update Contact : ";
                long int upcont;
                cin >> upcont;
                emp[i].setContact(upcont);

                cout << "\n\nEnter Update Address : ";
                char upadd[100];
                cin >> upadd;
                emp[i].setAdd(upadd);

                cout << "\n\nEnter Update Salary : ";
                int upsal;
                cin >> upsal;
                emp[i].setSalary(upsal);
                show();
                break;
            }
        }
    }

    void updateNAME(char uname[])
    {
        for (int i = 0; i < size; i++)
        {
            if (strcmp(uname, emp[i].getName()) == 0)
            {
                // cout<<"\n\nEnter Update Id : ";
                // cin>>upid;
                // emp[i].setId(upid);
                cout << "\n\nEnter Update Name :";
                char uname[100];
                cin >> uname;
                emp[i].setName(uname);

                cout << "\n\nEnter Update Email :";
                char uemail[100];
                cin >> uemail;
                emp[i].setEmail(uemail);

                cout << "\n\nEnter Update Contact : ";
                long int upcont;
                cin >> upcont;
                emp[i].setContact(upcont);

                cout << "\n\nEnter Update Address : ";
                char upadd[100];
                cin >> upadd;
                emp[i].setAdd(upadd);

                cout << "\n\nEnter Update Salary : ";
                int upsal;
                cin >> upsal;
                emp[i].setSalary(upsal);

                show();
                break;
            }
        }
    }

    void updateEMAIL(char uemail[])
    {
        for (int i = 0; i < size; i++)
        {
            if (strcmp(uemail, emp[i].getEmail()) == 0)
            {
                // cout<<"\n\nEnter Update Id : ";
                // cin>>upid;
                // emp[i].setId(upid);
                cout << "\n\nEnter Update Name :";
                char uname[100];
                cin >> uname;
                emp[i].setName(uname);

                cout << "\n\nEnter Update Email :";
                char uemail[100];
                cin >> uemail;
                emp[i].setEmail(uemail);

                cout << "\n\nEnter Update Contact : ";
                long int upcont;
                cin >> upcont;
                emp[i].setContact(upcont);

                cout << "\n\nEnter Update Address : ";
                char upadd[100];
                cin >> upadd;
                emp[i].setAdd(upadd);

                cout << "\n\nEnter Update Salary : ";
                int upsal;
                cin >> upsal;
                emp[i].setSalary(upsal);

                show();
                break;
            }
        }
    }

    void updateSAL(int usal)
    {
        for (int i = 0; i < size; i++)
        {
            if (usal == emp[i].getSal())
            {
                // cout<<"\n\nEnter Update Id : ";
                // cin>>upid;
                // emp[i].setId(upid);
                cout << "\n\nEnter Update Name :";
                char uname[100];
                cin >> uname;
                emp[i].setName(uname);

                cout << "\n\nEnter Update Email :";
                char uemail[100];
                cin >> uemail;
                emp[i].setEmail(uemail);

                cout << "\n\nEnter Update Contact : ";
                long int upcont;
                cin >> upcont;
                emp[i].setContact(upcont);

                cout << "\n\nEnter Update Address : ";
                char upadd[100];
                cin >> upadd;
                emp[i].setAdd(upadd);

                cout << "\n\nEnter Update Salary : ";
                int upsal;
                cin >> upsal;
                emp[i].setSalary(upsal);

                show();
                break;
            }
        }
    }

    void updateADD(char uadd[])
    {
        for (int i = 0; i < size; i++)
        {
            if (strcmp(uadd, emp[i].getAdd()) == 0)
            {
                // cout<<"\n\nEnter Update Id : ";
                // cin>>upid;
                // emp[i].setId(upid);
                cout << "\n\nEnter Update Name :";
                char uname[100];
                cin >> uname;
                emp[i].setName(uname);

                cout << "\n\nEnter Update Email :";
                char uemail[100];
                cin >> uemail;
                emp[i].setEmail(uemail);

                cout << "\n\nEnter Update Contact : ";
                long int upcont;
                cin >> upcont;
                emp[i].setContact(upcont);

                cout << "\n\nEnter Update Address : ";
                char upadd[100];
                cin >> upadd;
                emp[i].setAdd(upadd);

                cout << "\n\nEnter Update Salary : ";
                int upsal;
                cin >> upsal;
                emp[i].setSalary(upsal);

                show();
                break;
            }
        }
    }

    void sortId()
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (emp[i].getId() > emp[j].getId())
                {
                    Employee temp = emp[i];
                    emp[i] = emp[j];
                    emp[j] = temp;
                }
            }
        }
        show();
    }

    void sortSal()
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (emp[i].getSal() < emp[j].getSal())
                {
                    Employee temp = emp[i];
                    emp[i] = emp[j];
                    emp[j] = temp;
                }
            }
        }
        show();
    }

    void DisplayMaxSalary()
    {
        int max = emp[0].getSal();
        int index = 0;

        for (int i = 1; i < size; i++)
        {
            if (max < emp[i].getSal())
            {
                max = emp[i].getSal();
                index = i;
            }
        }
        cout << "\n\nHighest Salry employee is : \n";
        cout << "\nID  : " << emp[index].getId();
        cout << "\nName : " << emp[index].getName();
        cout << "\nEmail : " << emp[index].getEmail();
        cout << "\nContact : " << emp[index].getContact();
        cout << "\nAddress : " << emp[index].getAdd();
        cout << "\nSalary : " << emp[index].getSal();
    }

    void SecondMaxSalary()
    {

        int max = emp[0].getSal();
        int secondMax = INT_MIN;
        int secondindex;
        int maxindex = 0;

        for (int i = 1; i < size; i++)
        {
            if (max < emp[i].getSal())
            {
                secondMax = max;
                max = emp[i].getSal();
                secondindex = maxindex;
                maxindex = i;
            }
            else if (emp[i].getSal() > secondMax && emp[i].getSal() != max)
            {
                secondMax = emp[i].getSal();
                secondindex = i;
            }
        }

        cout << "\n\n Second Highest Salry employee is : \n";
        cout << "\nID  : " << emp[secondindex].getId();
        cout << "\nName : " << emp[secondindex].getName();
        cout << "\nEmail : " << emp[secondindex].getEmail();
        cout << "\nContact : " << emp[secondindex].getContact();
        cout << "\nAddress : " << emp[secondindex].getAdd();
        cout << "\nSalary : " << emp[secondindex].getSal() << endl
             << endl;
    }

    void DispalyMinimumSal()
    {
        cout << "\nId\tName\tEmail\t\tContact\t\tAddress\t\tSalary\n";
        for (int i = 0; i < size; i++)
        {
            if (emp[i].getSal() >= 10000 && emp[i].getSal() <= 50000)
            {
                cout << "\n"
                     << emp[i].getId() << "\t" << emp[i].getName() << "\t" << emp[i].getEmail() << "\t"
                     << emp[i].getContact() << "\t" << emp[i].getAdd() << "\t" << emp[i].getSal() << "\n";
            }
        }
    }
};


int main()
{
    Employee *emp;
    Company comp;
    int id;
    int size;
    long int sal, contact;
    char name[100], email[100], add[100];
    char sname[100], sadd[100], ename[100];
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
            comp.setData(emp, size);
            comp.addData();
            break;

        case 2:
            comp.show();
            break;

        case 3:
            int sh;
            do
            {
                cout << "\n3.Search Employee Using:\n"
                     << "\n 1) Id."
                     << "\n 2) Name."
                     << "\n 3) Email."
                     << "\n 4) Salary."
                     << "\n 5) Address.";
                cout << "\nSelect option: ";
                cin >> sh;
                switch (sh)
                {
                case 1:
                    int sid;
                    cout << "\nEnter the Search Id : ";
                    cin >> sid;
                    comp.searchID(sid);
                    break;
                case 2:
                    cout << "\n\nEnter the search name : ";
                    cin >> sname;
                    comp.searchName(sname);
                    break;

                case 3:
                    cout << "\n\nEnter the search Email : ";
                    cin >> ename;
                    comp.searchEmail(ename);
                    break;

                case 4:
                    long int sal;
                    cout << "\n\nEnter the search Salary : ";
                    cin >> sal;
                    comp.searchSal(sal);
                    break;

                case 5:
                    cout << "\n\nEnter the search Address : ";
                    cin >> sadd;
                    comp.searchAdd(sadd);
                    break;
                }

                cout << "\n\nif you want continue enter (Yes = 1/No = 0): ";
                cin >> sh;
            } while (sh != 0);

            break;

        case 4:
            int del;
            do
            {
                cout << "\n3.Delete Employee Using:\n"
                     << "\n 1) Id."
                     << "\n 2) Name."
                     << "\n 3) Email."
                     << "\n 4) Salary."
                     << "\n 5) Address.";
                cout << "\nSelect option: ";
                cin >> del;
                switch (del)
                {
                case 1:
                    int idel;
                    cout << "\n delet by Id : ";
                    cin >> idel;
                    comp.deleteId(idel);
                    break;

                case 2:
                    char ndel[100];
                    cout << "\n delet by name : ";
                    cin >> ndel;
                    comp.deleteName(ndel);
                    break;

                case 3:
                    char edel[100];
                    cout << "\n delet by email : ";
                    cin >> edel;
                    comp.deleteEmail(edel);
                    break;

                case 4:
                    long int saldel;
                    cout << "\n delet by salary : ";
                    cin >> saldel;
                    comp.deleteSal(saldel);
                    break;

                case 5:
                    char adel[100];
                    cout << "\n delet by Address : ";
                    cin >> adel;
                    comp.deleteAdd(adel);
                    break;

                default:
                    break;
                }

                cout << "\n\nif you want continue enter (Yes = 1/No = 0): ";
                cin >> del;
            } while (del != 0);
            break;

        case 5:
            int update;
            int upid;
            long int usal;
            char uname[100], uemail[200], uadd[100];
            do
            {
                cout << "\n\n5)Update Employee Details Using: ";
                cout << "\n\t1)id.\n\t2)name.\n\t3)email.\n\t4)salary.\n\t5)Address.";
                cout << "\n\nSelecg youe option : ";
                cin >> update;
                switch (update)
                {
                case 1:
                    cout << "\n\nUpdate by  Id : ";
                    cin >> upid;
                    comp.updateID(upid);
                    break;

                case 2:
                    cout << "\n\nUpdate by name : ";
                    cin >> uname;
                    comp.updateNAME(uname);
                    break;

                case 3:
                    cout << "\n\nUpdate by Email : ";
                    cin >> uemail;
                    comp.updateEMAIL(uemail);
                    break;

                case 4:
                    cout << "\n\nUpdate by Salary : ";
                    cin >> usal;
                    comp.updateSAL(usal);
                    break;

                case 5:
                    cout << "\n\nUpdate by Address : ";
                    cin >> uadd;
                    comp.updateADD(uadd);
                    break;
                }
                cout << "\n\nif you want continue enter (Yes = 1/No = 0): ";
                cin >> update;
            } while (update != 0);
            break;

        case 6:
            int sort;
            cout << "\nSorting Employee Details Using:\n\n \t1)id by Ascending Order.\n\t2)sal by Descending Order.";
            cin >> sort;
            switch (sort)
            {
            case 1:
                cout << "\n\n1) id by Ascending Order.\n";
                comp.sortId();
                break;

            case 2:
                cout << "2)salary by Descending Order.\n";
                comp.sortSal();
                break;
            }
            break;

        case 7:
            cout << "\n\n Display the employee details in highest salary.\n";
            comp.DisplayMaxSalary();
            break;

        case 8:
            cout << "\n\nDisplay the employee details in second highest salary.\n";
            comp.SecondMaxSalary();
            break;

        case 9:
            cout << " \nDisplay the employee details in minimum salary is 10000 to maximum salary is 50000.\n\n";
            comp.DispalyMinimumSal();
            break;

        default:
            break;
        }
    } while (ch != 0);
}