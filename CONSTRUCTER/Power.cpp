// Q.2 WAP to Create a class name as Power with a parameterised constructor and one function int getPower( ).

// Power(int , int)
// {
// // this constructor can accept the base and index.
// }
// int getPower()
// {
// //this function can return power of numbers.
// }

#include<iostream>
using namespace std;

class Power
{
    private:
    int index, base;
    public:
    Power(int index, int base)
    {
        this->index=index;
        this->base=base;
    }

    int getPower()
    {
        int power = 1;
        for(int i=1; i<=index; i++)
        {
            power = power * base;
        }
        return power;
    }
};
int main()
{

    int index, base;

    cout<<"Enter Index and Base : ";
    cin>>index>>base;

    Power obj(index, base);
    cout<<"Power is : "<<obj.getPower();
    return 0;
}