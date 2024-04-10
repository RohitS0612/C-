// 2) Suppose you have a Piggie Bank with an initial amount of $50 and you have to add
// some more amount to it. Create a class 'AddAmount' with a data member named
// 'amount' with an initial value of $50. Now make two constructors of this class as follows:
// 1 - without any parameter - no amount will be added to the Piggie Bank 2 - having a
// parameter which is the amount that will be added to Piggie Bank Create object of the
// 'AddAmount' class and display the final amount in Piggie Bank.

#include <iostream>
using namespace std;

class AddAmount
{
    private:
    int add;

    public:
    AddAmount()
    {
        add = 50;
    }

    AddAmount(int amount)
    {
        add = 50 +  amount;
    }

    int show()
    {
        return add;
    }

};

int main()
{

    AddAmount add;

    AddAmount addm(50);

    cout<<"\nAmount whithout Added  $"<<add.show();

    cout<<"\nAmount Whith Added $"<<addm.show();

    return 0;
}