#include<iostream>
#include<string.h>
using namespace std;
class player
{
private:
int id;
char name[200];
int run;

void setId(int id)
{
    this->id;
}
int getId()
{
    return id;
}

void setName( char name[200])
{
    strcpy(this->name, name);
}

char* getName()
{
    return name;
}

void setRun(int run)
{
    this->run = run;
}

int getRun()
{
    return run;
}


};
int main()
{
    int id, run;
    char name[200];
    int size, *p;

    cout<<"Enter how many plyers in the data : ";
    cin>>size;
    player *p;
    p = (player * )malloc (sizeof(player )* size);
    


    for(int i=0; i<size; i++)
    {
        cout<<"\nEnter Id : ";
        cin>>id;
        cout<<"\nEnter Name  : ";
        cin>>name;
        cout<<"Enter run : ";
        cin>>run;
        p[i].



    }


    return 0;
}