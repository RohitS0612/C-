#include<iostream>
using namespace std;

class Interest
{
    protected:
    int p;
    int r;
    int d;

    public:
    void setPRD(int pamt, int irate, int dur)
    {
        p = pamt;
        r = irate;
        d = dur;
    }
};

class CalculateInterest : public Interest {

    private:
    int interest;
    public:
    void callIntrest() {

        interest = (p * r * d )/ 100;
        cout<<"Interest = "<<interest;
    }
};

int main()
{

    int p, r, d;
    cout<<"Enter pamoutn , rate, dur : ";
    cin>>p;
    cin>>r;
    cin>>d;

    CalculateInterest c;
    c.setPRD(p, r, d);
    c.callIntrest();
    return 0;
}