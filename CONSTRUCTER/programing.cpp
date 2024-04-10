// 3) Create a class named 'Programming'. While creating an object of the class, if nothing is
// passed to it, then the message "I love programming languages" should be printed. If some
// String is passed to it, then in place of "programming languages" the name of that String
// variable should be printed.
// For example, while creating object if we pass "Java", then "I love Java" should be printed.

#include <iostream>
using namespace std;

class Programing
{
public:
    Programing()
    {
        cout << "\nI Love Programing Languages.";
    }

    Programing(string add)
    {
        cout << "\nI Love " << add;
    }
};
int main()
{

    Programing p;
    Programing pro1("Java");

    return 0;
}