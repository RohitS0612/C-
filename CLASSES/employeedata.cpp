// Array of object
#include <iostream>
#include<cstring>
using namespace std;
class Employee
{
private:
    int id;
    char name[200];
    long int sal;

public:
    void setData(int id, char name[200], long int sal)
    {
        this->id=id;
        strcpy(this->name , name);
        this -> sal = sal;
    }

    void getVAlue()
    {
        cout<<id<<"\t"<<name<<"\t"<<sal<<endl;
    }


};
int main()
{

    int id;
    char name[200];
    long int sal;
    cout<<"Enter the number hoe any employee you wnat to store: ";
    int size;
    cin>>size;
    Employee emp[size];

    for(int i=0; i<size; i++)
    {   cout<<"\n Entry : "<<i+1<<endl<<endl;
        cout<<"Enter the id : ";
        cin>>id;
        cout<<"Enter the Name : ";
        cin>>name;
        cout<<"Enter the slary : ";
        cin>>sal;
        emp[i].setData(id, name, sal);
    }
    cout<<"Id\tName\tSalary\n";
    for(int i=0; i<size; i++)
    {
        emp[i].getVAlue();
    }
    return 0;
}