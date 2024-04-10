#include<iostream>
using namespace std;

class Empolyee
{
    private:
    string Name;
    int Id, sal;
    int prog=0;
    public:
    void setPersonalinfo( string name, int id, int basicsal)
    {
        Name = name;
        Id = id;
        sal = basicsal;
    }

    public:
    void setProgressPer(int progress)
    {
        if(progress > 60)
        {
            prog = sal % 30;
        }

    }

    public:
    void show()
    {
        cout<<"\nName : "<<Name;
        cout<<"\nId : "<<Id;
        cout<<"\nIncreemnt Salary : "<<prog;
        cout<<"\nToatal Salary : "<<sal+prog;


    }
};
 

int main()
{
    Empolyee e;
    int id,  sal, prog;
    string name;
    cout<<"Enter the  Name : ";
    cin>>name;
    cout<<"\nEnter the Id : ";
    cin>>id;
    cout<<"\nEnter the Salary : ";
    cin>>sal;
    cout<<"\nEnter the Progress  rate : ";
    cin>>prog;

    e.setPersonalinfo(name, id, sal);
    e.setProgressPer(prog);
    e.show();




    return 0;
}