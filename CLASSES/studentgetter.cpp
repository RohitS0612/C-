#include <iostream>
#include <string.h>
#include<stdlib.h>
using namespace std;
class student
{
private:
    int rno, per;
    char name[200];

public:
    void setData(int rno, char name[200], int per)
    {
        this->rno=rno;
        this->per=per;
        strcpy(this->name,name);
    }

    
    int getRno()
    {
        return rno;
    }

    int getPer()
    {
        return per;
    }

    char *getName()
    {
        return name;
    }
    void show()
    {    
        
        cout<<getRno()<<"\t"<<getName()<<"\t"<<getPer()<<endl;
    }

};
int main()
{
    int size;
    cout<<"How many students are : ";
    cin>>size;
    student *stu;

    stu = (student* )malloc(sizeof(student));
    int rno, per;
    char name[200];
    for(int i=0; i<size; i++)
    {
        cout<<"\nStudent : "<<i+1;
        cout<<"\nEnter Roll Number : ";
        cin>>rno;
        cout<<"\nEnter Name : ";
        cin>>name;
        cout<<"\nEnter Percentage : ";
        cin>>per;
        
        stu[i].setData(rno,name,per);
    }

    cout<<"\nStudent Details are : \n";
        cout<<"Roll No.\tName\tPercentage\n";
    for(int i=0; i<size; i++)
    {
        stu[i].show();
    }

    cout<<"\n35% \t above students are : \n";
    cout<<"Roll No.\tName\tPercentage\n";
    for(int i=0; i<size; i++)
    {
        if(stu[i].getPer()>= 35)
        {
            stu[i].show();
        }
    }

    
    return 0;
}