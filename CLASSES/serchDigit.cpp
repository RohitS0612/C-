#include <iostream>
using namespace std;
class search
{
private:
    int no;

public:
    void setdata(int n)
    {
        no = n;
    }

    int searchDigit(int sdigit)
    {
        int flag = 0;
        while (no != 0)
        {
            int rem = no % 10;
            no = no / 10;
            if (sdigit == rem)
            {
                flag = 1;
                break;
            }
        }
        return flag;
    }
};
int main()
{

    int no;
    cout << "Enter Number  : ";
    cin >> no;
    cout << "Enter search digit :  ";
    int sch;
    cin >> sch;

    search s;

    s.setdata(no);
    int result = s.searchDigit(sch);
    if (result)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
    return 0;
}