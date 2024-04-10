#include <iostream>
using namespace std;

class circle
{   

    private:
        float area;
    public:
    void setRadius(float radius) // accept the radius
    {
         area = 3.14*radius*radius;
    }
    public:
    void showArea()
    { // write here calculation logics of circle area and display it
        cout<<"circle is = "<<area;
    }
};
int main()
{
    // create here object of and class accept the radius as input
    // create the object of area and call setRadius and pass radius input as parameter
    // call showArea() for display the display the area

    circle c;
    float radius;
    cout<<"Enter the radius : ";
    cin>>radius;
    c.setRadius(radius);
    c.showArea();

}
