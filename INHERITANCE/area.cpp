#include <iostream>
using namespace std;

class Area
{ // Abstract class

    virtual void showArea() = 0; // virtual function
};

class Circle : public Area
{

    int radius;

public:
    void setRadius(int radius)
    {
        this->radius = radius;
    }

    void showArea()
    {
        int area = 3.14 * radius * radius;
        cout << "Area of circle is : " << area << endl;
    }
};

class Rectangle : public Area
{
    int len, width;

public:
    void setLengthWidth(int len, int width)
    {
        this->len = len;
        this->width = width;
    }

    void showArea()
    {
        int area = len * width;
        cout<<"Area of rectangle is : "<<area<<endl;
    }
};
int main()
{

    Circle c;
    c.setRadius(16);
    c.showArea();

    Rectangle r;
    r.setLengthWidth(5, 6);
    r.showArea();

    return 0;
}