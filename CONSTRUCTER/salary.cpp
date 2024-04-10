#include <iostream>
using namespace std;

class Salary
{
private:
    string name, contact;
    int id, presentDay, perDaySalary, total;

public:
    Salary(string name, int id, string contact, int presentDay, int perDaySalary)
    {
        this->name = name;
        this->id = id;
        this->contact = contact;
        this->presentDay = presentDay;
        this->perDaySalary = perDaySalary;
    }

    void calculateSalary()
    {
        total = perDaySalary * presentDay;
    }

    void show()
    {
        cout << "Id : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Contact : " << contact << endl;
        cout << "Present day : " << presentDay << endl;
        cout << "Per Day Salary : " << perDaySalary << endl;
        cout << "Total Salary : " << total << endl;
    }
};
int main()
{
    Salary s("Rohit Shetake", 6, "9309723198", 25, 500);

    s.calculateSalary();
    s.show();
    return 0;
}