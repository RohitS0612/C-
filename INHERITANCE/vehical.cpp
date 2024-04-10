#include <iostream>
using namespace std;

class Vehical
{
private:
    string name;
    int avg;
    int Reg, speed, fuelcap, fuelcon, distance, time, fuel;

public:
    Vehical(string name, int Reg, int speed, int fuelcap, int fuelcon, int distance, int time, int avg, int fuel)
    {
        this->name = name;
        this->Reg = Reg;
        this->speed = speed;
        this->fuelcap = fuelcap;
        this->fuelcon = fuelcon;
        this->distance = distance;
        this->time = time;
        this->fuel = fuel;
        this->avg = avg;
    }

    string getName()
    {
        return name;
    }

    int getRegno()
    {
        return Reg;
    }

    int getSpeed()
    {
        return speed;
    }

    int getFuelcap()
    {
        return fuelcap;
    }

    int getFuelcon()
    {
        return fuelcon;
    }

    void fuelNeeded()
    {
        int amount = distance / avg * 100;
        cout<<"Fuel Nedded: "<<amount<<endl;
    }

    void distanceCovered(int distance)
    {
        speed = distance / time;
        cout<<" Speed: "<<speed<<endl;
    }

    virtual void  display()
    {
        cout<<" Vehicle mode: "<<name<<endl;
        cout<<" Registration number: "<<Reg<<endl;
        cout<<" Vehicle speed (km/hour): "<<speed<<endl;
        cout<<" Fuel capacity (liters): "<<fuelcap<<endl;
        cout<<" Fuel consumption (kilo meters/liter): "<<fuelcon<<endl;
    }
};

class Truck : public Vehical
{
    private:
    double  weigth;
    int limit;

    public:
    Truck(int weight, int limit)
    {
        this->weigth=limit;
        this->limit=limit;
    }

    int getWeight()
    {
        return weigth;
    }

    int getLimit()
    {
        return limit;
    }
    
    void display()
    {
        if(weigth> limit)
        {
            cout<<"Over weight"<<endl;
        }
        else
        {
            cout<<"Weiht in a limit"<<endl;
        }
    }


};

int main()
{

    return 0;
}