#include<iostream>
using namespace std;

int main()
{

    void add (int , int);
    void add(float, float);
    int a, b;
    cout<<"Entrr the value of A and B : "<<endl;
    cin>>a;
    cin>>b;
    add(a,b);
    float x, y;
    cout<<"Entrr the value of A and B : "<<endl;
    cin>>x;
    cin>>y;
    add(x,y);

    return 0;
}


void add(int x, int y)
{
    cout<<x+y;
}

void add(float x, float y)
{
    cout<<x+y;
}