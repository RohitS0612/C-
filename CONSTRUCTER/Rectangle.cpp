// 1) Create a class named 'Rectangle' with two data members- length and breadth and a
// method to calculate the area which is 'length*breadth'. The class has three constructors
// which are :
// 1 - having no parameter - values of both length and breadth are assigned zero.
//  2 - having two numbers as parameters - the two numbers are assigned as length and
// breadth respectively.
// 3 - having one number as parameter - both length and breadth are assigned that number.
// Now, create objects of the 'Rectangle' class having none, one and two parameters and print
// their areas.

#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length , bridth;
    public:
    Rectangle()
    {
        length = 0;
        bridth = 0;
        
    }

    Rectangle(int l, int b)
    {
        length = l;
        bridth = b;

        
    }

    Rectangle(int x)
    {
        length = x;
        bridth = x;
        
    }

    int cal ()
    {
        return length * bridth;
    }



};
int main()
{

    Rectangle re;
    Rectangle re1(5);
    Rectangle re2(10, 5);


    cout<<"\nRectangle with no parameter : "<<re.cal();
    cout<<"\nReectangle with one paraameter : "<<re1.cal();
    cout<<"\nRectangle with Two Parameters : "<<re2.cal();

    return 0;
}