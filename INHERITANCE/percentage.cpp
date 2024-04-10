#include<iostream>
using namespace std;

class Per
{
    protected:
    int total, per;
    public:
    void calPer(int s[])
    {
        //calculate the percentage here
        total = 0;
        for(int i=0; i<6; i++)
        {
            total += s[i];
        }

        per = (total *100) / 600;
    }
};


class CSE : public Per
{
    protected:
    int id;
    string name;
    string address;
    string year;

    public:
    CSE(string name, int id, string address, string year) { 
        this->name = name;
        this->id = id;
        this->address = address;
        this->year = year;
    }

    void showCSEPer() {
        cout<<"Id\t\tName\t\tAddress\t\tYear\t\tper"<<endl;
        cout<<id<<"\t\t"<<name<<"\t\t"<<address<<"\t\t"<<year<<"\t\t"<<per<<endl;
    }
};

class ETC : public Per
{
        protected:
    int id;
    string name;
    string address;
    string year;

    public:
    ETC(string name, int id, string address, string year) { 
        this->name = name;
        this->id = id;
        this->address = address;
        this->year = year;
    }
        void showETCPer() {
        cout<<"Id\t\tName\t\tAddress\t\tYear\t\tper"<<endl;
        cout<<id<<"\t\t"<<name<<"\t\t"<<address<<"\t\t"<<year<<"\t\t"<<per<<endl;
    }
};

int main()
{
    string subject[] = { "english:","JAVA:", "PHP:","PYTHION:","Computer Networks:", "JavaScript:"};
    int marks[6];

    cout<<"Enter Student details : \n";
    cout<<"Id: ";
    int id;
    cin>>id;

    cout<<"Name: ";
    string name;
    cin>>name;

    cout<<"Address: ";
    string add;
    cin>>add;

    cout<<"Year: ";
    string year;
    cin>>year;

    cout<<"Enert student marks: "<<endl;
    for(int i=0; i<6; i++)
    {
        cout<<subject[i]<<" ";
        cin>>marks[i];
    }

    ETC etc(name, id, add, year);

    etc.calPer(marks);
    etc.showETCPer();


    CSE cse(name, id, add, year);
    cse.calPer(marks);
    cse.showCSEPer();

    return 0;
}