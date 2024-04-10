#include <iostream>
#include <string.h>
#include <sstream>
#include <ctime>
#include <iomanip>
using namespace std;

double calculateAge(int , int, int);
class Voter
{
    // Voter : voter class contain info id, name , wardno , dob  write a setter and getter method

private:
    int id;
    char name[20];
    int wardno;
    char dateOfBirth[100];

public:
    void setId(int id)
    {
        this->id = id;
    }

    int getId()
    {
        return id;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    char *getName()
    {
        return name;
    }

    void setWardNo(int wardno)
    {
        this->wardno = wardno;
    }

    int getWardNo()
    {
        return wardno;
    }

    void setDob(char dateOfBirth[])
    {
        strcpy(this->dateOfBirth, dateOfBirth);
    }

    char * getDateOfBirth()
    {
        return dateOfBirth;
    }
};

class ValidVoter
{
private:
    Voter *v;

public:
    void acceptsVoters(Voter *v)
    {
        this->v = v;
    }

    void validVoter(int size)
    {
        for (int i = 0; i < size; i++)
        {
            if (calculateAge(v[i].getD(), v[i].getM(), v[i].getY()) > 18)
            {
                cout << "\nVoter is Valid ";
            }
            else
            {
                cout << "\nVoter is not valid ";
            }
        }
    }

    // void calWardWiseValidVoter(int size)
    // {

    // }
};

int main()
{
    time_t now = time(0); //get current time 

    tm *ltm = localtime(&now);
    ValidVoter vv;
    Voter *v;
    int size;
    cout << "Enter the Total Memebrs / Voters : ";
    cin >> size;
    v = (Voter *)malloc(sizeof(Voter) * size);
    int id, wardno;
    char name[20];
    

    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter Id : ";
        cin >> id;
        v[i].setId(id);

        cout << "\nEnter Name : ";
        cin >> name;
        v[i].setName(name);

        cout << "\nEnter Ward Number : ";
        cin >> wardno;
        v[i].setWardNo(wardno);

        cout << "Enter Your Date of Birth ( Day Month Year): ";
        cin >> d >> m >> y;

        v[i].setDob(d, m, y);
    }

    vv.acceptsVoters(v);
    vv.validVoter(size);

    return 0;
}

double calculateAge(int day, int month, int year)
{


}