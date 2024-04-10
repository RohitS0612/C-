#include <iostream>
using namespace std;
class Rectangle
{
    private:
    float rectangle;
    public:
    void setLengthWidth(int len, int wid) // accept the radius
    {
        rectangle =  len*wid;
    }
    public:
    void showArea()
    { // write here calculation logics of circle area and display it

    cout<<"Rectangle is : "<<rectangle;

    }
};
int main()
{ // create here object of class and accept the length and width as input //create the object of
    // Rectangle and call setLengthWidth and pass radius input as parameter //call showArea() for
    // display the display the area

    Rectangle r;
    int len, width;
    cout<<"Enter the length and width: ";
    cin>>len;
    cin>>width;
    r.setLengthWidth(len, width);
    r.showArea();
}