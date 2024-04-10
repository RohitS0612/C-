#include <iostream>
using namespace std;

int calArea(int x)
{
    // calculate area of circle
    return 3.14 * x * x;
}

int calArea(int x, int y)
{
    // claculate area of reactangle

    return x * y;
}

float calArea(int b, float h)
{
    // calculate of triangle
    return 0.5 * b * h;
}
int main()
{
    int radius;
    cout << "Enter the Radius : ";
    cin >> radius;
    cout << "Area of " << radius << " circle is = " << calArea(radius) << endl;

    int length, Bridth;
    cout << "\nEnter the area length and bridth = ";
    cin >> length;
    cin >> Bridth;
    cout << "\nArea of triangle is " << length << " and " << Bridth << " is = " << calArea(length, Bridth) << endl;

    int base;
    float hiegth;
    cout << "Enter the base and Hiegth = ";
    cin >> base;
    cin >> hiegth;
    cout << "\n"
         << base << " And " << hiegth << " triangle is : " << calArea(base, hiegth);

    return 0;
}