#include <iostream>
#include<cstring>
#include<string.h>
using namespace std;
class player
{
private:
    int id;
    char name[200];
    int run;

    public:
    void setData(int id, char name[200], int run)
    {
        this->id  =id;
        strcpy(this->name, name);
        this-> run = run;
    }   

    void getData()
    {
        cout<<id<<"\t"<<name<<"\t"<<run<<endl;
    }

    int serach(char sname[200])
    {
        int flag=0;
        if(strcmp(sname, name)==0)
        {
            flag =  1;
        }
        else
        {
            flag = 0;
        }

        return flag;

    }
};
int main()
{
    int id, run;
    char name[200];
    int size;
    cout<<"Enter how many plyers : ";
    cin>>size;
    player p[size];
    for(int i=0; i<size; i++)
    {
        cout<<"\nPlAYER = "<<i+1<<endl;
        cout<<"Enter Id : ";
        cin>>id;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Run : ";
        cin>>run;

        p[i].setData(id, name, run);
    }

    for(int i=0; i<size; i++)
    {
        p[i].getData();
    }

    cout<<"Enter Serch player name   : ";
    char sName[200];
    cin>>sName;
    int flag = 0;
    for(int i=0; i<size; i++)
    {
        
        if(p[i].serach(sName))
        {
            flag=1;
            break;
        }
        else
        {
            flag = 0;
            
        }
    }

    if(flag)
    {
        cout<<"\nPresent ";

    }
    else{
        cout<<"\nNot present";
    }

    return 0;
}