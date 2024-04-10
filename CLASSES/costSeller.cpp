#include <iostream>
using namespace std;

class sellerCost
{
private:
    int sell, cost, profit;

public:
    void acceptSellinCost(int cp, int sp)
    {
        // here we need to store the sp and sp values in instance variable.
        sell = sp;
        cost = cp;
    }

public:
    void showProfitLoss()
    {
        // here we need to write the logics for profit and loss.
        if (sell > cost)
        {
            cout << endl<< sell - cost << " Profit ";
        }

        if (cost > sell)
        {
            cout << endl << cost - sell << " Loss ";
        }
    }
};
int main()
{
    sellerCost s;
    int sell , cost;
    cout<<"Enter the cost price :";
    cin>>cost;
    cout<<"Enter the selling price : ";
    cin>>sell;

    s.acceptSellinCost(cost, sell);
    s.showProfitLoss();

    return 0;
}