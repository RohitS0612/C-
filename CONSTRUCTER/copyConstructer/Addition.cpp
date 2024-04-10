#include<iostream>
using namespace std;

class Addition
{
    private:
    int x;
    int sum;

    public:
    Addition(int x)
    {
        this->x=x;
    }

    Addition(int a, Addition &obj1)
    {
        x=a;
        sum=this->x+obj1.x;
    }

    void show()
    {
        cout<<sum;
    }
};

int main()
{
    Addition obj(10);
    Addition obj1(20, obj);
    obj1.show();
    return 0;
}